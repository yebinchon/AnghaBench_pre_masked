
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void
FUNC_0(char *VAR_0)
{
 char *VAR_1;
 char *VAR_2;

 if (VAR_0 == ((void*)0))
  return;
 VAR_1 = VAR_2 = VAR_0;
 while (*VAR_1 == ' ')
  VAR_1++;
 while ((*VAR_0 = *VAR_1++))
  if (*VAR_0++ != ' ')
   VAR_2 = VAR_0;
 *VAR_2 = 0;
}
