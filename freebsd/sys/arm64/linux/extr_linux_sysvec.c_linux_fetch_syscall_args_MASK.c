
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct syscall_args {size_t code; int narg; int args; TYPE_3__* callp; } ;
struct thread {scalar_t__* td_retval; TYPE_1__* td_frame; struct syscall_args td_sa; struct proc* td_proc; } ;
struct proc {TYPE_2__* p_sysent; } ;
typedef size_t register_t ;
struct TYPE_6__ {int sy_narg; } ;
struct TYPE_5__ {size_t sv_size; TYPE_3__* sv_table; } ;
struct TYPE_4__ {size_t* tf_x; } ;


 int FUNC_0 (int ,size_t*,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(struct thread *VAR_0)
{
 struct proc *VAR_1;
 struct syscall_args *VAR_2;
 register_t *VAR_3;

 VAR_1 = VAR_0->td_proc;
 VAR_3 = VAR_0->td_frame->tf_x;
 VAR_2 = &VAR_0->td_sa;

 VAR_2->code = VAR_0->td_frame->tf_x[8];

 if (VAR_2->code >= VAR_1->p_sysent->sv_size)
  VAR_2->callp = &VAR_1->p_sysent->sv_table[0];
 else
  VAR_2->callp = &VAR_1->p_sysent->sv_table[VAR_2->code];

 VAR_2->narg = VAR_2->callp->sy_narg;
 if (VAR_2->narg > 8)
  FUNC_1("ARM64TODO: Could we have more than 8 args?");
 FUNC_0(VAR_2->args, VAR_3, 8 * sizeof(register_t));

 VAR_0->td_retval[0] = 0;
 return (0);
}
