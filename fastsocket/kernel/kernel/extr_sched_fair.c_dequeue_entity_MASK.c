
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int state; } ;
struct sched_entity {int vruntime; scalar_t__ on_rq; int block_start; int sleep_start; } ;
struct cfs_rq {int nr_running; scalar_t__ min_vruntime; struct sched_entity* curr; } ;
struct TYPE_2__ {int clock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cfs_rq*,struct sched_entity*) ;
 int FUNC_1 (struct cfs_rq*,struct sched_entity*) ;
 int FUNC_2 (struct cfs_rq*,struct sched_entity*) ;
 scalar_t__ FUNC_3 (struct sched_entity*) ;
 int FUNC_4 (struct cfs_rq*) ;
 TYPE_1__* FUNC_5 (struct cfs_rq*) ;
 struct task_struct* FUNC_6 (struct sched_entity*) ;
 int FUNC_7 (struct cfs_rq*,int ) ;
 int FUNC_8 (struct cfs_rq*) ;
 int FUNC_9 (struct cfs_rq*) ;
 int FUNC_10 (struct cfs_rq*) ;
 int FUNC_11 (struct cfs_rq*,struct sched_entity*) ;

__attribute__((used)) static void
FUNC_12(struct cfs_rq *VAR_3, struct sched_entity *VAR_4, int VAR_5)
{



 FUNC_9(VAR_3);

 FUNC_11(VAR_3, VAR_4);
 if (VAR_5 & VAR_0) {
 }

 FUNC_2(VAR_3, VAR_4);

 if (VAR_4 != VAR_3->curr)
  FUNC_0(VAR_3, VAR_4);
 VAR_4->on_rq = 0;
 FUNC_7(VAR_3, 0);
 FUNC_1(VAR_3, VAR_4);






 if (!(VAR_5 & VAR_0))
  VAR_4->vruntime -= VAR_3->min_vruntime;

 FUNC_10(VAR_3);
 FUNC_8(VAR_3);


 if (!VAR_3->nr_running)
  FUNC_4(VAR_3);
}
