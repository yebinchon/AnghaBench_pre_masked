
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trapframe {int dummy; } ;
struct TYPE_2__ {int md_spinlock_count; int md_saved_flags; } ;
struct thread {TYPE_1__ td_md; struct pcb* td_frame; struct pcb* td_pcb; } ;
struct pcb {int pcb_flags; int pcb_esi; int pcb_esp; int pcb_ebx; int * pcb_ext; int pcb_gs; scalar_t__ pcb_eip; scalar_t__ pcb_ebp; scalar_t__ pcb_edi; int tf_eflags; struct pcb* pcb_save; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct pcb*,struct pcb*,int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 struct pcb* FUNC_1 (struct pcb*) ;
 struct pcb* FUNC_2 (struct thread*) ;
 int FUNC_3 () ;
 scalar_t__ VAR_9 ;

void
FUNC_4(struct thread *VAR_10, struct thread *VAR_11)
{
 struct pcb *VAR_12;


 VAR_12 = VAR_10->td_pcb;






 FUNC_0(VAR_11->td_pcb, VAR_12, sizeof(*VAR_12));
 VAR_12->pcb_flags &= ~(VAR_1 | VAR_2 |
     VAR_0);
 VAR_12->pcb_save = FUNC_1(VAR_12);
 FUNC_0(FUNC_2(VAR_11), VAR_12->pcb_save,
     VAR_6);




 FUNC_0(VAR_11->td_frame, VAR_10->td_frame, sizeof(struct trapframe));







 VAR_10->td_frame->tf_eflags &= ~VAR_5;





 VAR_12->pcb_edi = 0;
 VAR_12->pcb_esi = (int)VAR_7;
 VAR_12->pcb_ebp = 0;
 VAR_12->pcb_esp = (int)VAR_10->td_frame - sizeof(void *);
 VAR_12->pcb_ebx = (int)VAR_10;
 VAR_12->pcb_eip = (int)VAR_8 + VAR_9;
 VAR_12->pcb_gs = FUNC_3();
 VAR_12->pcb_ext = ((void*)0);


 VAR_10->td_md.md_spinlock_count = 1;
 VAR_10->td_md.md_saved_flags = VAR_4 | VAR_3;
}
