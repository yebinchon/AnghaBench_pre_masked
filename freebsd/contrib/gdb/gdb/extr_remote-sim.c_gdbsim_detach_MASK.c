
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 () ;
 char* VAR_0 ;

__attribute__((used)) static void
FUNC_3 (char *VAR_1, int VAR_2)
{
  if (FUNC_2 ())
    FUNC_1 ("gdbsim_detach: args \"%s\"\n", VAR_1);

  FUNC_0 ();
  if (VAR_2)
    FUNC_1 ("Ending simulator %s debugging\n", VAR_0);
}
