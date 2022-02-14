
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
typedef scalar_t__ rtx ;
struct TYPE_4__ {int stack_protect_guard; } ;
struct TYPE_3__ {int (* stack_protect_fail ) () ;int (* stack_protect_guard ) () ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_2 (scalar_t__,scalar_t__,int ,int ,int ,int,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (scalar_t__,int ,int ) ;
 int VAR_6 ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 TYPE_1__ VAR_7 ;
 scalar_t__ FUNC_12 (int ) ;

void
FUNC_13 (void)
{
  tree VAR_8 = VAR_7.stack_protect_guard ();
  rtx VAR_9 = FUNC_6 ();
  rtx VAR_10, VAR_11, VAR_12;





  VAR_10 = FUNC_12 (FUNC_0 (VAR_5->stack_protect_guard));
  VAR_11 = FUNC_12 (FUNC_0 (VAR_8));



  if (VAR_1 != 0)
    {
      VAR_12 = FUNC_7 (VAR_10, VAR_11, VAR_9);
      if (VAR_12)
 {
   FUNC_3 (VAR_12);
   goto done;
 }
    }

  FUNC_2 (VAR_10, VAR_11, VAR_0, VAR_2, VAR_6, 1, VAR_9);
 done:






  VAR_12 = FUNC_8 ();
  if (FUNC_1 (VAR_12))
    FUNC_9 (VAR_12, VAR_3, VAR_4);

  FUNC_5 (VAR_7.stack_protect_fail ());
  FUNC_4 (VAR_9);
}
