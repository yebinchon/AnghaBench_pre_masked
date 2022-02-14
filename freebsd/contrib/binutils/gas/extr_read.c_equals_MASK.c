
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 int FUNC_2 (char*,char) ;
 char* FUNC_3 (char*) ;

void
FUNC_4 (char *VAR_2, int VAR_3)
{
  char *VAR_4 = ((void*)0);
  char VAR_5 = 0;

  VAR_1++;
  if (*VAR_1 == '=')
    VAR_1++;
  if (VAR_3 < 0 && *VAR_1 == '=')
    VAR_1++;

  while (*VAR_1 == ' ' || *VAR_1 == '\t')
    VAR_1++;

  if (VAR_0)
    VAR_4 = FUNC_3 (&VAR_5);

  FUNC_0 (VAR_2, VAR_3 >= 0 ? !VAR_3 : VAR_3);

  if (VAR_0)
    {
      FUNC_1 ();
      FUNC_2 (VAR_4, VAR_5);
    }
}
