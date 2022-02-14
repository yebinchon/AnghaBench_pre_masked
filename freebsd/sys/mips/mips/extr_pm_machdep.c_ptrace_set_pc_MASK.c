
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* td_frame; } ;
typedef scalar_t__ register_t ;
struct TYPE_2__ {scalar_t__ pc; } ;



int
FUNC_0(struct thread *VAR_0, unsigned long VAR_1)
{
 VAR_0->td_frame->pc = (register_t) VAR_1;
 return 0;
}
