
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct trapframe {int dummy; } ;
struct TYPE_7__ {int md_spinlock_count; int md_saved_cspr; } ;
struct thread {TYPE_2__ td_md; TYPE_3__* td_frame; TYPE_3__* td_pcb; } ;
struct pcb {int dummy; } ;
typedef void* register_t ;
struct TYPE_6__ {int sf_sp; void* sf_lr; void* sf_r5; void* sf_r4; } ;
struct TYPE_8__ {scalar_t__ tf_r0; int tf_spsr; TYPE_1__ pcb_regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

void
FUNC_2(struct thread *VAR_4, struct thread *VAR_5)
{

 FUNC_1(VAR_5->td_frame, VAR_4->td_frame, sizeof(struct trapframe));
 FUNC_1(VAR_5->td_pcb, VAR_4->td_pcb, sizeof(struct pcb));

 VAR_4->td_pcb->pcb_regs.sf_r4 = (register_t)VAR_2;
 VAR_4->td_pcb->pcb_regs.sf_r5 = (register_t)VAR_4;
 VAR_4->td_pcb->pcb_regs.sf_lr = (register_t)VAR_3;
 VAR_4->td_pcb->pcb_regs.sf_sp = FUNC_0(VAR_4->td_frame);

 VAR_4->td_frame->tf_spsr &= ~VAR_0;
 VAR_4->td_frame->tf_r0 = 0;


 VAR_4->td_md.md_spinlock_count = 1;
 VAR_4->td_md.md_saved_cspr = VAR_1;
}
