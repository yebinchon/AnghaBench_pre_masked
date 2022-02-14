
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* td_pcb; scalar_t__ td_frame; } ;
struct TYPE_2__ {uintptr_t* pcb_x; uintptr_t pcb_sp; int pcb_vfpcpu; int pcb_fpustate; int * pcb_fpusaved; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

void
FUNC_0(struct thread *VAR_3, void (*VAR_4)(void *), void *VAR_5)
{

 VAR_3->td_pcb->pcb_x[8] = (uintptr_t)VAR_4;
 VAR_3->td_pcb->pcb_x[9] = (uintptr_t)VAR_5;
 VAR_3->td_pcb->pcb_x[VAR_0] = (uintptr_t)VAR_2;
 VAR_3->td_pcb->pcb_sp = (uintptr_t)VAR_3->td_frame;
 VAR_3->td_pcb->pcb_fpusaved = &VAR_3->td_pcb->pcb_fpustate;
 VAR_3->td_pcb->pcb_vfpcpu = VAR_1;
}
