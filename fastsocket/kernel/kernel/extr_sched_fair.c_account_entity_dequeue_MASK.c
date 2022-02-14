
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int weight; } ;
struct sched_entity {int group_node; TYPE_1__ load; } ;
struct cfs_rq {int nr_running; int load; } ;


 int FUNC_0 (struct cfs_rq*,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct sched_entity*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sched_entity*) ;
 int FUNC_5 (struct cfs_rq*) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static void
FUNC_7(struct cfs_rq *VAR_0, struct sched_entity *VAR_1)
{
 FUNC_6(&VAR_0->load, VAR_1->load.weight);
 if (!FUNC_4(VAR_1))
  FUNC_1(FUNC_5(VAR_0), VAR_1->load.weight);
 if (FUNC_2(VAR_1)) {
  FUNC_0(VAR_0, -VAR_1->load.weight);
  FUNC_3(&VAR_1->group_node);
 }
 VAR_0->nr_running--;
}
