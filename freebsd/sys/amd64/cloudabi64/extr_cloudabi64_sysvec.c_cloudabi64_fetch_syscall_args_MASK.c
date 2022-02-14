
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trapframe {size_t tf_rax; int tf_rdx; int tf_r9; int tf_r8; int tf_rcx; int tf_rsi; int tf_rdi; } ;
struct syscall_args {size_t code; int * args; TYPE_1__* callp; int narg; } ;
struct thread {int * td_retval; struct syscall_args td_sa; struct trapframe* td_frame; } ;
struct TYPE_2__ {int sy_narg; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int
FUNC_0(struct thread *VAR_3)
{
 struct trapframe *VAR_4;
 struct syscall_args *VAR_5;

 VAR_4 = VAR_3->td_frame;
 VAR_5 = &VAR_3->td_sa;


 VAR_5->code = VAR_4->tf_rax;
 if (VAR_5->code >= VAR_0)
  return (VAR_1);
 VAR_5->callp = &VAR_2[VAR_5->code];
 VAR_5->narg = VAR_5->callp->sy_narg;


 VAR_5->args[0] = VAR_4->tf_rdi;
 VAR_5->args[1] = VAR_4->tf_rsi;
 VAR_5->args[2] = VAR_4->tf_rdx;
 VAR_5->args[3] = VAR_4->tf_rcx;
 VAR_5->args[4] = VAR_4->tf_r8;
 VAR_5->args[5] = VAR_4->tf_r9;


 VAR_3->td_retval[0] = 0;
 VAR_3->td_retval[1] = VAR_4->tf_rdx;
 return (0);
}
