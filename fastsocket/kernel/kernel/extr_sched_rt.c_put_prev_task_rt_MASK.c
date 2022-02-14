
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int nr_cpus_allowed; } ;
struct TYPE_3__ {scalar_t__ on_rq; scalar_t__ exec_start; } ;
struct task_struct {TYPE_2__ rt; TYPE_1__ se; } ;
struct rq {int dummy; } ;


 int FUNC_0 (struct rq*,struct task_struct*) ;
 int FUNC_1 (struct rq*) ;

__attribute__((used)) static void FUNC_2(struct rq *VAR_0, struct task_struct *VAR_1)
{
 FUNC_1(VAR_0);
 VAR_1->se.exec_start = 0;





 if (VAR_1->se.on_rq && VAR_1->rt.nr_cpus_allowed > 1)
  FUNC_0(VAR_0, VAR_1);
}
