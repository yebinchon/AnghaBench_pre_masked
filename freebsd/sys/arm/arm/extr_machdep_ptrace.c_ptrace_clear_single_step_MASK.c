
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ md_ptrace_instr; scalar_t__ md_ptrace_instr_alt; int md_ptrace_addr_alt; int md_ptrace_addr; } ;
struct thread {TYPE_2__ td_md; struct proc* td_proc; TYPE_1__* td_frame; } ;
struct proc {int dummy; } ;
struct TYPE_3__ {int tf_spsr; } ;


 int VAR_0 ;
 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 int VAR_1 ;
 int FUNC_2 (struct thread*,int ,scalar_t__) ;

int
FUNC_3(struct thread *VAR_2)
{
 struct proc *VAR_3;


 if ((VAR_2->td_frame->tf_spsr & VAR_1) != 0)
  return (VAR_0);

 if (VAR_2->td_md.md_ptrace_instr != 0) {
  VAR_3 = VAR_2->td_proc;
  FUNC_1(VAR_3);
  FUNC_2(VAR_2, VAR_2->td_md.md_ptrace_addr,
      VAR_2->td_md.md_ptrace_instr);
  FUNC_0(VAR_3);
  VAR_2->td_md.md_ptrace_instr = 0;
 }

 if (VAR_2->td_md.md_ptrace_instr_alt != 0) {
  VAR_3 = VAR_2->td_proc;
  FUNC_1(VAR_3);
  FUNC_2(VAR_2, VAR_2->td_md.md_ptrace_addr_alt,
      VAR_2->td_md.md_ptrace_instr_alt);
  FUNC_0(VAR_3);
  VAR_2->td_md.md_ptrace_instr_alt = 0;
 }

 return (0);
}
