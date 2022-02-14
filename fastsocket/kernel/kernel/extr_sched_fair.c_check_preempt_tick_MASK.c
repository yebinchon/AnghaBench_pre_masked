
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sched_entity {unsigned long sum_exec_runtime; unsigned long prev_sum_exec_runtime; unsigned long vruntime; } ;
struct cfs_rq {int nr_running; } ;
typedef unsigned long s64 ;
struct TYPE_2__ {int curr; } ;


 int VAR_0 ;
 struct sched_entity* FUNC_0 (struct cfs_rq*) ;
 int FUNC_1 (struct cfs_rq*,struct sched_entity*) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (struct cfs_rq*) ;
 int FUNC_4 (int ) ;
 unsigned long FUNC_5 (struct cfs_rq*,struct sched_entity*) ;
 unsigned long VAR_1 ;

__attribute__((used)) static void
FUNC_6(struct cfs_rq *VAR_2, struct sched_entity *VAR_3)
{
 unsigned long VAR_4, VAR_5;

 VAR_4 = FUNC_5(VAR_2, VAR_3);
 VAR_5 = VAR_3->sum_exec_runtime - VAR_3->prev_sum_exec_runtime;
 if (VAR_5 > VAR_4) {
  FUNC_2(FUNC_3(VAR_2)->curr);




  FUNC_1(VAR_2, VAR_3);
  return;
 }






 if (!FUNC_4(VAR_0))
  return;

 if (VAR_5 < VAR_1)
  return;

 if (VAR_2->nr_running > 1) {
  struct sched_entity *VAR_6 = FUNC_0(VAR_2);
  s64 VAR_7 = VAR_3->vruntime - VAR_6->vruntime;

  if (VAR_7 < 0)
   return;

  if (VAR_7 > VAR_4)
   FUNC_2(FUNC_3(VAR_2)->curr);
 }
}
