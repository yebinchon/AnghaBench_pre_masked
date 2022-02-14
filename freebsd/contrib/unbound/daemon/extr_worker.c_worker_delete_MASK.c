
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int scratch; int probe_timer; int hints; int fwds; int scratch_buffer; scalar_t__ mesh; } ;
struct worker {scalar_t__ thread_num; int scratchpad; TYPE_1__ env; int alloc; int rndstate; int base; struct worker* ports; int stat_timer; int cmd; int comsig; int back; int front; int stats; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct worker*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__,char*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *,struct worker*,scalar_t__) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_17 (struct worker*,int *) ;
 int FUNC_18 (struct worker*) ;

void
FUNC_19(struct worker* VAR_2)
{
 if(!VAR_2)
  return;
 if(VAR_2->env.mesh && VAR_1 >= VAR_0) {
  FUNC_13(&VAR_2->stats, VAR_2, VAR_2->thread_num);
  FUNC_9(VAR_2->env.mesh, "mesh has");
  FUNC_17(VAR_2, ((void*)0));
 }
 FUNC_11(VAR_2->back);
 FUNC_8(VAR_2->env.mesh);
 FUNC_14(VAR_2->env.scratch_buffer);
 FUNC_4(VAR_2->env.fwds);
 FUNC_6(VAR_2->env.hints);
 FUNC_7(VAR_2->front);
 FUNC_10(VAR_2->back);
 FUNC_2(VAR_2->comsig);
 FUNC_15(VAR_2->cmd);
 FUNC_3(VAR_2->stat_timer);
 FUNC_3(VAR_2->env.probe_timer);
 FUNC_5(VAR_2->ports);
 if(VAR_2->thread_num == 0) {



 }
 FUNC_1(VAR_2->base);
 FUNC_16(VAR_2->rndstate);
 FUNC_0(&VAR_2->alloc);
 FUNC_12(VAR_2->env.scratch);
 FUNC_12(VAR_2->scratchpad);
 FUNC_5(VAR_2);
}
