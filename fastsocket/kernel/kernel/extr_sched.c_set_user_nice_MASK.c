
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int on_rq; } ;
struct task_struct {int prio; void* static_prio; TYPE_1__ se; } ;
struct rq {int curr; } ;


 void* FUNC_0 (long) ;
 long FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct rq*,struct task_struct*,int ) ;
 int FUNC_3 (struct task_struct*) ;
 int FUNC_4 (struct rq*,struct task_struct*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct task_struct*) ;
 scalar_t__ FUNC_7 (struct task_struct*) ;
 struct rq* FUNC_8 (struct task_struct*,unsigned long*) ;
 int FUNC_9 (struct rq*,unsigned long*) ;
 scalar_t__ FUNC_10 (struct rq*,struct task_struct*) ;

void FUNC_11(struct task_struct *VAR_0, long VAR_1)
{
 int VAR_2, VAR_3, VAR_4;
 unsigned long VAR_5;
 struct rq *VAR_6;

 if (FUNC_1(VAR_0) == VAR_1 || VAR_1 < -20 || VAR_1 > 19)
  return;




 VAR_6 = FUNC_8(VAR_0, &VAR_5);






 if (FUNC_7(VAR_0)) {
  VAR_0->static_prio = FUNC_0(VAR_1);
  goto out_unlock;
 }
 VAR_4 = VAR_0->se.on_rq;
 if (VAR_4)
  FUNC_2(VAR_6, VAR_0, 0);

 VAR_0->static_prio = FUNC_0(VAR_1);
 FUNC_6(VAR_0);
 VAR_2 = VAR_0->prio;
 VAR_0->prio = FUNC_3(VAR_0);
 VAR_3 = VAR_0->prio - VAR_2;

 if (VAR_4) {
  FUNC_4(VAR_6, VAR_0, 0);




  if (VAR_3 < 0 || (VAR_3 > 0 && FUNC_10(VAR_6, VAR_0)))
   FUNC_5(VAR_6->curr);
 }
out_unlock:
 FUNC_9(VAR_6, &VAR_5);
}
