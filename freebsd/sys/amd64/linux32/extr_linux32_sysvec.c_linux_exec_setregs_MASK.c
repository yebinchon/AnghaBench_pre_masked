
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct trapframe {int tf_rflags; int tf_rbx; int tf_cs; int tf_flags; void* tf_ss; void* tf_ds; void* tf_es; int tf_fs; int tf_gs; int tf_rsp; int tf_rip; } ;
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
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct thread*) ;
 int FUNC_4 (struct pcb*,int) ;
 int FUNC_5 (struct thread*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void
FUNC_7(struct thread *VAR_12, struct image_params *VAR_13, u_long VAR_14)
{
 struct trapframe *VAR_15 = VAR_12->td_frame;
 struct pcb *VAR_16 = VAR_12->td_pcb;
 register_t VAR_17;

 VAR_15 = VAR_12->td_frame;
 VAR_16 = VAR_12->td_pcb;

 if (VAR_12->td_proc->p_md.md_ldt != ((void*)0))
  FUNC_5(VAR_12);

 FUNC_1();
 FUNC_6(VAR_0, 0);
 FUNC_6(VAR_1, 0);
 VAR_16->pcb_fsbase = 0;
 VAR_16->pcb_gsbase = 0;
 FUNC_2();
 VAR_16->pcb_initial_fpucw = VAR_7;

 VAR_17 = VAR_15->tf_rflags & VAR_4;
 FUNC_0((char *)VAR_15, sizeof(struct trapframe));
 VAR_15->tf_rip = VAR_13->entry_addr;
 VAR_15->tf_rsp = VAR_14;
 VAR_15->tf_rflags = VAR_5 | VAR_17;
 VAR_15->tf_gs = VAR_11;
 VAR_15->tf_fs = VAR_10;
 VAR_15->tf_es = VAR_9;
 VAR_15->tf_ds = VAR_9;
 VAR_15->tf_ss = VAR_9;
 VAR_15->tf_flags = VAR_6;
 VAR_15->tf_cs = VAR_8;
 VAR_15->tf_rbx = VAR_13->ps_strings;

 FUNC_3(VAR_12);


 FUNC_4(VAR_16, VAR_2 | VAR_3);
}
