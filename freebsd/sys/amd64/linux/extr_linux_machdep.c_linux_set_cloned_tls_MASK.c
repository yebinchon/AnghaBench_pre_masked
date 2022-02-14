
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct thread {TYPE_1__* td_frame; struct pcb* td_pcb; } ;
struct pcb {scalar_t__ pcb_fsbase; } ;
typedef scalar_t__ register_t ;
struct TYPE_2__ {int tf_fs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

int
FUNC_0(struct thread *VAR_3, void *VAR_4)
{
 struct pcb *VAR_5;

 if ((uint64_t)VAR_4 >= VAR_1)
  return (VAR_0);

 VAR_5 = VAR_3->td_pcb;
 VAR_5->pcb_fsbase = (register_t)VAR_4;
 VAR_3->td_frame->tf_fs = VAR_2;

 return (0);
}
