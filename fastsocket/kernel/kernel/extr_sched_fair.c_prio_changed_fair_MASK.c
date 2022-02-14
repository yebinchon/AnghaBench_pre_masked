
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int prio; } ;
struct rq {int curr; } ;


 int FUNC_0 (struct rq*,struct task_struct*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct rq *VAR_0, struct task_struct *VAR_1,
         int VAR_2, int VAR_3)
{





 if (VAR_3) {
  if (VAR_1->prio > VAR_2)
   FUNC_1(VAR_0->curr);
 } else
  FUNC_0(VAR_0, VAR_1, 0);
}
