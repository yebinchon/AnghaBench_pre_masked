
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char const*) ;

int
FUNC_3(const char *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;






 VAR_4 = FUNC_2(VAR_1);
 if (VAR_4 == 0 || VAR_4 >= 64)
  return (VAR_0);
 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  VAR_2 = VAR_1[VAR_3];
  if (FUNC_0(VAR_2) || FUNC_1(VAR_2) || VAR_2 == '_' ||
      VAR_2 == '-' || VAR_2 == '.')
   continue;
  return (VAR_0);
 }
 return (0);
}
