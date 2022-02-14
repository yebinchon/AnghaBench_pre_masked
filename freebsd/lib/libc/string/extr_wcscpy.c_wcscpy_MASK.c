
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;



wchar_t *
FUNC_0(wchar_t * __restrict VAR_0, const wchar_t * __restrict VAR_1)
{
 wchar_t *VAR_2;

 VAR_2 = VAR_0;
 while ((*VAR_2++ = *VAR_1++) != L'\0')
  ;

 return (VAR_0);
}
