
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CHAR16 ;



int
FUNC_0(CHAR16 *VAR_0, CHAR16 *VAR_1)
{

 while (*VAR_0 && *VAR_1 && *VAR_0 == *VAR_1) {
  VAR_0++;
  VAR_1++;
 }
 return *VAR_0 - *VAR_1;
}
