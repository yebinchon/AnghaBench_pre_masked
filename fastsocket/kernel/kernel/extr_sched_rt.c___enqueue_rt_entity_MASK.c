
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_rt_entity {int run_list; } ;
struct rt_prio_array {int bitmap; struct list_head* queue; } ;
struct rt_rq {int rt_nr_running; struct rt_prio_array active; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (int,int ) ;
 struct rt_rq* FUNC_1 (struct sched_rt_entity*) ;
 int FUNC_2 (struct sched_rt_entity*,struct rt_rq*) ;
 int FUNC_3 (int *,struct list_head*) ;
 int FUNC_4 (struct rt_rq*) ;
 int FUNC_5 (int *,struct list_head*) ;
 struct rt_rq* FUNC_6 (struct sched_rt_entity*) ;
 scalar_t__ FUNC_7 (struct rt_rq*) ;
 int FUNC_8 (struct sched_rt_entity*) ;

__attribute__((used)) static void FUNC_9(struct sched_rt_entity *VAR_0, bool VAR_1)
{
 struct rt_rq *VAR_2 = FUNC_6(VAR_0);
 struct rt_prio_array *VAR_3 = &VAR_2->active;
 struct rt_rq *VAR_4 = FUNC_1(VAR_0);
 struct list_head *VAR_5 = VAR_3->queue + FUNC_8(VAR_0);







 if (VAR_4 && (FUNC_7(VAR_4) || !VAR_4->rt_nr_running))
  return;

 if (!VAR_2->rt_nr_running)
  FUNC_4(VAR_2);

 if (VAR_1)
  FUNC_3(&VAR_0->run_list, VAR_5);
 else
  FUNC_5(&VAR_0->run_list, VAR_5);
 FUNC_0(FUNC_8(VAR_0), VAR_3->bitmap);

 FUNC_2(VAR_0, VAR_2);
}
