
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct trapframe {int dummy; } ;
struct TYPE_4__ {int md_spinlock_count; int md_saved_daif; } ;
struct thread {TYPE_1__ td_md; TYPE_2__* td_pcb; TYPE_2__* td_frame; } ;
struct pcb {int dummy; } ;
struct TYPE_5__ {uintptr_t* pcb_x; uintptr_t pcb_sp; int pcb_vfpcpu; int pcb_fpustate; int * pcb_fpusaved; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,TYPE_2__*,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

void
FUNC_1(struct thread *VAR_5, struct thread *VAR_6)
{
 FUNC_0(VAR_6->td_frame, VAR_5->td_frame, sizeof(struct trapframe));
 FUNC_0(VAR_6->td_pcb, VAR_5->td_pcb, sizeof(struct pcb));

 VAR_5->td_pcb->pcb_x[8] = (uintptr_t)VAR_3;
 VAR_5->td_pcb->pcb_x[9] = (uintptr_t)VAR_5;
 VAR_5->td_pcb->pcb_x[VAR_1] = (uintptr_t)VAR_4;
 VAR_5->td_pcb->pcb_sp = (uintptr_t)VAR_5->td_frame;
 VAR_5->td_pcb->pcb_fpusaved = &VAR_5->td_pcb->pcb_fpustate;
 VAR_5->td_pcb->pcb_vfpcpu = VAR_2;


 VAR_5->td_md.md_spinlock_count = 1;
 VAR_5->td_md.md_saved_daif = VAR_6->td_md.md_saved_daif & ~VAR_0;
}
