
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int * VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static void
FUNC_5 (int VAR_2)
{
  if (FUNC_4 ())
    FUNC_2 ("gdbsim_close: quitting %d\n", VAR_2);

  VAR_1 = 0;

  if (VAR_0 != ((void*)0))
    {
      FUNC_3 (VAR_0, VAR_2);
      VAR_0 = ((void*)0);
    }

  FUNC_0 ();
  FUNC_1 ();
}
