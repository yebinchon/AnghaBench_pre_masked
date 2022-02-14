
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int weight; } ;
struct sched_entity {scalar_t__ sum_exec_runtime; scalar_t__ prev_sum_exec_runtime; int slice_max; TYPE_1__ load; scalar_t__ on_rq; } ;
struct cfs_rq {struct sched_entity* curr; } ;
struct TYPE_5__ {int weight; } ;
struct TYPE_6__ {TYPE_2__ load; } ;


 int FUNC_0 (struct cfs_rq*,struct sched_entity*) ;
 int FUNC_1 (int ,scalar_t__) ;
 TYPE_3__* FUNC_2 (struct cfs_rq*) ;
 int FUNC_3 (struct cfs_rq*,struct sched_entity*) ;
 int FUNC_4 (struct cfs_rq*,struct sched_entity*) ;

__attribute__((used)) static void
FUNC_5(struct cfs_rq *VAR_0, struct sched_entity *VAR_1)
{

 if (VAR_1->on_rq) {





  FUNC_4(VAR_0, VAR_1);
  FUNC_0(VAR_0, VAR_1);
 }

 FUNC_3(VAR_0, VAR_1);
 VAR_0->curr = VAR_1;
 VAR_1->prev_sum_exec_runtime = VAR_1->sum_exec_runtime;
}
