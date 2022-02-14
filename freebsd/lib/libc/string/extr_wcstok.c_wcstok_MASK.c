
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;



wchar_t *
FUNC_0(wchar_t * __restrict VAR_0, const wchar_t * __restrict VAR_1,
    wchar_t ** __restrict VAR_2)
{
 const wchar_t *VAR_3;
 wchar_t *VAR_4;
 wchar_t VAR_5, VAR_6;

 if (VAR_0 == ((void*)0) && (VAR_0 = *VAR_2) == ((void*)0))
  return (((void*)0));




cont:
 VAR_5 = *VAR_0++;
 for (VAR_3 = VAR_1; (VAR_6 = *VAR_3++) != L'\0';) {
  if (VAR_5 == VAR_6)
   goto cont;
 }

 if (VAR_5 == L'\0') {
  *VAR_2 = ((void*)0);
  return (((void*)0));
 }
 VAR_4 = VAR_0 - 1;





 for (;;) {
  VAR_5 = *VAR_0++;
  VAR_3 = VAR_1;
  do {
   if ((VAR_6 = *VAR_3++) == VAR_5) {
    if (VAR_5 == L'\0')
     VAR_0 = ((void*)0);
    else
     VAR_0[-1] = L'\0';
    *VAR_2 = VAR_0;
    return (VAR_4);
   }
  } while (VAR_6 != L'\0');
 }

}
