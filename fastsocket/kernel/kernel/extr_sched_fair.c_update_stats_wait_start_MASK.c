
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sched_entity {int wait_start; } ;
struct cfs_rq {int dummy; } ;
struct TYPE_2__ {int clock; } ;


 TYPE_1__* FUNC_0 (struct cfs_rq*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static inline void
FUNC_2(struct cfs_rq *VAR_0, struct sched_entity *VAR_1)
{
 FUNC_1(VAR_1->wait_start, FUNC_0(VAR_0)->clock);
}
