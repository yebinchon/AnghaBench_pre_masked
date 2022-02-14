
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int tf_elr; int tf_spsr; scalar_t__* tf_x; } ;
struct thread {int td_retval; struct trapframe* td_frame; } ;


 scalar_t__ VAR_0 ;


 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,void*,int) ;

__attribute__((used)) static void
FUNC_2(struct thread *VAR_2, int VAR_3)
{
 struct trapframe *VAR_4 = VAR_2->td_frame;

 switch (VAR_3) {
 case 0:
  if (FUNC_1(VAR_2->td_retval, (void *)VAR_4->tf_x[2],
      sizeof(VAR_2->td_retval)) == 0) {
   VAR_4->tf_x[0] = 0;
   VAR_4->tf_spsr &= ~VAR_1;
  } else {
   VAR_4->tf_x[0] = VAR_0;
   VAR_4->tf_spsr |= VAR_1;
  }
  break;
 case 128:

  VAR_4->tf_elr -= 4;
  break;
 case 129:
  break;
 default:

  VAR_4->tf_x[0] = FUNC_0(VAR_3);
  VAR_4->tf_spsr |= VAR_1;
  break;
 }
}
