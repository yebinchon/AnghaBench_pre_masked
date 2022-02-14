
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ on_rq; } ;
struct task_struct {TYPE_2__ se; TYPE_1__* sched_class; } ;
struct rq {int dummy; } ;
struct TYPE_3__ {int (* dequeue_task ) (struct rq*,struct task_struct*,int) ;} ;


 int FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct rq*,struct task_struct*,int) ;
 int FUNC_2 (struct rq*) ;

__attribute__((used)) static void FUNC_3(struct rq *VAR_0, struct task_struct *VAR_1, int VAR_2)
{
 FUNC_2(VAR_0);
 FUNC_0(VAR_1);
 VAR_1->sched_class->dequeue_task(VAR_0, VAR_1, VAR_2);
 VAR_1->se.on_rq = 0;
}
