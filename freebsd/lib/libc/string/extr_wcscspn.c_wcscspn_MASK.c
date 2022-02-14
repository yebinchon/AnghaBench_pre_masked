
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;



size_t
FUNC_0(const wchar_t *VAR_0, const wchar_t *VAR_1)
{
 const wchar_t *VAR_2;
 const wchar_t *VAR_3;

 VAR_2 = VAR_0;
 while (*VAR_2) {
  VAR_3 = VAR_1;
  while (*VAR_3) {
   if (*VAR_2 == *VAR_3)
    goto done;
   VAR_3++;
  }
  VAR_2++;
 }

done:
 return (VAR_2 - VAR_0);
}
