
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trapframe {size_t tf_r12; int tf_r1; scalar_t__ tf_usr_sp; int tf_r3; int tf_r2; int tf_r0; } ;
struct syscall_args {size_t code; int narg; int * args; TYPE_1__* callp; } ;
struct thread {int * td_retval; struct trapframe* td_frame; struct syscall_args td_sa; } ;
typedef int register_t ;
struct TYPE_2__ {int sy_narg; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (void*,int *,int) ;

__attribute__((used)) static int
FUNC_1(struct thread *VAR_3)
{
 struct trapframe *VAR_4;
 struct syscall_args *VAR_5;
 int VAR_6;

 VAR_4 = VAR_3->td_frame;
 VAR_5 = &VAR_3->td_sa;


 VAR_5->code = VAR_4->tf_r12;
 if (VAR_5->code >= VAR_0)
  return (VAR_1);
 VAR_5->callp = &VAR_2[VAR_5->code];
 VAR_5->narg = VAR_5->callp->sy_narg;


 VAR_5->args[0] = VAR_4->tf_r0;
 VAR_5->args[1] = VAR_4->tf_r1;
 VAR_5->args[2] = VAR_4->tf_r2;
 VAR_5->args[3] = VAR_4->tf_r3;
 if (VAR_5->narg > 4) {
  VAR_6 = FUNC_0((void *)VAR_3->td_frame->tf_usr_sp, &VAR_5->args[4],
      (VAR_5->narg - 4) * sizeof(register_t));
  if (VAR_6 != 0)
   return (VAR_6);
 }


 VAR_3->td_retval[0] = 0;
 VAR_3->td_retval[1] = VAR_4->tf_r1;
 return (0);
}
