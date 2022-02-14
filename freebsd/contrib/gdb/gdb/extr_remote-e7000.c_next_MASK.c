
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int) ;
 char* FUNC_1 (int) ;

__attribute__((used)) static char *
FUNC_2 (char **VAR_0)
{
  char *VAR_1 = *VAR_0;
  char *VAR_2;
  char *VAR_3;
  int VAR_4 = 0;

  while (*VAR_1 && *VAR_1 == ' ')
    VAR_1++;
  VAR_2 = VAR_1;
  while (*VAR_1 && (*VAR_1 != ' ' && *VAR_1 != '\t'))
    {
      VAR_4++;
      VAR_1++;
    }
  VAR_3 = FUNC_1 (VAR_4 + 1);
  FUNC_0 (VAR_3, VAR_2, VAR_4);
  VAR_3[VAR_4] = 0;
  *VAR_0 = VAR_1;
  return VAR_3;
}
