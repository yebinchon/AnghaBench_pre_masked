
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trapframe {int pcb_fpflags; int tf_spsr; uintptr_t* pcb_x; uintptr_t pcb_sp; int pcb_vfpcpu; int pcb_fpustate; int * pcb_fpusaved; scalar_t__* tf_x; void* pcb_tpidrro_el0; void* pcb_tpidr_el0; } ;
struct TYPE_2__ {int md_spinlock_count; int md_saved_daif; } ;
struct thread {int td_kstack_pages; TYPE_1__ td_md; struct trapframe* td_pcb; struct trapframe* td_frame; scalar_t__ td_kstack; } ;
struct proc {int dummy; } ;
struct pcb {int pcb_fpflags; int tf_spsr; uintptr_t* pcb_x; uintptr_t pcb_sp; int pcb_vfpcpu; int pcb_fpustate; int * pcb_fpusaved; scalar_t__* tf_x; void* pcb_tpidrro_el0; void* pcb_tpidr_el0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct trapframe*) ;
 int VAR_7 ;
 int FUNC_2 (struct trapframe*,struct trapframe*,int) ;
 struct thread* VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (struct thread*,struct trapframe*) ;

void
FUNC_4(struct thread *VAR_13, struct proc *VAR_14, struct thread *VAR_15, int VAR_16)
{
 struct pcb *VAR_17;
 struct trapframe *VAR_18;

 if ((VAR_16 & VAR_6) == 0)
  return;

 if (VAR_13 == VAR_8) {





  VAR_13->td_pcb->pcb_tpidr_el0 = FUNC_0(VAR_11);
  VAR_13->td_pcb->pcb_tpidrro_el0 = FUNC_0(VAR_12);




 }

 VAR_17 = (struct pcb *)(VAR_15->td_kstack +
     VAR_15->td_kstack_pages * VAR_1) - 1;

 VAR_15->td_pcb = VAR_17;
 FUNC_2(VAR_13->td_pcb, VAR_17, sizeof(*VAR_17));

 VAR_18 = (struct trapframe *)FUNC_1((struct trapframe *)VAR_17 - 1);
 FUNC_2(VAR_13->td_frame, VAR_18, sizeof(*VAR_18));
 VAR_18->tf_x[0] = 0;
 VAR_18->tf_x[1] = 0;
 VAR_18->tf_spsr = VAR_13->td_frame->tf_spsr & (VAR_5 | VAR_4);

 VAR_15->td_frame = VAR_18;


 VAR_15->td_pcb->pcb_x[8] = (uintptr_t)VAR_9;
 VAR_15->td_pcb->pcb_x[9] = (uintptr_t)VAR_15;
 VAR_15->td_pcb->pcb_x[VAR_3] = (uintptr_t)VAR_10;
 VAR_15->td_pcb->pcb_sp = (uintptr_t)VAR_15->td_frame;
 VAR_15->td_pcb->pcb_fpusaved = &VAR_15->td_pcb->pcb_fpustate;
 VAR_15->td_pcb->pcb_vfpcpu = VAR_7;


 VAR_15->td_md.md_spinlock_count = 1;
 VAR_15->td_md.md_saved_daif = VAR_13->td_md.md_saved_daif & ~VAR_0;
}
