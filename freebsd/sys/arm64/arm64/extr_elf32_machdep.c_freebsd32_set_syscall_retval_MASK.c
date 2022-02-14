
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int* tf_x; int tf_spsr; int tf_elr; } ;
struct thread {int* td_retval; struct trapframe* td_frame; } ;




 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct thread *VAR_2, int VAR_3)
{
 struct trapframe *VAR_4;

 VAR_4 = VAR_2->td_frame;
 switch (VAR_3) {
 case 0:
  VAR_4->tf_x[0] = VAR_2->td_retval[0];
  VAR_4->tf_x[1] = VAR_2->td_retval[1];
  VAR_4->tf_spsr &= ~VAR_0;
  break;
 case 128:



  if ((VAR_4->tf_spsr & VAR_1) != 0)
   VAR_4->tf_elr -= 2;
  else
   VAR_4->tf_elr -= 4;
  break;
 case 129:

  break;
 default:
  VAR_4->tf_x[0] = VAR_3;
  VAR_4->tf_spsr |= VAR_0;
  break;
 }
}
