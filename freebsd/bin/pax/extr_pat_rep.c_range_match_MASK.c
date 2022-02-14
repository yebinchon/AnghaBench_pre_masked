
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static char *
FUNC_0(char *VAR_0, int VAR_1)
{
 char VAR_2;
 char VAR_3;
 int VAR_4;
 int VAR_5 = 0;

 if ((VAR_4 = (*VAR_0 == '!')) != 0)
  ++VAR_0;

 while ((VAR_2 = *VAR_0++) != ']') {



  if (VAR_2 == '\0')
   return (((void*)0));

  if ((*VAR_0 == '-') && ((VAR_3 = VAR_0[1]) != '\0') &&
      (VAR_3 != ']')) {
   if ((VAR_2 <= VAR_1) && (VAR_1 <= VAR_3))
    VAR_5 = 1;
   VAR_0 += 2;
  } else if (VAR_2 == VAR_1)
   VAR_5 = 1;
 }
 return (VAR_5 == VAR_4 ? ((void*)0) : VAR_0);
}
