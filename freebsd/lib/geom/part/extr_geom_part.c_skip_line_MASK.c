
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_0)
{

 while (*VAR_0 != '\0') {
  if (*VAR_0 == '#')
   return (1);
  if (FUNC_0(*VAR_0) == 0)
   return (0);
  VAR_0++;
 }
 return (1);
}
