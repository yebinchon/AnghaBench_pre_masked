
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd ;


 char* FUNC_0 (int *,size_t) ;
 char* FUNC_1 (char*,char,size_t) ;
 int FUNC_2 (char*,char*,size_t) ;

char *
FUNC_3 (bfd *VAR_0, char *VAR_1, size_t VAR_2)
{
  char *VAR_3;
  char *VAR_4 = FUNC_1 (VAR_1, '\0', VAR_2);
  size_t VAR_5;

  if (VAR_4 == ((void*)0))
    VAR_5 = VAR_2;
  else
    VAR_5 = VAR_4 - VAR_1;

  VAR_3 = FUNC_0 (VAR_0, VAR_5 + 1);
  if (VAR_3 == ((void*)0))
    return ((void*)0);

  FUNC_2 (VAR_3, VAR_1, VAR_5);
  VAR_3[VAR_5] = '\0';

  return VAR_3;
}
