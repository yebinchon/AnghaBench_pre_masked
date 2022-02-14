
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sched_entity {int dummy; } ;
struct cfs_rq {int nr_running; } ;
struct TYPE_2__ {int hrtick_timer; int curr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cfs_rq*,struct sched_entity*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (struct cfs_rq*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct cfs_rq*) ;
 int FUNC_6 (struct cfs_rq*) ;

__attribute__((used)) static void
FUNC_7(struct cfs_rq *VAR_2, struct sched_entity *VAR_3, int VAR_4)
{



 FUNC_5(VAR_2);




 FUNC_6(VAR_2);
 if (VAR_2->nr_running > 1 || !FUNC_4(VAR_1))
  FUNC_0(VAR_2, VAR_3);
}
