
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int
FUNC_0(const char *VAR_0, const char *VAR_1)
{

 for (;;VAR_0++, VAR_1++) {
  if (*VAR_0 != *VAR_1) {
   if (*VAR_0 == '/' && *VAR_1 == '\0')
    return (1);
   else
    return (0);
  } else if (*VAR_0 == '\0')
   return (1);
 }

}
