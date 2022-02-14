
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(const char *VAR_0, size_t VAR_1)
{
 while (VAR_1-- > 0) {
  if ((*VAR_0 >= '0' && *VAR_0 <= '9')
      || (*VAR_0 >= 'a' && *VAR_0 <= 'f')
      || (*VAR_0 >= 'A' && *VAR_0 <= 'F'))
   ++VAR_0;
  else
   return (0);
 }
 return (1);
}
