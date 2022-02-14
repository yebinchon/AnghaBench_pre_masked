
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;



int
FUNC_0(const wchar_t *VAR_0, const wchar_t *VAR_1, size_t VAR_2)
{
 size_t VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  if (*VAR_0 != *VAR_1) {

   return *VAR_0 > *VAR_1 ? 1 : -1;
  }
  VAR_0++;
  VAR_1++;
 }
 return 0;
}
