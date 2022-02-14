
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* finish ) () ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (char*,int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 () ;
 scalar_t__ VAR_5 ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 TYPE_1__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int ) ;

__attribute__((used)) static void
FUNC_14 (void)
{

  if (VAR_5)
    {
      FUNC_6 (VAR_2);
      if (VAR_4)
 FUNC_13 (VAR_3);
    }





  if (VAR_1)
    {
      if (FUNC_7 (VAR_1) != 0)
 FUNC_5 ("error writing to %s: %m", VAR_0);
      if (FUNC_6 (VAR_1) != 0)
 FUNC_5 ("error closing %s: %m", VAR_0);
    }

  FUNC_8 ();

  if (VAR_7)
    {
      FUNC_10 ();
      FUNC_11 ();
      FUNC_3 ();
      FUNC_2 ();
      FUNC_4 ();
      FUNC_0 ();
      FUNC_1 ();
    }


  FUNC_9 ();


  VAR_6.finish ();
}
