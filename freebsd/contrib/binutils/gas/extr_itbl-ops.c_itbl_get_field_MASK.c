
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*,int) ;

char *
FUNC_3 (char **VAR_0)
{
  static char VAR_1[128];
  char *VAR_2;
  int VAR_3;

  VAR_2 = *VAR_0;
  if (!VAR_2 || !*VAR_2)
    return 0;

  VAR_3 = FUNC_1 (VAR_2, " \t,()");
  FUNC_0 (128 > VAR_3 + 1);
  FUNC_2 (VAR_1, VAR_2, VAR_3);
  VAR_1[VAR_3] = 0;
  if (VAR_2[VAR_3] == '\0')
    VAR_2 = 0;
  else
    VAR_2 += VAR_3 + 1;

  *VAR_0 = VAR_2;
  return VAR_1;
}
