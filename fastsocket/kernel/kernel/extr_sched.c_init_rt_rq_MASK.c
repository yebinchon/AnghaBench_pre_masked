
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int curr; int next; } ;
struct rt_prio_array {int bitmap; scalar_t__ queue; } ;
struct rt_rq {struct rq* rq; scalar_t__ rt_nr_boosted; int rt_runtime_lock; scalar_t__ rt_runtime; scalar_t__ rt_throttled; scalar_t__ rt_time; int pushable_tasks; scalar_t__ overloaded; scalar_t__ rt_nr_migratory; TYPE_1__ highest_prio; struct rt_prio_array active; } ;
struct rq {int lock; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct rt_rq *VAR_1, struct rq *VAR_2)
{
 struct rt_prio_array *VAR_3;
 int VAR_4;

 VAR_3 = &VAR_1->active;
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  FUNC_0(VAR_3->queue + VAR_4);
  FUNC_1(VAR_4, VAR_3->bitmap);
 }

 FUNC_2(VAR_0, VAR_3->bitmap);
 VAR_1->rt_time = 0;
 VAR_1->rt_throttled = 0;
 VAR_1->rt_runtime = 0;
 FUNC_4(&VAR_1->rt_runtime_lock);





}
