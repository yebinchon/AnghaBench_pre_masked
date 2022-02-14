
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int td_pcb; TYPE_1__* td_frame; } ;
struct TYPE_2__ {unsigned long tf_rip; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

int
FUNC_1(struct thread *VAR_1, unsigned long VAR_2)
{

 VAR_1->td_frame->tf_rip = VAR_2;
 FUNC_0(VAR_1->td_pcb, VAR_0);
 return (0);
}
