
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int on_rq; } ;
struct task_struct {int policy; int rt_priority; int prio; int normal_prio; int * sched_class; TYPE_1__ se; } ;
struct rq {int dummy; } ;


 int FUNC_0 (int ) ;





 int VAR_0 ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct task_struct*) ;
 int VAR_1 ;
 int FUNC_3 (struct task_struct*) ;

__attribute__((used)) static void
FUNC_4(struct rq *VAR_2, struct task_struct *VAR_3, int VAR_4, int VAR_5)
{
 FUNC_0(VAR_3->se.on_rq);

 VAR_3->policy = VAR_4;
 switch (VAR_3->policy) {
 case 129:
 case 132:
 case 130:
  VAR_3->sched_class = &VAR_0;
  break;
 case 131:
 case 128:
  VAR_3->sched_class = &VAR_1;
  break;
 }

 VAR_3->rt_priority = VAR_5;
 VAR_3->normal_prio = FUNC_1(VAR_3);

 VAR_3->prio = FUNC_2(VAR_3);
 FUNC_3(VAR_3);
}
