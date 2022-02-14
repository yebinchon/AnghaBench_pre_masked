
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int) ;

__attribute__((used)) static char *
FUNC_1(char *VAR_0)
{
 int VAR_1;
 char *VAR_2, *VAR_3;

 for (VAR_2 = VAR_0, VAR_1 = 0; *VAR_2; VAR_2++)
  if (*VAR_2 == '"')
   VAR_1++;

 if ((VAR_3 = FUNC_0(VAR_2 - VAR_0 + VAR_1 + 1)) == ((void*)0))
  return (((void*)0));

 for (VAR_2 = VAR_3; *VAR_0; VAR_0++, VAR_2++) {
  if ((*VAR_2 = *VAR_0) == '"')
   *(++VAR_2) = '"';
 }
 *VAR_2 = '\0';

 return (VAR_3);
}
