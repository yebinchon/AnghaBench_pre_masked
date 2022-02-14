
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const wchar_t ;



wchar_t *
FUNC_0(const wchar_t *VAR_0, wchar_t VAR_1)
{

 while (*VAR_0 != VAR_1 && *VAR_0 != L'\0')
  VAR_0++;
 if (*VAR_0 == VAR_1)
  return ((wchar_t *)VAR_0);
 return (((void*)0));
}
