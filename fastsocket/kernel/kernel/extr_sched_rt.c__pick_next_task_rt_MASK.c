
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int exec_start; } ;
struct task_struct {TYPE_1__ se; } ;
struct sched_rt_entity {int dummy; } ;
struct rt_rq {int rt_nr_running; } ;
struct rq {int clock; int idle; struct rt_rq rt; } ;


 int FUNC_0 (int) ;
 struct rt_rq* FUNC_1 (struct sched_rt_entity*) ;
 struct sched_rt_entity* FUNC_2 (struct rq*,struct rt_rq*) ;
 scalar_t__ FUNC_3 (struct rt_rq*) ;
 struct task_struct* FUNC_4 (struct sched_rt_entity*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static struct task_struct *FUNC_7(struct rq *VAR_0)
{
 struct sched_rt_entity *VAR_1;
 struct task_struct *VAR_2;
 struct rt_rq *VAR_3;

 VAR_3 = &VAR_0->rt;

 if (FUNC_6(!VAR_3->rt_nr_running))
  return ((void*)0);

 if (FUNC_3(VAR_3) && !FUNC_5(VAR_0->idle))
  return ((void*)0);

 do {
  VAR_1 = FUNC_2(VAR_0, VAR_3);
  FUNC_0(!VAR_1);
  VAR_3 = FUNC_1(VAR_1);
 } while (VAR_3);

 VAR_2 = FUNC_4(VAR_1);
 VAR_2->se.exec_start = VAR_0->clock;

 return VAR_2;
}
