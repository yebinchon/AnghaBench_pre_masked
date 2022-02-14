
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*) ;

int
FUNC_2(const char *VAR_0, const char *VAR_1)
{
 int VAR_2, VAR_3;

 if (FUNC_1(VAR_0, VAR_1) == 0)
  return (1);
 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2 == 0)
  return (0);
 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3 == 0)
  return (0);
 if (FUNC_1(VAR_0 + VAR_2, VAR_1 + VAR_3) == 0)
  return (1);
 return (0);
}
