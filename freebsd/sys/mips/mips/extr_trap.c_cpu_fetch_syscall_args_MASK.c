
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
struct trapframe {int pc; int v0; int a0; int a1; int a2; int a3; int a4; int a5; int a6; int a7; int v1; scalar_t__ sp; } ;
struct syscall_args {int* args; int code; int narg; TYPE_1__* callp; TYPE_3__* trapframe; } ;
struct thread {int * td_retval; TYPE_4__* td_proc; TYPE_2__* td_pcb; struct syscall_args td_sa; struct trapframe* td_frame; } ;
struct sysentvec {int sv_size; TYPE_1__* sv_table; } ;
typedef int register_t ;
typedef int int32_t ;
typedef int caddr_t ;
struct TYPE_8__ {int p_pid; struct sysentvec* p_sysent; } ;
struct TYPE_7__ {int pc; int cause; } ;
struct TYPE_6__ {int pcb_tpc; } ;
struct TYPE_5__ {int sy_narg; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct trapframe*,int ,int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_4__*,int ) ;


 int VAR_1 ;
 int FUNC_3 (int*,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (char*,size_t,int,...) ;
 scalar_t__ VAR_2 ;

int
FUNC_6(struct thread *VAR_3)
{
 struct trapframe *VAR_4;
 struct sysentvec *VAR_5;
 struct syscall_args *VAR_6;
 int VAR_7, VAR_8;

 VAR_4 = VAR_3->td_frame;
 VAR_6 = &VAR_3->td_sa;

 FUNC_3(VAR_6->args, sizeof(VAR_6->args));


 VAR_3->td_pcb->pcb_tpc = VAR_6->trapframe->pc;
 if (FUNC_0(VAR_6->trapframe->cause))
  VAR_4->pc = FUNC_1(VAR_4, VAR_6->trapframe->pc, 0, 0);
 else
  VAR_4->pc += sizeof(int);
 VAR_6->code = VAR_4->v0;

 switch (VAR_6->code) {
 case 129:
 case 128:




  if (VAR_6->code == 129 && FUNC_2(VAR_3->td_proc, VAR_0)) {




   if (VAR_1 == 0)
    VAR_6->code = VAR_4->a0;
   else
    VAR_6->code = VAR_4->a1;
   VAR_6->args[0] = VAR_4->a2;
   VAR_6->args[1] = VAR_4->a3;
   VAR_8 = 2;
   break;
  }





  VAR_6->code = VAR_4->a0;
  VAR_6->args[0] = VAR_4->a1;
  VAR_6->args[1] = VAR_4->a2;
  VAR_6->args[2] = VAR_4->a3;
  VAR_8 = 3;
  break;
 default:



  VAR_6->args[0] = VAR_4->a0;
  VAR_6->args[1] = VAR_4->a1;
  VAR_6->args[2] = VAR_4->a2;
  VAR_6->args[3] = VAR_4->a3;
  VAR_8 = 4;
  break;
 }






 VAR_5 = VAR_3->td_proc->p_sysent;





 if (VAR_6->code >= VAR_5->sv_size)
  VAR_6->callp = &VAR_5->sv_table[0];
 else
  VAR_6->callp = &VAR_5->sv_table[VAR_6->code];

 VAR_6->narg = VAR_6->callp->sy_narg;

 if (VAR_6->narg > VAR_8) {
  VAR_7 = FUNC_4((caddr_t)(intptr_t)(VAR_4->sp +
      4 * sizeof(register_t)), (caddr_t)&VAR_6->args[VAR_8],
     (u_int)(VAR_6->narg - VAR_8) * sizeof(register_t));
  if (VAR_7 != 0) {
   VAR_4->v0 = VAR_7;
   VAR_4->a3 = 1;
  }
 } else
  VAR_7 = 0;

 if (VAR_7 == 0) {
  VAR_3->td_retval[0] = 0;
  VAR_3->td_retval[1] = VAR_4->v1;
 }

 return (VAR_7);
}
