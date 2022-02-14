
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
char *
FUNC_0(char *VAR_0)
{
 int VAR_1 = 0;

 if (*VAR_0 == ':')
  return ((void*)0);
 if (*VAR_0 == '[')
  VAR_1 = 1;

 for (; *VAR_0; ++VAR_0) {
  if (*VAR_0 == '@' && *(VAR_0+1) == '[')
   VAR_1 = 1;
  if (*VAR_0 == ']' && *(VAR_0+1) == ':' && VAR_1)
   return (VAR_0+1);
  if (*VAR_0 == ':' && !VAR_1)
   return (VAR_0);
  if (*VAR_0 == '/')
   return ((void*)0);
 }
 return ((void*)0);
}
