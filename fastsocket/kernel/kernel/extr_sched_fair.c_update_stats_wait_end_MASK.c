
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sched_entity {scalar_t__ wait_start; scalar_t__ wait_sum; scalar_t__ wait_count; scalar_t__ wait_max; } ;
struct cfs_rq {int dummy; } ;
struct TYPE_2__ {scalar_t__ clock; } ;


 scalar_t__ FUNC_0 (struct sched_entity*) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 TYPE_1__* FUNC_2 (struct cfs_rq*) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (struct sched_entity*) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_6(struct cfs_rq *VAR_0, struct sched_entity *VAR_1)
{
 FUNC_3(VAR_1->wait_max, FUNC_1(VAR_1->wait_max,
   FUNC_2(VAR_0)->clock - VAR_1->wait_start));
 FUNC_3(VAR_1->wait_count, VAR_1->wait_count + 1);
 FUNC_3(VAR_1->wait_sum, VAR_1->wait_sum +
   FUNC_2(VAR_0)->clock - VAR_1->wait_start);






 FUNC_3(VAR_1->wait_start, 0);
}
