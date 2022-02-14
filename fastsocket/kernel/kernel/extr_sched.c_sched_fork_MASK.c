
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct task_struct {scalar_t__ policy; int pushable_tasks; scalar_t__ oncpu; int sched_info; TYPE_2__* sched_class; int prio; scalar_t__ sched_reset_on_fork; int static_prio; int normal_prio; int state; } ;
struct TYPE_6__ {int normal_prio; } ;
struct TYPE_5__ {int (* task_fork ) (struct task_struct*) ;} ;
struct TYPE_4__ {int preempt_count; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct task_struct*) ;
 TYPE_3__* VAR_5 ;
 TYPE_2__ VAR_6 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 (struct task_struct*) ;
 int FUNC_11 (struct task_struct*,int) ;
 int FUNC_12 (struct task_struct*) ;
 TYPE_1__* FUNC_13 (struct task_struct*) ;
 scalar_t__ FUNC_14 (scalar_t__) ;

void FUNC_15(struct task_struct *VAR_7, int VAR_8)
{
 int VAR_9 = FUNC_3();

 FUNC_2(VAR_7);





 VAR_7->state = VAR_4;




 if (FUNC_14(VAR_7->sched_reset_on_fork)) {
  if (VAR_7->policy == VAR_1 || VAR_7->policy == VAR_3) {
   VAR_7->policy = VAR_2;
   VAR_7->normal_prio = VAR_7->static_prio;
  }

  if (FUNC_1(VAR_7->static_prio) < 0) {
   VAR_7->static_prio = FUNC_0(0);
   VAR_7->normal_prio = VAR_7->static_prio;
   FUNC_10(VAR_7);
  }





  VAR_7->sched_reset_on_fork = 0;
 }




 VAR_7->prio = VAR_5->normal_prio;

 if (!FUNC_8(VAR_7->prio))
  VAR_7->sched_class = &VAR_6;

 if (VAR_7->sched_class->task_fork)
  VAR_7->sched_class->task_fork(VAR_7);

 FUNC_11(VAR_7, VAR_9);
 FUNC_6(&VAR_7->pushable_tasks, VAR_0);

 FUNC_7();
}
