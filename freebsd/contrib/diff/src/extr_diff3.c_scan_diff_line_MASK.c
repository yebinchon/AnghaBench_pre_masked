
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,char*) ;
 char* VAR_1 ;
 int FUNC_2 (char,int ) ;
 int VAR_2 ;

__attribute__((used)) static char *
FUNC_3 (char *VAR_3, char **VAR_4, size_t *VAR_5,
  char *VAR_6, char VAR_7)
{
  char *VAR_8;

  if (!(VAR_3[0] == VAR_7
 && VAR_3[1] == ' '))
    FUNC_0 ("invalid diff format; incorrect leading line chars");

  *VAR_4 = VAR_8 = VAR_3 + 2;
  while (*VAR_8++ != '\n')
    continue;






  *VAR_5 = VAR_8 - *VAR_4;
  if (VAR_8 < VAR_6 && *VAR_8 == '\\')
    {
      if (VAR_0)
 FUNC_1 (VAR_2, "%s:", VAR_1);
      else
 --*VAR_5;
      VAR_8++;
      do
 {
   if (VAR_0)
     FUNC_2 (*VAR_8, VAR_2);
 }
      while (*VAR_8++ != '\n');
    }

  return VAR_8;
}
