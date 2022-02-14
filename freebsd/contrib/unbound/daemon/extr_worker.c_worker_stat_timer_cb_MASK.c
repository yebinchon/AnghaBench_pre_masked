
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mesh; } ;
struct worker {TYPE_2__* daemon; TYPE_1__ env; int thread_num; int stats; } ;
struct TYPE_6__ {int stat_cumulative; scalar_t__ shm_enable; } ;
struct TYPE_5__ {TYPE_3__* cfg; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,struct worker*,int ) ;
 int FUNC_2 (struct worker*) ;
 int FUNC_3 (struct worker*,int *) ;
 int FUNC_4 (struct worker*) ;
 int FUNC_5 (struct worker*) ;

void FUNC_6(void* VAR_0)
{
 struct worker* VAR_1 = (struct worker*)VAR_0;
 FUNC_1(&VAR_1->stats, VAR_1, VAR_1->thread_num);
 FUNC_0(VAR_1->env.mesh, "mesh has");
 FUNC_3(VAR_1, ((void*)0));

 if (VAR_1->daemon->cfg->shm_enable) {
  FUNC_2(VAR_1);
 }
 if(!VAR_1->daemon->cfg->stat_cumulative) {
  FUNC_5(VAR_1);
 }

 FUNC_4(VAR_1);
}
