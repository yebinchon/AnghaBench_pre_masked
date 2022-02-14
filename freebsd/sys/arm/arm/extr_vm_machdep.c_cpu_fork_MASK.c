
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct trapframe {scalar_t__ tf_r1; scalar_t__ tf_r0; int tf_spsr; } ;
struct TYPE_7__ {int md_spinlock_count; void* md_tp; int md_saved_cspr; } ;
struct thread {int td_kstack_pages; TYPE_3__ td_md; struct trapframe* td_frame; TYPE_1__* td_proc; struct pcb* td_pcb; scalar_t__ td_kstack; } ;
struct TYPE_8__ {int fpscr; } ;
struct TYPE_6__ {void* sf_tpidrurw; int sf_sp; void* sf_lr; void* sf_r5; void* sf_r4; } ;
struct pcb {int pcb_vfpcpu; TYPE_4__ pcb_vfpstate; TYPE_2__ pcb_regs; } ;
struct proc {int p_vmspace; struct pcb p_md; } ;
struct mdproc {int pcb_vfpcpu; TYPE_4__ pcb_vfpstate; TYPE_2__ pcb_regs; } ;
typedef void* register_t ;
struct TYPE_5__ {struct pcb p_md; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct trapframe*) ;
 int FUNC_1 (struct pcb*,struct pcb*,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct thread* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_4 () ;
 int VAR_8 ;
 int FUNC_5 (int ,struct pcb*) ;
 int FUNC_6 (TYPE_4__*,int) ;
 int FUNC_7 (int ) ;

void
FUNC_8(struct thread *VAR_9, struct proc *VAR_10, struct thread *VAR_11, int VAR_12)
{
 struct pcb *VAR_13;
 struct trapframe *VAR_14;
 struct mdproc *VAR_15;

 if ((VAR_12 & VAR_4) == 0)
  return;


 VAR_13 = (struct pcb *)
     (VAR_11->td_kstack + VAR_11->td_kstack_pages * VAR_1) - 1;
 VAR_11->td_pcb = VAR_13;


 FUNC_1(VAR_9->td_pcb, VAR_13, sizeof(*VAR_13));


 VAR_15 = &VAR_10->p_md;
 FUNC_1(&VAR_9->td_proc->p_md, VAR_15, sizeof(*VAR_15));


 VAR_11->td_frame = (struct trapframe *)VAR_13 - 1;
 *VAR_11->td_frame = *VAR_9->td_frame;






 FUNC_5(FUNC_7(VAR_10->p_vmspace), VAR_13);
 VAR_13->pcb_regs.sf_r4 = (register_t)VAR_6;
 VAR_13->pcb_regs.sf_r5 = (register_t)VAR_11;
 VAR_13->pcb_regs.sf_lr = (register_t)VAR_7;
 VAR_13->pcb_regs.sf_sp = FUNC_0(VAR_11->td_frame);




 VAR_13->pcb_vfpcpu = -1;
 VAR_13->pcb_vfpstate.fpscr = VAR_8;

 VAR_14 = VAR_11->td_frame;
 VAR_14->tf_spsr &= ~VAR_2;
 VAR_14->tf_r0 = 0;
 VAR_14->tf_r1 = 0;



 VAR_11->td_md.md_spinlock_count = 1;
 VAR_11->td_md.md_saved_cspr = VAR_3;

 VAR_11->td_md.md_tp = *(register_t *)VAR_0;

}
