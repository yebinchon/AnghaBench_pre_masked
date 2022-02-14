
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct syscall_args {size_t code; int nap; int narg; scalar_t__ args; TYPE_2__* callp; } ;
struct thread {scalar_t__* td_retval; TYPE_3__* td_frame; struct proc* td_proc; struct syscall_args td_sa; } ;
struct proc {TYPE_1__* p_sysent; } ;
typedef size_t register_t ;
struct TYPE_6__ {size_t tf_r7; size_t tf_r0; scalar_t__ tf_usr_sp; } ;
struct TYPE_5__ {int sy_narg; } ;
struct TYPE_4__ {size_t sv_size; TYPE_2__* sv_table; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (void*,scalar_t__,int) ;
 int FUNC_1 (scalar_t__,size_t*,int) ;

int
FUNC_2(struct thread *VAR_3)
{
 struct proc *VAR_4;
 register_t *VAR_5;
 struct syscall_args *VAR_6;
 int VAR_7;

 VAR_6 = &VAR_3->td_sa;
 VAR_6->code = VAR_3->td_frame->tf_r7;
 VAR_5 = &VAR_3->td_frame->tf_r0;
 if (VAR_6->code == VAR_1) {
  VAR_6->code = *VAR_5++;
  VAR_6->nap--;
 } else if (VAR_6->code == VAR_0) {
  VAR_6->code = VAR_5[VAR_2];
  VAR_6->nap -= 2;
  VAR_5 += 2;
 }
 VAR_4 = VAR_3->td_proc;
 if (VAR_6->code >= VAR_4->p_sysent->sv_size)
  VAR_6->callp = &VAR_4->p_sysent->sv_table[0];
 else
  VAR_6->callp = &VAR_4->p_sysent->sv_table[VAR_6->code];
 VAR_6->narg = VAR_6->callp->sy_narg;
 VAR_7 = 0;
 FUNC_1(VAR_6->args, VAR_5, VAR_6->nap * sizeof(register_t));
 if (VAR_6->narg > VAR_6->nap) {
  VAR_7 = FUNC_0((void *)VAR_3->td_frame->tf_usr_sp, VAR_6->args +
      VAR_6->nap, (VAR_6->narg - VAR_6->nap) * sizeof(register_t));
 }
 if (VAR_7 == 0) {
  VAR_3->td_retval[0] = 0;
  VAR_3->td_retval[1] = 0;
 }
 return (VAR_7);
}
