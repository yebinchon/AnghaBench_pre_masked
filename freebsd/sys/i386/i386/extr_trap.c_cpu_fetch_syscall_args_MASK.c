
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int32_t ;
typedef int u_int ;
struct trapframe {int tf_cs; int tf_eip; int tf_err; long tf_eax; int tf_edx; scalar_t__ tf_esp; } ;
struct syscall_args {long code; int narg; scalar_t__ args; TYPE_2__* callp; } ;
struct thread {int * td_retval; struct syscall_args td_sa; struct trapframe* td_frame; struct proc* td_proc; } ;
struct proc {TYPE_1__* p_sysent; } ;
typedef int quad_t ;
typedef int * caddr_t ;
struct TYPE_4__ {int sy_narg; } ;
struct TYPE_3__ {long sv_size; TYPE_2__* sv_table; } ;


 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,long*) ;
 int FUNC_3 (void*,int*) ;
 int FUNC_4 (void*) ;

int
FUNC_5(struct thread *VAR_3)
{
 struct proc *VAR_4;
 struct trapframe *VAR_5;
 struct syscall_args *VAR_6;
 caddr_t VAR_7;
 long VAR_8;
 int VAR_9;





 VAR_4 = VAR_3->td_proc;
 VAR_5 = VAR_3->td_frame;
 VAR_6 = &VAR_3->td_sa;
 VAR_6->code = VAR_5->tf_eax;
 VAR_7 = (caddr_t)VAR_5->tf_esp + sizeof(uint32_t);




 if (VAR_6->code == VAR_2) {



  VAR_9 = FUNC_2(VAR_7, &VAR_8);
  if (VAR_9 == -1)
   return (VAR_0);
  VAR_6->code = VAR_8;
  VAR_7 += sizeof(uint32_t);
 } else if (VAR_6->code == VAR_1) {




  VAR_9 = FUNC_2(VAR_7, &VAR_8);
  if (VAR_9 == -1)
   return (VAR_0);
  VAR_6->code = VAR_8;
  VAR_7 += sizeof(quad_t);
 }

  if (VAR_6->code >= VAR_4->p_sysent->sv_size)
   VAR_6->callp = &VAR_4->p_sysent->sv_table[0];
   else
   VAR_6->callp = &VAR_4->p_sysent->sv_table[VAR_6->code];
 VAR_6->narg = VAR_6->callp->sy_narg;

 if (VAR_7 != ((void*)0) && VAR_6->narg != 0)
  VAR_9 = FUNC_1(VAR_7, (caddr_t)VAR_6->args,
      (u_int)(VAR_6->narg * sizeof(uint32_t)));
 else
  VAR_9 = 0;

 if (VAR_9 == 0) {
  VAR_3->td_retval[0] = 0;
  VAR_3->td_retval[1] = VAR_5->tf_edx;
 }

 return (VAR_9);
}
