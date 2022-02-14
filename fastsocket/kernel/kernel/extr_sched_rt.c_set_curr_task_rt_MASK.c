
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int exec_start; } ;
struct task_struct {TYPE_1__ se; } ;
struct rq {int clock; struct task_struct* curr; } ;


 int FUNC_0 (struct rq*,struct task_struct*) ;

__attribute__((used)) static void FUNC_1(struct rq *VAR_0)
{
 struct task_struct *VAR_1 = VAR_0->curr;

 VAR_1->se.exec_start = VAR_0->clock;


 FUNC_0(VAR_0, VAR_1);
}
