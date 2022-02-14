
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trapframe {size_t* tf_x; } ;
struct syscall_args {size_t code; size_t* args; TYPE_1__* callp; int narg; } ;
struct thread {size_t* td_retval; struct syscall_args td_sa; struct trapframe* td_frame; } ;
struct TYPE_2__ {int sy_narg; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int
FUNC_0(struct thread *VAR_4)
{
 struct trapframe *VAR_5;
 struct syscall_args *VAR_6;
 int VAR_7;

 VAR_5 = VAR_4->td_frame;
 VAR_6 = &VAR_4->td_sa;


 VAR_6->code = VAR_5->tf_x[8];
 if (VAR_6->code >= VAR_0)
  return (VAR_1);
 VAR_6->callp = &VAR_3[VAR_6->code];
 VAR_6->narg = VAR_6->callp->sy_narg;


 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
  VAR_6->args[VAR_7] = VAR_5->tf_x[VAR_7];


 VAR_4->td_retval[0] = 0;
 VAR_4->td_retval[1] = VAR_5->tf_x[1];
 return (0);
}
