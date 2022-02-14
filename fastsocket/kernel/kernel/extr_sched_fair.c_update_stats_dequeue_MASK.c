
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_entity {int dummy; } ;
struct cfs_rq {struct sched_entity* curr; } ;


 int FUNC_0 (struct cfs_rq*,struct sched_entity*) ;

__attribute__((used)) static inline void
FUNC_1(struct cfs_rq *VAR_0, struct sched_entity *VAR_1)
{




 if (VAR_1 != VAR_0->curr)
  FUNC_0(VAR_0, VAR_1);
}
