
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {TYPE_1__* sched_class; int state; } ;
struct rq {int dummy; } ;
struct TYPE_2__ {int (* task_woken ) (struct rq*,struct task_struct*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rq*,struct task_struct*,int ) ;
 int FUNC_1 (struct rq*,struct task_struct*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct rq*,struct task_struct*,int ,int ) ;
 int FUNC_5 (struct task_struct*,int) ;
 int FUNC_6 (struct rq*,struct task_struct*) ;
 struct rq* FUNC_7 (struct task_struct*,unsigned long*) ;
 int FUNC_8 (struct rq*,unsigned long*) ;
 int FUNC_9 (struct rq*,struct task_struct*,int) ;

void FUNC_10(struct task_struct *VAR_4, unsigned long VAR_5)
{
 unsigned long VAR_6;
 struct rq *VAR_7;
 int VAR_8 = FUNC_2();
 VAR_7 = FUNC_7(VAR_4, &VAR_6);
 FUNC_0(VAR_7, VAR_4, 0);
 FUNC_9(VAR_7, VAR_4, 1);
 FUNC_1(VAR_7, VAR_4, VAR_3);




 FUNC_8(VAR_7, &VAR_6);
 FUNC_3();
}
