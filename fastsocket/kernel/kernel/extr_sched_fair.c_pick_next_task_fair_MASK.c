
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct sched_entity {int dummy; } ;
struct cfs_rq {int nr_running; } ;
struct rq {struct cfs_rq cfs; } ;


 struct cfs_rq* FUNC_0 (struct sched_entity*) ;
 int FUNC_1 (struct rq*,struct task_struct*) ;
 struct sched_entity* FUNC_2 (struct cfs_rq*) ;
 int FUNC_3 (struct cfs_rq*,struct sched_entity*) ;
 struct task_struct* FUNC_4 (struct sched_entity*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static struct task_struct *FUNC_6(struct rq *VAR_0)
{
 struct task_struct *VAR_1;
 struct cfs_rq *VAR_2 = &VAR_0->cfs;
 struct sched_entity *VAR_3;

 if (FUNC_5(!VAR_2->nr_running))
  return ((void*)0);

 do {
  VAR_3 = FUNC_2(VAR_2);
  FUNC_3(VAR_2, VAR_3);
  VAR_2 = FUNC_0(VAR_3);
 } while (VAR_2);

 VAR_1 = FUNC_4(VAR_3);
 FUNC_1(VAR_0, VAR_1);

 return VAR_1;
}
