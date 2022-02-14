
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_rt_entity {int nr_cpus_allowed; scalar_t__ timeout; } ;
struct task_struct {struct sched_rt_entity rt; } ;
struct rq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rq*,struct task_struct*) ;
 int FUNC_1 (struct sched_rt_entity*,int) ;
 int FUNC_2 (struct rq*) ;
 int FUNC_3 (struct rq*,struct task_struct*) ;

__attribute__((used)) static void
FUNC_4(struct rq *VAR_2, struct task_struct *VAR_3, int VAR_4)
{
 struct sched_rt_entity *VAR_5 = &VAR_3->rt;

 if (VAR_4 & VAR_1)
  VAR_5->timeout = 0;

 FUNC_1(VAR_5, VAR_4 & VAR_0);

 if (!FUNC_3(VAR_2, VAR_3) && VAR_3->rt.nr_cpus_allowed > 1)
  FUNC_0(VAR_2, VAR_3);

 FUNC_2(VAR_2);
}
