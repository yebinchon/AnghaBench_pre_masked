
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;


 scalar_t__ FUNC_0 (scalar_t__ const) ;

int
FUNC_1(const wchar_t *VAR_0, const wchar_t *VAR_1, size_t VAR_2)
{
 wchar_t VAR_3, VAR_4;

 if (VAR_2 == 0)
  return (0);
 for (; *VAR_0; VAR_0++, VAR_1++) {
  VAR_3 = FUNC_0(*VAR_0);
  VAR_4 = FUNC_0(*VAR_1);
  if (VAR_3 != VAR_4)
   return ((int)VAR_3 - VAR_4);
  if (--VAR_2 == 0)
   return (0);
 }
 return (-*VAR_1);
}
