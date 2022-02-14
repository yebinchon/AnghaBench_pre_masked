
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qt_args {int from_tty; int args; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_4 () ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int
FUNC_6 (void *VAR_8)
{
  struct qt_args *VAR_9 = (struct qt_args *)VAR_8;

  if (! FUNC_1 (VAR_4, VAR_5) && VAR_6)
    {
      if (VAR_1)
        FUNC_3 (VAR_9->args, VAR_9->from_tty);
      else
        FUNC_4 ();
    }


  FUNC_2 (&VAR_2, 1);


  if (VAR_7 && VAR_3)
    FUNC_5 (VAR_3);

  FUNC_0 (VAR_0);

  return 0;
}
