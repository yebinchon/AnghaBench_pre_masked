
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int locale_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

int
FUNC_2(const wchar_t *VAR_0, size_t VAR_1, locale_t VAR_2)
{
 wchar_t VAR_3;
 int VAR_4, VAR_5;
 FUNC_0(VAR_2);

 VAR_4 = 0;
 while (VAR_1-- > 0 && (VAR_3 = *VAR_0++) != L'\0') {
  if ((VAR_5 = FUNC_1(VAR_3, VAR_2)) < 0)
   return (-1);
  VAR_4 += VAR_5;
 }
 return (VAR_4);
}
