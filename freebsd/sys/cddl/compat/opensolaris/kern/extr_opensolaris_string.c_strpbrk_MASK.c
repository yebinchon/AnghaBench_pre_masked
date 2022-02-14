
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
char *
FUNC_0(const char *VAR_0, const char *VAR_1)
{
 const char *VAR_2;

 do {
  for (VAR_2 = VAR_1; *VAR_2 != '\0' && *VAR_2 != *VAR_0; ++VAR_2)
   ;
  if (*VAR_2 != '\0')
   return ((char *)VAR_0);
 } while (*VAR_0++);

 return (((void*)0));
}
