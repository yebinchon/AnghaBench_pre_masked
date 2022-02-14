
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trapframe {int tf_edx; int pcb_esi; int pcb_esp; int pcb_ebx; struct proc_ldt* md_ldt; scalar_t__ pcb_ext; scalar_t__ pcb_eip; scalar_t__ pcb_ebp; scalar_t__ pcb_edi; int pcb_cr3; int tf_eflags; scalar_t__ tf_eax; struct trapframe* pcb_save; int pcb_gs; } ;
struct TYPE_2__ {int md_spinlock_count; int md_saved_flags; } ;
struct thread {TYPE_1__ td_md; struct trapframe* td_frame; struct trapframe* td_pcb; struct proc* td_proc; } ;
struct proc_ldt {int ldt_refcnt; int ldt_len; } ;
struct proc {int p_pfsflags; int p_vmspace; struct trapframe p_md; } ;
struct pcb {int tf_edx; int pcb_esi; int pcb_esp; int pcb_ebx; struct proc_ldt* md_ldt; scalar_t__ pcb_ext; scalar_t__ pcb_eip; scalar_t__ pcb_ebp; scalar_t__ pcb_edi; int pcb_cr3; int tf_eflags; scalar_t__ tf_eax; struct pcb* pcb_save; int pcb_gs; } ;
struct mdproc {int tf_edx; int pcb_esi; int pcb_esp; int pcb_ebx; struct proc_ldt* md_ldt; scalar_t__ pcb_ext; scalar_t__ pcb_eip; scalar_t__ pcb_ebp; scalar_t__ pcb_edi; int pcb_cr3; int tf_eflags; scalar_t__ tf_eax; struct mdproc* pcb_save; int pcb_gs; } ;
typedef scalar_t__ caddr_t ;


 struct thread* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct trapframe*,struct trapframe*,int) ;
 int VAR_8 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct thread* VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 struct trapframe* FUNC_4 (struct thread*) ;
 struct trapframe* FUNC_5 (struct trapframe*) ;
 struct trapframe* FUNC_6 (struct thread*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct trapframe*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;
 int FUNC_13 (struct trapframe*) ;
 scalar_t__ VAR_14 ;
 void* FUNC_14 (struct trapframe*,int ) ;
 int FUNC_15 (struct proc_ldt*) ;
 int FUNC_16 (int ) ;

void
FUNC_17(struct thread *VAR_15, struct proc *VAR_16, struct thread *VAR_17, int VAR_18)
{
 struct proc *VAR_19;
 struct pcb *VAR_20;
 struct mdproc *VAR_21;

 VAR_19 = VAR_15->td_proc;
 if ((VAR_18 & VAR_6) == 0) {
  if ((VAR_18 & VAR_5) == 0) {

   struct mdproc *VAR_22 = &VAR_19->p_md;
   struct proc_ldt *VAR_23, *VAR_24;

   FUNC_7(&VAR_10);
   if ((VAR_24 = VAR_22->md_ldt) != ((void*)0) &&
       VAR_24->ldt_refcnt > 1) {
    VAR_23 = FUNC_14(VAR_22, VAR_24->ldt_len);
    if (VAR_23 == ((void*)0))
     FUNC_10("could not copy LDT");
    VAR_22->md_ldt = VAR_23;
    FUNC_13(VAR_22);
    FUNC_15(VAR_24);
   } else
    FUNC_8(&VAR_10);
  }
  return;
 }


 if (VAR_15 == VAR_9)
  VAR_15->td_pcb->pcb_gs = FUNC_12();
 FUNC_2();
 if (FUNC_0(VAR_13) == VAR_15)
  FUNC_9(VAR_15->td_pcb->pcb_save);
 FUNC_3();


 VAR_20 = FUNC_4(VAR_17);
 VAR_17->td_pcb = VAR_20;


 FUNC_1(VAR_15->td_pcb, VAR_20, sizeof(*VAR_20));


 VAR_20->pcb_save = FUNC_5(VAR_20);
 FUNC_1(FUNC_6(VAR_15), FUNC_5(VAR_20),
     VAR_8);


 VAR_21 = &VAR_16->p_md;
 FUNC_1(&VAR_19->p_md, VAR_21, sizeof(*VAR_21));
 VAR_17->td_frame = (struct trapframe *)((caddr_t)VAR_17->td_pcb -
     VAR_7) - 1;
 FUNC_1(VAR_15->td_frame, VAR_17->td_frame, sizeof(struct trapframe));

 VAR_17->td_frame->tf_eax = 0;
 VAR_17->td_frame->tf_eflags &= ~VAR_1;
 VAR_17->td_frame->tf_edx = 1;
 if ((VAR_19->p_pfsflags & VAR_0) == 0)
  VAR_17->td_frame->tf_eflags &= ~VAR_4;





 VAR_20->pcb_cr3 = FUNC_11(FUNC_16(VAR_16->p_vmspace));
 VAR_20->pcb_edi = 0;
 VAR_20->pcb_esi = (int)VAR_11;
 VAR_20->pcb_ebp = 0;
 VAR_20->pcb_esp = (int)VAR_17->td_frame - sizeof(void *);
 VAR_20->pcb_ebx = (int)VAR_17;
 VAR_20->pcb_eip = (int)VAR_12 + VAR_14;
 VAR_20->pcb_ext = 0;


 FUNC_7(&VAR_10);
 if (VAR_21->md_ldt != ((void*)0)) {
  if (VAR_18 & VAR_5) {
   VAR_21->md_ldt->ldt_refcnt++;
  } else {
   VAR_21->md_ldt = FUNC_14(VAR_21,
       VAR_21->md_ldt->ldt_len);
   if (VAR_21->md_ldt == ((void*)0))
    FUNC_10("could not copy LDT");
  }
 }
 FUNC_8(&VAR_10);


 VAR_17->td_md.md_spinlock_count = 1;
 VAR_17->td_md.md_saved_flags = VAR_3 | VAR_2;
}
