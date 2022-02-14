
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void
FUNC_0(char *VAR_0, char *VAR_1)
{
 char *VAR_2;

 *VAR_1 = *VAR_0;
 for (VAR_2 = VAR_1; *VAR_0 != '\0'; *VAR_1++ = *VAR_0++) {


  while (*VAR_0 == '/' && *(VAR_0 + 1) == '/')
    VAR_0++;
 }


 if (VAR_1 - VAR_2 > 1 && *(VAR_1 - 1) == '/')
  *(VAR_1 - 1) = '\0';
 else
  *VAR_1 = '\0';
}
