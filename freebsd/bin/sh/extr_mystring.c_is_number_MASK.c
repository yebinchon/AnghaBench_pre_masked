
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;

int
FUNC_2(const char *VAR_0)
{
 const char *VAR_1;

 if (*VAR_0 == '\0')
  return 0;
 while (*VAR_0 == '0')
  VAR_0++;
 for (VAR_1 = VAR_0; *VAR_1 != '\0'; VAR_1++)
  if (! FUNC_0(*VAR_1))
   return 0;
 if (VAR_1 - VAR_0 > 10 ||
     (VAR_1 - VAR_0 == 10 && FUNC_1(VAR_0, "2147483647", 10) > 0))
  return 0;
 return 1;
}
