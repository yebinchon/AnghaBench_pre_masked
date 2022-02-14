
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static int
FUNC_2 (void)
{
  extern int FUNC_3 ();
  int VAR_2;

  for (;;)
    {
      VAR_2 = FUNC_1 ();
      if (VAR_2 == 'y' || VAR_2 == 'Y' || VAR_2 == ' ')
 return (1);
      if (VAR_2 == 'n' || VAR_2 == 'N' || VAR_2 == VAR_1)
 return (0);
      if (VAR_2 == VAR_0)
 FUNC_3 ();
      FUNC_0 ();
    }
}
