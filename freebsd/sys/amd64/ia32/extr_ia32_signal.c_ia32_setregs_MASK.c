
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct trapframe {int tf_rflags; int tf_flags; int tf_gs; int tf_fs; void* tf_es; void* tf_ds; int tf_rbx; int tf_cs; void* tf_ss; int tf_rsp; int tf_rip; } ;
struct thread {TYPE_2__* td_proc; struct pcb* td_pcb; struct trapframe* td_frame; } ;
struct pcb {int pcb_initial_fpucw; scalar_t__ pcb_gsbase; scalar_t__ pcb_fsbase; } ;
struct image_params {int ps_strings; int entry_addr; } ;
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
 int FUNC_1 (struct thread*) ;
 int FUNC_2 (struct pcb*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (struct thread*) ;

void
FUNC_5(struct thread *VAR_10, struct image_params *VAR_11, u_long VAR_12)
{
 struct trapframe *VAR_13;
 struct pcb *VAR_14;
 register_t VAR_15;

 VAR_13 = VAR_10->td_frame;
 VAR_14 = VAR_10->td_pcb;

 if (VAR_10->td_proc->p_md.md_ldt != ((void*)0))
  FUNC_4(VAR_10);




 VAR_14->pcb_fsbase = 0;
 VAR_14->pcb_gsbase = 0;
 VAR_14->pcb_initial_fpucw = VAR_5;

 VAR_15 = VAR_13->tf_rflags & VAR_2;
 FUNC_0((char *)VAR_13, sizeof(struct trapframe));
 VAR_13->tf_rip = VAR_11->entry_addr;
 VAR_13->tf_rsp = VAR_12;
 VAR_13->tf_rflags = VAR_3 | VAR_15;
 VAR_13->tf_ss = VAR_7;
 VAR_13->tf_cs = VAR_6;
 VAR_13->tf_rbx = VAR_11->ps_strings;
 VAR_13->tf_ds = VAR_7;
 VAR_13->tf_es = VAR_7;
 VAR_13->tf_fs = VAR_8;
 VAR_13->tf_gs = VAR_9;
 VAR_13->tf_flags = VAR_4;

 FUNC_1(VAR_10);


 FUNC_2(VAR_14, VAR_0 | VAR_1);
}
