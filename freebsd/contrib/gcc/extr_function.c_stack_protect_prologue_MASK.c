
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
typedef scalar_t__ rtx ;
struct TYPE_4__ {int stack_protect_guard; } ;
struct TYPE_3__ {int (* stack_protect_guard ) () ;} ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 () ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_5 (int ) ;

void
FUNC_6 (void)
{
  tree VAR_3 = VAR_2.stack_protect_guard ();
  rtx VAR_4, VAR_5;





  VAR_4 = FUNC_5 (FUNC_0 (VAR_1->stack_protect_guard));
  VAR_5 = FUNC_5 (FUNC_0 (VAR_3));



  if (VAR_0)
    {
      rtx VAR_6 = FUNC_3 (VAR_4, VAR_5);
      if (VAR_6)
 {
   FUNC_1 (VAR_6);
   return;
 }
    }


  FUNC_2 (VAR_4, VAR_5);
}
