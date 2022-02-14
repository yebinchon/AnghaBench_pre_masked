
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_offset_t ;
struct TYPE_3__ {int md_flags; int md_spinlock_count; scalar_t__ md_cop2owner; void* md_ucop2; void* md_cop2; int md_saved_intr; int md_tls_tcb_offset; int md_tls; } ;
struct thread {TYPE_2__* td_frame; TYPE_1__ td_md; struct pcb* td_pcb; } ;
struct proc {int dummy; } ;
struct pcb {int* pcb_context; } ;
typedef void* register_t ;
typedef int __int64_t ;
struct TYPE_4__ {int v1; int sr; scalar_t__ a3; scalar_t__ v0; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct thread*) ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 struct thread* FUNC_1 (int ) ;
 int VAR_17 ;
 int FUNC_2 (struct pcb*,struct pcb*,int) ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int FUNC_3 (void*,void*,int) ;
 int FUNC_4 () ;
 void* FUNC_5 () ;
 int FUNC_6 (void*) ;
 int FUNC_7 (char*) ;

void
FUNC_8(struct thread *VAR_21, struct proc *VAR_22, struct thread *VAR_23, int VAR_24)
{
 struct pcb *VAR_25;

 if ((VAR_24 & VAR_17) == 0)
  return;





 VAR_25 = VAR_23->td_pcb;







 FUNC_2(VAR_21->td_pcb, VAR_25, sizeof(*VAR_25));




 VAR_23->td_md.md_flags = VAR_21->td_md.md_flags & VAR_3;




 VAR_23->td_frame->v0 = 0;
 VAR_23->td_frame->v1 = 1;
 VAR_23->td_frame->a3 = 0;

 if (VAR_21 == FUNC_1(VAR_20))
  FUNC_0(VAR_21);

 VAR_25->pcb_context[VAR_11] = (register_t)(intptr_t)VAR_19;

 VAR_25->pcb_context[VAR_15] = (register_t)(((vm_offset_t)VAR_23->td_pcb &
     ~(sizeof(__int64_t) - 1)) - VAR_0);
 VAR_25->pcb_context[VAR_12] = (register_t)(intptr_t)VAR_18;
 VAR_25->pcb_context[VAR_13] = (register_t)(intptr_t)VAR_23;
 VAR_25->pcb_context[VAR_14] = (register_t)(intptr_t)VAR_23->td_frame;
 VAR_25->pcb_context[VAR_16] = FUNC_4() &
     (VAR_7 | VAR_10 | VAR_6);







 VAR_23->td_md.md_tls = VAR_21->td_md.md_tls;
 VAR_23->td_md.md_tls_tcb_offset = VAR_21->td_md.md_tls_tcb_offset;
 VAR_23->td_md.md_saved_intr = VAR_5;
 VAR_23->td_md.md_spinlock_count = 1;
}
