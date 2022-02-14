
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;



wchar_t *
FUNC_0(wchar_t * __restrict VAR_0, const wchar_t * __restrict VAR_1, size_t VAR_2)
{
 if (VAR_2 != 0) {
  wchar_t *VAR_3 = VAR_0;
  const wchar_t *VAR_4 = VAR_1;

  do {
   if ((*VAR_3++ = *VAR_4++) == L'\0') {

    while (--VAR_2 != 0)
     *VAR_3++ = L'\0';
    break;
   }
  } while (--VAR_2 != 0);
 }
 return (VAR_0);
}
