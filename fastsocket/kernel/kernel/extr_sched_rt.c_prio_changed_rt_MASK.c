
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {int prio; } ;
struct TYPE_3__ {scalar_t__ curr; } ;
struct TYPE_4__ {TYPE_1__ highest_prio; } ;
struct rq {struct task_struct* curr; TYPE_2__ rt; } ;


 int FUNC_0 (struct rq*) ;
 int FUNC_1 (struct task_struct*) ;

__attribute__((used)) static void FUNC_2(struct rq *VAR_0, struct task_struct *VAR_1,
       int VAR_2, int VAR_3)
{
 if (VAR_3) {
  if (VAR_2 < VAR_1->prio)
   FUNC_1(VAR_1);

 } else {





  if (VAR_1->prio < VAR_0->curr->prio)
   FUNC_1(VAR_0->curr);
 }
}
