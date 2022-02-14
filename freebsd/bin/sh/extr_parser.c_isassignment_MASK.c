
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;
 int FUNC_1 (char const) ;

int
FUNC_2(const char *VAR_0)
{
 if (!FUNC_1(*VAR_0))
  return 0;
 VAR_0++;
 for (;;) {
  if (*VAR_0 == '=')
   return 1;
  else if (!FUNC_0(*VAR_0))
   return 0;
  VAR_0++;
 }
}
