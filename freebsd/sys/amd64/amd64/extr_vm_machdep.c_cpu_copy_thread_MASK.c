
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trapframe {int dummy; } ;
struct TYPE_2__ {int md_spinlock_count; int md_saved_flags; } ;
struct thread {TYPE_1__ td_md; struct pcb* td_frame; struct pcb* td_pcb; } ;
struct pcb {int pcb_r12; int pcb_rsp; int pcb_rbx; int pcb_rip; scalar_t__ pcb_rbp; int tf_rflags; struct pcb* pcb_save; } ;
typedef int register_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct pcb*,struct pcb*,int) ;
 int FUNC_1 (struct pcb*,int) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 struct pcb* FUNC_2 (struct pcb*) ;
 struct pcb* FUNC_3 (struct thread*) ;
 int FUNC_4 (struct thread*) ;
 int FUNC_5 (struct pcb*,int ) ;
 int FUNC_6 (struct pcb*) ;

void
FUNC_7(struct thread *VAR_10, struct thread *VAR_11)
{
 struct pcb *VAR_12;

 VAR_12 = VAR_10->td_pcb;






 FUNC_6(VAR_11->td_pcb);
 FUNC_0(VAR_11->td_pcb, VAR_12, sizeof(*VAR_12));
 FUNC_1(VAR_12, VAR_0 | VAR_3 |
     VAR_2);
 VAR_12->pcb_save = FUNC_2(VAR_12);
 FUNC_0(FUNC_3(VAR_11), VAR_12->pcb_save,
     VAR_7);
 FUNC_5(VAR_12, VAR_1);




 FUNC_0(VAR_11->td_frame, VAR_10->td_frame, sizeof(struct trapframe));







 VAR_10->td_frame->tf_rflags &= ~VAR_6;





 VAR_12->pcb_r12 = (register_t)VAR_8;
 VAR_12->pcb_rbp = 0;
 VAR_12->pcb_rsp = (register_t)VAR_10->td_frame - sizeof(void *);
 VAR_12->pcb_rbx = (register_t)VAR_10;
 VAR_12->pcb_rip = (register_t)VAR_9;
 VAR_10->td_md.md_spinlock_count = 1;
 VAR_10->td_md.md_saved_flags = VAR_5 | VAR_4;
 FUNC_4(VAR_10);
}
