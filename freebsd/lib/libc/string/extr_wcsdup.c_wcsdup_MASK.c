
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int * FUNC_0 (size_t) ;
 int FUNC_1 (int const*) ;
 int * FUNC_2 (int *,int const*,size_t) ;

wchar_t *
FUNC_3(const wchar_t *VAR_0)
{
 wchar_t *VAR_1;
 size_t VAR_2;

 VAR_2 = FUNC_1(VAR_0) + 1;
 if ((VAR_1 = FUNC_0(VAR_2 * sizeof(wchar_t))) == ((void*)0))
  return (((void*)0));
 return (FUNC_2(VAR_1, VAR_0, VAR_2));
}
