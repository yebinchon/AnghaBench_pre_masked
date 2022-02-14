
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*,int) ;

int
FUNC_2(const char *VAR_0, const char *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 <= 1)
  return (1);

 if ((FUNC_1(VAR_0, VAR_1, VAR_2) == 0) && (VAR_0[VAR_2] == '/' || VAR_0[VAR_2] == '\0'))
  return (1);

 return (0);
}
