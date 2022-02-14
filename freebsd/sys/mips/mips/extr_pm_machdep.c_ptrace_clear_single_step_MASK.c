
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ md_ss_addr; int md_ss_instr; } ;
struct thread {TYPE_1__ td_md; int td_tid; struct proc* td_proc; } ;
struct proc {int p_pid; int p_comm; } ;


 int FUNC_0 (int ,char*,int ,scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (struct proc*,int ) ;
 int FUNC_3 (struct proc*) ;
 int FUNC_4 (int ,char*,int ,int ,void*,int ) ;
 int FUNC_5 (struct thread*,scalar_t__,int ) ;

int
FUNC_6(struct thread *VAR_4)
{
 struct proc *VAR_5;
 int VAR_6;

 VAR_5 = VAR_4->td_proc;
 FUNC_2(VAR_5, VAR_3);
 if (!VAR_4->td_md.md_ss_addr)
  return VAR_0;




 FUNC_3(VAR_5);
 FUNC_0(VAR_1,
     "ptrace_clear_single_step: tid %d, restore instr at %#lx: %#08x",
     VAR_4->td_tid, VAR_4->td_md.md_ss_addr, VAR_4->td_md.md_ss_instr);
 VAR_6 = FUNC_5(VAR_4, VAR_4->td_md.md_ss_addr,
     VAR_4->td_md.md_ss_instr);
 FUNC_1(VAR_5);



 if (VAR_6 != 0) {
  FUNC_4(VAR_2,
      "SS %s %d: can't restore instruction at %p: %x\n",
      VAR_5->p_comm, VAR_5->p_pid, (void *)VAR_4->td_md.md_ss_addr,
      VAR_4->td_md.md_ss_instr);
 }
 VAR_4->td_md.md_ss_addr = 0;
 return 0;
}
