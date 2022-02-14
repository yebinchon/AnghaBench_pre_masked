
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct syscall_args {size_t code; int narg; unsigned int* args; TYPE_2__* callp; } ;
struct thread {scalar_t__* td_retval; TYPE_3__* td_frame; struct syscall_args td_sa; struct proc* td_proc; } ;
struct proc {TYPE_1__* p_sysent; } ;
typedef void* register_t ;
struct TYPE_6__ {void** tf_x; } ;
struct TYPE_5__ {int sy_narg; } ;
struct TYPE_4__ {size_t sv_size; TYPE_2__* sv_table; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (void*,unsigned int*,int) ;
 int FUNC_1 (unsigned int*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(struct thread *VAR_2)
{
 struct proc *VAR_3;
 register_t *VAR_4;
 struct syscall_args *VAR_5;
 int VAR_6, VAR_7, VAR_8;
 unsigned int VAR_9[4];

 VAR_8 = 4;
 VAR_3 = VAR_2->td_proc;
 VAR_4 = VAR_2->td_frame->tf_x;
 VAR_5 = &VAR_2->td_sa;


 VAR_5->code = VAR_2->td_frame->tf_x[7];

 if (VAR_5->code == VAR_1) {
  VAR_5->code = *VAR_4++;
  VAR_8--;
 } else if (VAR_5->code == VAR_0) {
  VAR_5->code = VAR_4[1];
  VAR_8 -= 2;
  VAR_4 += 2;
 }

 if (VAR_5->code >= VAR_3->p_sysent->sv_size)
  VAR_5->callp = &VAR_3->p_sysent->sv_table[0];
 else
  VAR_5->callp = &VAR_3->p_sysent->sv_table[VAR_5->code];

 VAR_5->narg = VAR_5->callp->sy_narg;
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
  VAR_5->args[VAR_7] = VAR_4[VAR_7];
 if (VAR_5->narg > VAR_8) {
  if ((VAR_5->narg - VAR_8) > FUNC_1(VAR_9))
   FUNC_2("Too many system call arguiments");
  VAR_6 = FUNC_0((void *)VAR_2->td_frame->tf_x[13], VAR_9,
      (VAR_5->narg - VAR_8) * sizeof(int));
  for (VAR_7 = 0; VAR_7 < (VAR_5->narg - VAR_8); VAR_7++)
   VAR_5->args[VAR_7 + VAR_8] = VAR_9[VAR_7];
 }

 VAR_2->td_retval[0] = 0;
 VAR_2->td_retval[1] = 0;

 return (0);
}
