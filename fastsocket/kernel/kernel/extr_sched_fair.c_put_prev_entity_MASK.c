
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_entity {scalar_t__ on_rq; } ;
struct cfs_rq {int * curr; } ;


 int FUNC_0 (struct cfs_rq*,struct sched_entity*) ;
 int FUNC_1 (struct cfs_rq*) ;
 int FUNC_2 (struct cfs_rq*,struct sched_entity*) ;
 int FUNC_3 (struct cfs_rq*) ;
 int FUNC_4 (struct cfs_rq*,struct sched_entity*) ;

__attribute__((used)) static void FUNC_5(struct cfs_rq *VAR_0, struct sched_entity *VAR_1)
{




 if (VAR_1->on_rq)
  FUNC_3(VAR_0);


 FUNC_1(VAR_0);

 FUNC_2(VAR_0, VAR_1);
 if (VAR_1->on_rq) {
  FUNC_4(VAR_0, VAR_1);

  FUNC_0(VAR_0, VAR_1);
 }
 VAR_0->curr = ((void*)0);
}
