
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int,int,int ) ;
 int FUNC_8 () ;

void
FUNC_9 (char *VAR_1, char *VAR_2, char **VAR_3)
{
  int VAR_4;

  if (VAR_2 && *VAR_2)
    FUNC_1 ("Can't pass arguments to remote process.");

  if (VAR_1 == 0 || VAR_0 == 0)
    FUNC_1 ("No executable file specified");

  VAR_4 = (int) FUNC_0 (VAR_0);
  FUNC_8 ();

  FUNC_4 ();
  FUNC_3 ();

  FUNC_5 ();
  FUNC_2 ();

  FUNC_6 ();
  FUNC_7 (VAR_4, -1, 0);
}
