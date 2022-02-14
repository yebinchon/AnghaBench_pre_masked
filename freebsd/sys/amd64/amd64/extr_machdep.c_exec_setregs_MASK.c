
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct trapframe {int tf_rflags; int tf_rsp; int tf_rdi; int tf_flags; int tf_gs; int tf_fs; void* tf_es; void* tf_ds; int tf_cs; void* tf_ss; int tf_rip; } ;
struct thread {TYPE_2__* td_proc; struct pcb* td_pcb; struct trapframe* td_frame; } ;
struct pcb {int pcb_flags; scalar_t__ pcb_dr7; scalar_t__ pcb_dr6; scalar_t__ pcb_dr3; scalar_t__ pcb_dr2; scalar_t__ pcb_dr1; scalar_t__ pcb_dr0; int pcb_initial_fpucw; scalar_t__ pcb_gsbase; scalar_t__ pcb_fsbase; } ;
struct image_params {int entry_addr; } ;
typedef int register_t ;
struct TYPE_3__ {int * md_ldt; } ;
struct TYPE_4__ {TYPE_1__ p_md; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct pcb*,int) ;
 struct pcb* VAR_10 ;
 int FUNC_2 (struct thread*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct pcb*) ;
 int FUNC_5 (struct thread*) ;

void
FUNC_6(struct thread *VAR_11, struct image_params *VAR_12, u_long VAR_13)
{
 struct trapframe *VAR_14;
 struct pcb *VAR_15;
 register_t VAR_16;

 VAR_14 = VAR_11->td_frame;
 VAR_15 = VAR_11->td_pcb;

 if (VAR_11->td_proc->p_md.md_ldt != ((void*)0))
  FUNC_5(VAR_11);

 FUNC_4(VAR_15);
 VAR_15->pcb_fsbase = 0;
 VAR_15->pcb_gsbase = 0;
 FUNC_1(VAR_15, VAR_0);
 VAR_15->pcb_initial_fpucw = VAR_5;

 VAR_16 = VAR_14->tf_rflags & VAR_2;
 FUNC_0((char *)VAR_14, sizeof(struct trapframe));
 VAR_14->tf_rip = VAR_12->entry_addr;
 VAR_14->tf_rsp = ((VAR_13 - 8) & ~0xFul) + 8;
 VAR_14->tf_rdi = VAR_13;
 VAR_14->tf_rflags = VAR_3 | VAR_16;
 VAR_14->tf_ss = VAR_7;
 VAR_14->tf_cs = VAR_6;
 VAR_14->tf_ds = VAR_7;
 VAR_14->tf_es = VAR_7;
 VAR_14->tf_fs = VAR_8;
 VAR_14->tf_gs = VAR_9;
 VAR_14->tf_flags = VAR_4;





 if (VAR_15->pcb_flags & VAR_1) {
  VAR_15->pcb_dr0 = 0;
  VAR_15->pcb_dr1 = 0;
  VAR_15->pcb_dr2 = 0;
  VAR_15->pcb_dr3 = 0;
  VAR_15->pcb_dr6 = 0;
  VAR_15->pcb_dr7 = 0;
  if (VAR_15 == VAR_10) {





   FUNC_3();
  }
  FUNC_1(VAR_15, VAR_1);
 }





 FUNC_2(VAR_11);
}
