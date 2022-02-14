
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_rt_entity {int dummy; } ;
struct rt_rq {int rt_nr_running; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct sched_rt_entity*,struct rt_rq*) ;
 int FUNC_2 (struct sched_rt_entity*,struct rt_rq*) ;
 int FUNC_3 (struct rt_rq*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct sched_rt_entity*) ;

__attribute__((used)) static inline
void FUNC_6(struct sched_rt_entity *VAR_0, struct rt_rq *VAR_1)
{
 int VAR_2 = FUNC_5(VAR_0);

 FUNC_0(!FUNC_4(VAR_2));
 VAR_1->rt_nr_running++;

 FUNC_3(VAR_1, VAR_2);
 FUNC_2(VAR_0, VAR_1);
 FUNC_1(VAR_0, VAR_1);
}
