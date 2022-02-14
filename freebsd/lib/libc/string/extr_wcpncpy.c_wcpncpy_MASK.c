
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;



wchar_t *
FUNC_0(wchar_t * __restrict VAR_0, const wchar_t * __restrict VAR_1, size_t VAR_2)
{

 for (; VAR_2--; VAR_0++, VAR_1++) {
  if (!(*VAR_0 = *VAR_1)) {
   wchar_t *VAR_3 = VAR_0;
   while (VAR_2--)
    *++VAR_0 = L'\0';
   return (VAR_3);
  }
 }
 return (VAR_0);
}
