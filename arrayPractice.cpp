#include <iostream>
#include <climits>
using namespace std;

int main()
{
	//to find the smallest element in an array
	int arr1[5] = { 1,2,3,4,5 };
	int smallest = INT_MAX; //INT_MAX is the maximum value of an integer like positive infinity
	for (int i = 0; i < 5; i++) {
		if (arr1[i] < smallest)smallest = arr1[i];
	}
	cout << smallest;
	

	//to find the smallest element in an array
	int arr2[5] = { 1,2,3,4,5 };
	int largest = INT_MIN; //INT_MIN is the minimum value of an integer like negative infinity
	for (int i = 0; i < 5; i++) {
		if (arr2[i] > largest)largest = arr2[i];
	}
	cout << largest;

	//to find the sum of all elements in an array
	int arr3[5] = { 143,223,312,412,521 };
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum = sum + arr3[i];
	}
	cout << sum;

	//The most complex one, reversing an array by me

	int arr4[] = { 1,2,3,4,5 };
	int size = sizeof(arr4) / sizeof(int);
	for (int i = 0, j = (size - 1); i < (size - 1), j > 0; i++, j--) {
		if (j == i){
			break;
		}
		else
		{
		swap(arr4[i], arr4[j]);
		}
	}

	cout << "The reversed array is: " << arr4[0] << arr4[1] << arr4[2] << arr4[3] << arr4[4] << endl;
	
//sum of two
 //int arr5[5] = { 1,2,3,4,5 };
 //int arr6[5] = { 6,7,8,9,10 };

 //int arr7[5];

 //for (int i = 0; i < 5; i++)
 //{
 //	arr7[i] = arr5[i]+arr6[i];
 //}
 //cout << "The sum of the two arrays is: " << arr7[0] << endl << arr7[1] << endl << arr7[2] << endl << arr7[3] << endl << arr7[4] << endl;

	//merging two arrays
	int arr5[5] = { 1,2,3,4,5 };
	int arr6[5] = { 6,7,8,9,10 };
	
	int arr7[5];
	int size_arr5 = sizeof(arr5) / sizeof(int);
	int size_arr6 = sizeof(arr6) / sizeof(int);
	for (int a=0, i = size_arr5; a<size_arr6, i < (size_arr5 + size_arr6); a++, i++)
	{
		arr5[i] = arr6[a];
	}
	cout << "The merged array is: " << arr5[0] << arr5[1] << arr5[2] << arr5[3] << arr5[4] << arr5[5] << arr5[6] << arr5[7] << arr5[8] << arr5[9] << endl;



	return 0;
}
