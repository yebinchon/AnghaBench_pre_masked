
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_rt_entity {int run_list; } ;
struct rt_prio_array {int bitmap; scalar_t__ queue; } ;
struct rt_rq {int rt_nr_running; struct rt_prio_array active; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct sched_rt_entity*,struct rt_rq*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rt_rq*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 struct rt_rq* FUNC_5 (struct sched_rt_entity*) ;
 scalar_t__ FUNC_6 (struct sched_rt_entity*) ;

__attribute__((used)) static void FUNC_7(struct sched_rt_entity *VAR_0)
{
 struct rt_rq *VAR_1 = FUNC_5(VAR_0);
 struct rt_prio_array *VAR_2 = &VAR_1->active;

 FUNC_2(&VAR_0->run_list);
 if (FUNC_4(VAR_2->queue + FUNC_6(VAR_0)))
  FUNC_0(FUNC_6(VAR_0), VAR_2->bitmap);

 FUNC_1(VAR_0, VAR_1);
 if (!VAR_1->rt_nr_running)
  FUNC_3(VAR_1);
}
