
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u_int32_t ;
typedef int u_int ;
struct trapframe {int tf_cs; int tf_rip; int tf_err; size_t tf_rax; int tf_rdx; scalar_t__ tf_rsp; } ;
struct syscall_args {size_t code; int narg; void** args; TYPE_2__* callp; } ;
struct thread {int * td_retval; struct syscall_args td_sa; struct trapframe* td_frame; struct proc* td_proc; } ;
struct proc {TYPE_1__* p_sysent; } ;
typedef int quad_t ;
typedef void* caddr_t ;
struct TYPE_4__ {int sy_narg; } ;
struct TYPE_3__ {size_t sv_size; TYPE_2__* sv_table; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (void*,void*,int ) ;
 int FUNC_2 (void*,void**) ;
 int FUNC_3 (void*) ;

int
FUNC_4(struct thread *VAR_3)
{
 struct proc *VAR_4;
 struct trapframe *VAR_5;
 struct syscall_args *VAR_6;
 caddr_t VAR_7;
 u_int32_t VAR_8[8], VAR_9;
 int VAR_10, VAR_11;





 VAR_4 = VAR_3->td_proc;
 VAR_5 = VAR_3->td_frame;
 VAR_6 = &VAR_3->td_sa;
 VAR_7 = (caddr_t)VAR_5->tf_rsp + sizeof(u_int32_t);
 VAR_6->code = VAR_5->tf_rax;




 if (VAR_6->code == VAR_2) {



  VAR_10 = FUNC_2(VAR_7, &VAR_9);
  if (VAR_10 == -1)
   return (VAR_0);
  VAR_6->code = VAR_9;
  VAR_7 += sizeof(int);
 } else if (VAR_6->code == VAR_1) {






  VAR_10 = FUNC_2(VAR_7, &VAR_9);
  if (VAR_10 == -1)
   return (VAR_0);
  VAR_6->code = VAR_9;
  VAR_7 += sizeof(quad_t);
 }
  if (VAR_6->code >= VAR_4->p_sysent->sv_size)
   VAR_6->callp = &VAR_4->p_sysent->sv_table[0];
   else
   VAR_6->callp = &VAR_4->p_sysent->sv_table[VAR_6->code];
 VAR_6->narg = VAR_6->callp->sy_narg;

 if (VAR_7 != ((void*)0) && VAR_6->narg != 0)
  VAR_10 = FUNC_1(VAR_7, (caddr_t)VAR_8,
      (u_int)(VAR_6->narg * sizeof(int)));
 else
  VAR_10 = 0;

 for (VAR_11 = 0; VAR_11 < VAR_6->narg; VAR_11++)
  VAR_6->args[VAR_11] = VAR_8[VAR_11];

 if (VAR_10 == 0) {
  VAR_3->td_retval[0] = 0;
  VAR_3->td_retval[1] = VAR_5->tf_rdx;
 }

 return (VAR_10);
}
