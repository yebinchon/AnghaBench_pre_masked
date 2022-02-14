
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 size_t FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*,int const*,size_t) ;

wchar_t *
FUNC_2(const wchar_t * __restrict VAR_0, const wchar_t * __restrict VAR_1)
{
 wchar_t VAR_2, VAR_3;
 size_t VAR_4;

 if ((VAR_2 = *VAR_1++) != L'\0') {
  VAR_4 = FUNC_0(VAR_1);
  do {
   do {
    if ((VAR_3 = *VAR_0++) == L'\0')
     return (((void*)0));
   } while (VAR_3 != VAR_2);
  } while (FUNC_1(VAR_0, VAR_1, VAR_4) != 0);
  VAR_0--;
 }
 return ((wchar_t *)VAR_0);
}
