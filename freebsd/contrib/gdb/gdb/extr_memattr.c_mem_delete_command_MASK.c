
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_7 (char *VAR_1, int VAR_2)
{
  char *VAR_3 = VAR_1;
  char *VAR_4;
  int VAR_5;

  FUNC_1 (VAR_0);

  if (VAR_3 == 0)
    {
      if (FUNC_6 ("Delete all memory regions? "))
 FUNC_4 ();
      FUNC_2 ();
      return;
    }

  while (*VAR_3)
    {
      VAR_4 = VAR_3;
      while (*VAR_4 >= '0' && *VAR_4 <= '9')
 VAR_4++;
      if (*VAR_4 && *VAR_4 != ' ' && *VAR_4 != '\t')
 FUNC_3 ("Arguments must be memory region numbers.");

      VAR_5 = FUNC_0 (VAR_3);
      FUNC_5 (VAR_5);

      VAR_3 = VAR_4;
      while (*VAR_3 == ' ' || *VAR_3 == '\t')
 VAR_3++;
    }

  FUNC_2 ();
}
