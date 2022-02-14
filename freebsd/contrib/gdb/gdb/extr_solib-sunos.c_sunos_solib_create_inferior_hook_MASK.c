
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_ops {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int VAR_7 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int ,struct target_ops*,int ) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ,scalar_t__) ;
 int FUNC_8 () ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static void
FUNC_11 (void)
{

  FUNC_6 ();

  if ((VAR_7 = FUNC_3 ()) == 0)
    {

      return;
    }

  if (!FUNC_2 ())
    {
      FUNC_9 ("shared library handler failed to enable breakpoint");
      return;
    }
  FUNC_0 ();
  VAR_10 = VAR_3;
  VAR_9 = VAR_4;
  do
    {
      FUNC_7 (FUNC_4 (-1), 0, VAR_9);
      FUNC_8 ();
    }
  while (VAR_9 != VAR_5);
  VAR_10 = VAR_1;






  if (VAR_0)
    {
      VAR_8 -= VAR_0;
      FUNC_10 (VAR_2, VAR_8);
    }

  if (!FUNC_1 ())
    {
      FUNC_9 ("shared library handler failed to disable breakpoint");
    }

  FUNC_5 ((char *) 0, 0, (struct target_ops *) 0, VAR_6);
}
