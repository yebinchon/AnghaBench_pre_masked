
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void
FUNC_0(char *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;

 for (; *VAR_0 != '\0'; VAR_0++)
  if (*VAR_0 == 'N')
   *VAR_0 = '\n';
  else if (*VAR_0 == 'T')
   *VAR_0 = '\t';
  else if (*VAR_0 == 'S')
   *VAR_0 = ' ';
  else if (*VAR_0 == 'Z')
   *VAR_0 = '\0';
}
