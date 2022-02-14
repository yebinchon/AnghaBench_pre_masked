
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {scalar_t__ exit_state; int rcu; int exit_signal; struct task_struct* group_leader; } ;
struct TYPE_4__ {TYPE_1__* user; } ;
struct TYPE_3__ {int processes; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct task_struct*) ;
 TYPE_2__* FUNC_2 (struct task_struct*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int VAR_2 ;
 int FUNC_5 (struct task_struct*,int ) ;
 int FUNC_6 (struct task_struct*) ;
 int FUNC_7 (struct task_struct*) ;
 int FUNC_8 (struct task_struct*) ;
 int VAR_3 ;
 scalar_t__ FUNC_9 (struct task_struct*) ;
 int FUNC_10 (struct task_struct*) ;
 int FUNC_11 (struct task_struct*) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

void FUNC_15(struct task_struct * VAR_4)
{
 struct task_struct *VAR_5;
 int VAR_6;
repeat:
 FUNC_11(VAR_4);


 FUNC_3(&FUNC_2(VAR_4)->user->processes);

 FUNC_6(VAR_4);

 FUNC_13(&VAR_3);
 FUNC_10(VAR_4);
 FUNC_1(VAR_4);






 VAR_6 = 0;
 VAR_5 = VAR_4->group_leader;
 if (VAR_5 != VAR_4 && FUNC_9(VAR_5) && VAR_5->exit_state == VAR_1) {
  FUNC_0(FUNC_8(VAR_5));
  FUNC_5(VAR_5, VAR_5->exit_signal);
  VAR_6 = FUNC_8(VAR_5);





  if (VAR_6)
   VAR_5->exit_state = VAR_0;
 }

 FUNC_14(&VAR_3);
 FUNC_7(VAR_4);
 FUNC_4(&VAR_4->rcu, VAR_2);

 VAR_4 = VAR_5;
 if (FUNC_12(VAR_6))
  goto repeat;
}
