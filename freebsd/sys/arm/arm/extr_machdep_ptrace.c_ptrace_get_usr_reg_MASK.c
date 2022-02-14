
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct thread {TYPE_1__* td_frame; } ;
typedef int register_t ;
struct TYPE_2__ {int tf_pc; int tf_usr_lr; int tf_usr_sp; int tf_r0; } ;





 int FUNC_0 (int,char*) ;

__attribute__((used)) static u_int
FUNC_1(void *VAR_0, int VAR_1)
{
 int VAR_2;
 struct thread *VAR_3 = VAR_0;

 FUNC_0(((VAR_1 >= 0) && (VAR_1 <= 129)),
  ("reg is outside range"));

 switch(VAR_1) {
 case 129:
  VAR_2 = VAR_3->td_frame->tf_pc;
  break;
 case 130:
  VAR_2 = VAR_3->td_frame->tf_usr_lr;
  break;
 case 128:
  VAR_2 = VAR_3->td_frame->tf_usr_sp;
  break;
 default:
  VAR_2 = *((register_t*)&VAR_3->td_frame->tf_r0 + VAR_1);
  break;
 }

 return (VAR_2);
}
