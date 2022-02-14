
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 char FUNC_1 (char const) ;

void
FUNC_2(char *VAR_0, const char *VAR_1)
{
  for (; *VAR_1; VAR_0++, VAR_1++)
    if (FUNC_0(*VAR_1))
      *VAR_0 = FUNC_1(*VAR_1);
    else
      *VAR_0 = *VAR_1;
  *VAR_0 = '\0';
}
