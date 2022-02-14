
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trapframe {uintptr_t pc; int cause; int fsr; } ;
struct TYPE_2__ {uintptr_t md_ss_addr; int md_ss_instr; } ;
struct thread {TYPE_1__ td_md; int td_tid; struct proc* td_proc; struct trapframe* td_frame; } ;
struct proc {char* p_comm; int p_pid; } ;
typedef uintptr_t off_t ;


 int FUNC_0 (int ,char*,int ,uintptr_t,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 uintptr_t FUNC_1 (struct trapframe*,uintptr_t,int ,uintptr_t) ;
 int FUNC_2 (struct proc*) ;
 int FUNC_3 (struct proc*) ;
 int FUNC_4 (char*,char*,int,void*,void*) ;
 int FUNC_5 (struct thread*,uintptr_t,int*) ;
 int FUNC_6 (struct thread*,uintptr_t,int) ;

int
FUNC_7(struct thread *VAR_4)
{
 uintptr_t VAR_5;
 struct trapframe *VAR_6 = VAR_4->td_frame;
 int VAR_7;
 int VAR_8 = VAR_2;
 int VAR_9;
 struct proc *VAR_10;

 VAR_10 = VAR_4->td_proc;
 FUNC_3(VAR_10);



 VAR_7 = FUNC_5(VAR_4, VAR_6->pc, &VAR_9);
 if (VAR_7)
  goto out;

 FUNC_0(VAR_1,
     "ptrace_single_step: tid %d, current instr at %#lx: %#08x",
     VAR_4->td_tid, VAR_6->pc, VAR_9);


 if (VAR_6->cause & VAR_3) {
  VAR_5 = FUNC_1(VAR_6, VAR_6->pc, VAR_6->fsr,
      (uintptr_t)&VAR_9);
 } else {
  VAR_5 = VAR_6->pc + 4;
 }
 if (VAR_4->td_md.md_ss_addr) {
  FUNC_4("SS %s (%d): breakpoint already set at %p (va %p)\n",
      VAR_10->p_comm, VAR_10->p_pid, (void *)VAR_4->td_md.md_ss_addr,
      (void *)VAR_5);
  VAR_7 = VAR_0;
  goto out;
 }
 VAR_4->td_md.md_ss_addr = VAR_5;



 VAR_7 = FUNC_5(VAR_4, (off_t)VAR_5, &VAR_4->td_md.md_ss_instr);
 if (VAR_7)
  goto out;




 VAR_7 = FUNC_6(VAR_4, VAR_5, VAR_8);






out:
 FUNC_2(VAR_10);
 if (VAR_7 == 0)
  FUNC_0(VAR_1,
      "ptrace_single_step: tid %d, break set at %#lx: (%#08x)",
      VAR_4->td_tid, VAR_5, VAR_4->td_md.md_ss_instr);
 return (VAR_7);
}
