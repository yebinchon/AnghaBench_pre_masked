
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6 (char *VAR_0, int VAR_1)
{
  char *VAR_2 = VAR_0;
  char *VAR_3;
  int VAR_4;

  if (VAR_0 == 0)
    {
      if (FUNC_5 ("Delete all auto-display expressions? "))
 FUNC_1 ();
      FUNC_3 ();
      return;
    }

  while (*VAR_2)
    {
      VAR_3 = VAR_2;
      while (*VAR_3 >= '0' && *VAR_3 <= '9')
 VAR_3++;
      if (*VAR_3 && *VAR_3 != ' ' && *VAR_3 != '\t')
 FUNC_4 ("Arguments must be display numbers.");

      VAR_4 = FUNC_0 (VAR_2);

      FUNC_2 (VAR_4);

      VAR_2 = VAR_3;
      while (*VAR_2 == ' ' || *VAR_2 == '\t')
 VAR_2++;
    }
  FUNC_3 ();
}
