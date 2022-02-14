
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(const char *VAR_0, const char *VAR_1, size_t VAR_2)
{
 while (VAR_2-- && *VAR_1 != '\0')
  if (*VAR_0 != *VAR_1)
   return ((unsigned char)*VAR_0 - (unsigned char)*VAR_1);
  else
   ++VAR_0, ++VAR_1;
 return ((unsigned char)*VAR_0);
}
