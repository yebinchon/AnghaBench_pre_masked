
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* td_frame; } ;
typedef scalar_t__ register_t ;
struct TYPE_2__ {scalar_t__ tf_eax; scalar_t__ tf_esp; } ;



int
FUNC_0(struct thread *VAR_0, register_t VAR_1)
{

 if (VAR_1)
  VAR_0->td_frame->tf_esp = VAR_1;





 VAR_0->td_frame->tf_eax = 0;
 return (0);
}
