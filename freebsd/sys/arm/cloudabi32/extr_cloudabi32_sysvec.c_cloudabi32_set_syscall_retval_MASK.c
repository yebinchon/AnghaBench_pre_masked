
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int tf_pc; int tf_spsr; int tf_r0; int tf_r1; } ;
struct thread {int * td_retval; struct trapframe* td_frame; } ;




 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(struct thread *VAR_1, int VAR_2)
{
 struct trapframe *VAR_3 = VAR_1->td_frame;

 switch (VAR_2) {
 case 0:

  VAR_3->tf_r0 = VAR_1->td_retval[0];
  VAR_3->tf_r1 = VAR_1->td_retval[1];
  VAR_3->tf_spsr &= ~VAR_0;
  break;
 case 128:

  VAR_3->tf_pc -= 4;
  break;
 case 129:
  break;
 default:

  VAR_3->tf_r0 = FUNC_0(VAR_2);
  VAR_3->tf_spsr |= VAR_0;
  break;
 }
}
