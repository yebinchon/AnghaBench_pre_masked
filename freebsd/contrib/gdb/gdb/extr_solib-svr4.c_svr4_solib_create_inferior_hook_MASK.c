
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 int FUNC_6 () ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void
FUNC_8 (void)
{

  FUNC_4 ();

  if (!FUNC_3 ())
    {
      FUNC_7 ("no shared library support for this OS / ABI");
      return;

    }

  if (!FUNC_1 ())
    {
      FUNC_7 ("shared library handler failed to enable breakpoint");
      return;
    }
}
