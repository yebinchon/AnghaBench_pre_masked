
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint128_t ;



char *
FUNC_0(uint128_t VAR_0, char *VAR_1, size_t VAR_2)
{
 char *VAR_3 = VAR_1 + VAR_2 - 1;

 *VAR_3-- = '\0';
 if (VAR_0 == 0)
  *VAR_3-- = '0';
 while (VAR_0 && VAR_3 >= VAR_1) {
  *VAR_3-- = VAR_0 % 10 + '0';
  VAR_0 /= 10;
 }
 VAR_3++;
 if (VAR_0 != 0)
  return ((void*)0);

 return VAR_3;
}
