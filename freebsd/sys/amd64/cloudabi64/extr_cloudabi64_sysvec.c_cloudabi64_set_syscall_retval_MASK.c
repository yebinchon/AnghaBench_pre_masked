
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int tf_rflags; int tf_rax; int tf_rcx; int tf_r10; int tf_err; int tf_rip; int tf_rdx; } ;
struct thread {int td_pcb; int * td_retval; struct trapframe* td_frame; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct thread *VAR_2, int VAR_3)
{
 struct trapframe *VAR_4 = VAR_2->td_frame;

 switch (VAR_3) {
 case 0:

  VAR_4->tf_rax = VAR_2->td_retval[0];
  VAR_4->tf_rdx = VAR_2->td_retval[1];
  VAR_4->tf_rflags &= ~VAR_1;
  break;
 case 128:

  VAR_4->tf_rip -= VAR_4->tf_err;
  VAR_4->tf_r10 = VAR_4->tf_rcx;
  FUNC_1(VAR_2->td_pcb, VAR_0);
  break;
 case 129:
  break;
 default:

  VAR_4->tf_rax = FUNC_0(VAR_3);
  VAR_4->tf_rflags |= VAR_1;
  break;
 }
}
