
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
char *
FUNC_0(char *VAR_0)
{
 int VAR_1, VAR_2;

 if (*VAR_0 == '^')
  VAR_0++;
 if (*VAR_0 == ']')
  VAR_0++;
 for (; *VAR_0 != ']' && *VAR_0 != '\n'; VAR_0++)
  if (*VAR_0 == '[' && ((VAR_2 = *(VAR_0+1)) == '.' || VAR_2 == ':' || VAR_2 == '='))
   for (VAR_0++, VAR_1 = *++VAR_0; *VAR_0 != ']' || VAR_1 != VAR_2; VAR_0++)
    if ((VAR_1 = *VAR_0) == '\n')
     return ((void*)0);
 return (*VAR_0 == ']') ? VAR_0 : ((void*)0);
}
