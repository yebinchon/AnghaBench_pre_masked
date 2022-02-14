
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_entity {int on_rq; int vruntime; } ;
struct cfs_rq {int nr_running; struct sched_entity* curr; scalar_t__ min_vruntime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cfs_rq*,struct sched_entity*) ;
 int FUNC_1 (struct cfs_rq*,struct sched_entity*) ;
 int FUNC_2 (struct cfs_rq*) ;
 int FUNC_3 (struct cfs_rq*,struct sched_entity*) ;
 int FUNC_4 (struct cfs_rq*,struct sched_entity*) ;
 int FUNC_5 (struct cfs_rq*) ;
 int FUNC_6 (struct cfs_rq*,struct sched_entity*,int ) ;
 int FUNC_7 (struct cfs_rq*,int ) ;
 int FUNC_8 (struct cfs_rq*) ;
 int FUNC_9 (struct cfs_rq*) ;
 int FUNC_10 (struct cfs_rq*,struct sched_entity*) ;

__attribute__((used)) static void
FUNC_11(struct cfs_rq *VAR_2, struct sched_entity *VAR_3, int VAR_4)
{




 if (!(VAR_4 & VAR_0) || (VAR_4 & VAR_1))
  VAR_3->vruntime += VAR_2->min_vruntime;




 FUNC_9(VAR_2);
 FUNC_7(VAR_2, 0);
 FUNC_1(VAR_2, VAR_3);
 FUNC_8(VAR_2);

 if (VAR_4 & VAR_0) {
  FUNC_6(VAR_2, VAR_3, 0);
  FUNC_4(VAR_2, VAR_3);
 }

 FUNC_10(VAR_2, VAR_3);
 FUNC_3(VAR_2, VAR_3);
 if (VAR_3 != VAR_2->curr)
  FUNC_0(VAR_2, VAR_3);
 VAR_3->on_rq = 1;

 if (VAR_2->nr_running == 1) {
  FUNC_5(VAR_2);
  FUNC_2(VAR_2);
 }
}
