
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int count ;


 int VAR_0 ;
 int FUNC_0 (int*,int ,int) ;

__attribute__((used)) static int
FUNC_1(void **VAR_1, void **VAR_2, int VAR_3, int (*VAR_4)(void *VAR_5), int VAR_6)
{
 int VAR_7;
 int VAR_8[VAR_0];
 int VAR_9[VAR_6];

 FUNC_0(VAR_9, 0, sizeof(VAR_9));

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  int VAR_10;
  VAR_8[VAR_7] = VAR_10 = VAR_4(VAR_2[VAR_7]);
  VAR_9[VAR_10]++;
 }

 for (VAR_7 = 2; VAR_7 < VAR_6; VAR_7++)
  VAR_9[VAR_7] += VAR_9[VAR_7 - 1];

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  VAR_1[VAR_9[VAR_8[VAR_7] - 1]++] = VAR_2[VAR_7];
  VAR_2[VAR_7] = ((void*)0);
 }

 return 0;
}
