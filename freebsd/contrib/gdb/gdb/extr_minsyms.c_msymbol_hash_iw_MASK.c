
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;

unsigned int
FUNC_1 (const char *VAR_0)
{
  unsigned int VAR_1 = 0;
  while (*VAR_0 && *VAR_0 != '(')
    {
      while (FUNC_0 (*VAR_0))
 ++VAR_0;
      if (*VAR_0 && *VAR_0 != '(')
 {
   VAR_1 = VAR_1 * 67 + *VAR_0 - 113;
   ++VAR_0;
 }
    }
  return VAR_1;
}
