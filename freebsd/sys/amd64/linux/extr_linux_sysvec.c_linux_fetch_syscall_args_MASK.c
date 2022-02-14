
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct trapframe {size_t tf_rax; int tf_r9; int tf_r8; int tf_rcx; int tf_rdx; int tf_rsi; int tf_rdi; } ;
struct syscall_args {size_t code; TYPE_2__* callp; int narg; int * args; } ;
struct thread {scalar_t__* td_retval; struct syscall_args td_sa; struct trapframe* td_frame; struct proc* td_proc; } ;
struct proc {TYPE_1__* p_sysent; } ;
struct TYPE_4__ {int sy_narg; } ;
struct TYPE_3__ {size_t sv_size; TYPE_2__* sv_table; } ;



__attribute__((used)) static int
FUNC_0(struct thread *VAR_0)
{
 struct proc *VAR_1;
 struct trapframe *VAR_2;
 struct syscall_args *VAR_3;

 VAR_1 = VAR_0->td_proc;
 VAR_2 = VAR_0->td_frame;
 VAR_3 = &VAR_0->td_sa;

 VAR_3->args[0] = VAR_2->tf_rdi;
 VAR_3->args[1] = VAR_2->tf_rsi;
 VAR_3->args[2] = VAR_2->tf_rdx;
 VAR_3->args[3] = VAR_2->tf_rcx;
 VAR_3->args[4] = VAR_2->tf_r8;
 VAR_3->args[5] = VAR_2->tf_r9;
 VAR_3->code = VAR_2->tf_rax;

 if (VAR_3->code >= VAR_1->p_sysent->sv_size)

  VAR_3->callp = &VAR_1->p_sysent->sv_table[VAR_1->p_sysent->sv_size - 1];
 else
  VAR_3->callp = &VAR_1->p_sysent->sv_table[VAR_3->code];
 VAR_3->narg = VAR_3->callp->sy_narg;

 VAR_0->td_retval[0] = 0;
 return (0);
}
