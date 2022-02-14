
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {scalar_t__ prio; } ;
struct TYPE_3__ {scalar_t__ overloaded; } ;
struct rq {TYPE_2__* curr; TYPE_1__ rt; } ;
struct TYPE_4__ {scalar_t__ prio; } ;


 scalar_t__ FUNC_0 (struct rq*) ;
 int FUNC_1 (TYPE_2__*) ;
 struct rq* FUNC_2 (struct task_struct*) ;

__attribute__((used)) static void FUNC_3(struct rq *VAR_0, struct task_struct *VAR_1,
      int VAR_2)
{
 int VAR_3 = 1;
 if (!VAR_2) {






  if (VAR_3 && VAR_1->prio < VAR_0->curr->prio)
   FUNC_1(VAR_0->curr);
 }
}
