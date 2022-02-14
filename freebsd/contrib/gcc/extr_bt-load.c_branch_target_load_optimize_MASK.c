
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef enum reg_class { ____Placeholder_reg_class } reg_class ;
struct TYPE_3__ {int (* issue_rate ) () ;} ;
struct TYPE_4__ {int (* branch_target_register_class ) () ;int (* branch_target_register_callee_saved ) (int) ;TYPE_1__ sched; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 TYPE_2__ VAR_8 ;
 int FUNC_8 (int *,int ,int) ;

void
FUNC_9 (bool VAR_9)
{
  enum reg_class VAR_10 = VAR_8.branch_target_register_class ();
  if (VAR_10 != VAR_2)
    {

      if (VAR_8.sched.issue_rate)
 VAR_6 = VAR_8.sched.issue_rate ();
      else
 VAR_6 = 1;





      FUNC_1 (VAR_7 ? VAR_1 : 0);


      FUNC_3 (0);


      FUNC_0 (VAR_0);
      FUNC_4 (VAR_10,
         (VAR_8.branch_target_register_callee_saved
   (VAR_9)));

      FUNC_2 (VAR_0);

      FUNC_8 (((void*)0), VAR_5,
   VAR_3 | VAR_4);
    }
}
