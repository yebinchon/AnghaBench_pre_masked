
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_rt_entity {int dummy; } ;
struct task_struct {struct sched_rt_entity rt; } ;
struct rq {int dummy; } ;


 int FUNC_0 (struct rq*) ;
 int FUNC_1 (struct rq*,struct task_struct*) ;
 int FUNC_2 (struct sched_rt_entity*) ;
 int FUNC_3 (struct rq*) ;

__attribute__((used)) static void FUNC_4(struct rq *VAR_0, struct task_struct *VAR_1, int VAR_2)
{
 struct sched_rt_entity *VAR_3 = &VAR_1->rt;

 FUNC_3(VAR_0);
 FUNC_2(VAR_3);

 FUNC_1(VAR_0, VAR_1);

 FUNC_0(VAR_0);
}
