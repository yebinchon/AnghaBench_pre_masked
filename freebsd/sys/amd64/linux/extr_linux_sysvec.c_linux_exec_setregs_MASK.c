
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct trapframe {int tf_rflags; int tf_flags; int tf_gs; int tf_fs; void* tf_es; void* tf_ds; int tf_cs; void* tf_ss; int tf_rsp; int tf_rip; } ;
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
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct pcb*,int) ;
 struct pcb* VAR_11 ;
 int FUNC_2 (struct thread*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct pcb*,int ) ;
 int FUNC_5 (struct thread*) ;

__attribute__((used)) static void
FUNC_6(struct thread *VAR_12, struct image_params *VAR_13, u_long VAR_14)
{
 struct trapframe *VAR_15;
 struct pcb *VAR_16;
 register_t VAR_17;

 VAR_15 = VAR_12->td_frame;
 VAR_16 = VAR_12->td_pcb;

 if (VAR_12->td_proc->p_md.md_ldt != ((void*)0))
  FUNC_5(VAR_12);

 VAR_16->pcb_fsbase = 0;
 VAR_16->pcb_gsbase = 0;
 FUNC_1(VAR_16, VAR_0);
 VAR_16->pcb_initial_fpucw = VAR_6;
 FUNC_4(VAR_16, VAR_2);

 VAR_17 = VAR_15->tf_rflags & VAR_3;
 FUNC_0((char *)VAR_15, sizeof(struct trapframe));
 VAR_15->tf_rip = VAR_13->entry_addr;
 VAR_15->tf_rsp = VAR_14;
 VAR_15->tf_rflags = VAR_4 | VAR_17;
 VAR_15->tf_ss = VAR_8;
 VAR_15->tf_cs = VAR_7;
 VAR_15->tf_ds = VAR_8;
 VAR_15->tf_es = VAR_8;
 VAR_15->tf_fs = VAR_9;
 VAR_15->tf_gs = VAR_10;
 VAR_15->tf_flags = VAR_5;





 if (VAR_16->pcb_flags & VAR_1) {
  VAR_16->pcb_dr0 = 0;
  VAR_16->pcb_dr1 = 0;
  VAR_16->pcb_dr2 = 0;
  VAR_16->pcb_dr3 = 0;
  VAR_16->pcb_dr6 = 0;
  VAR_16->pcb_dr7 = 0;
  if (VAR_16 == VAR_11) {





   FUNC_3();
  }
  FUNC_1(VAR_16, VAR_1);
 }





 FUNC_2(VAR_12);
}
