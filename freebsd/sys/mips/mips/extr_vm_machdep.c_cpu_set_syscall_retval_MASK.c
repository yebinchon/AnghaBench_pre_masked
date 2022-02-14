
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trapframe {unsigned int v0; unsigned int a0; unsigned int a1; unsigned int v1; int a3; int pc; } ;
struct thread {unsigned int* td_retval; TYPE_1__* td_pcb; int td_proc; struct trapframe* td_frame; } ;
struct TYPE_2__ {int pcb_tpc; } ;




 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;

void
FUNC_1(struct thread *VAR_5, int VAR_6)
{
 struct trapframe *VAR_7 = VAR_5->td_frame;
 unsigned int VAR_8;
 int VAR_9;

 VAR_8 = VAR_7->v0;
 VAR_9 = 0;






 if (VAR_8 == VAR_1)
  VAR_9 = 1;


 if (VAR_8 == VAR_3)
  VAR_8 = VAR_7->a0;
 else if (VAR_8 == VAR_1) {
  if (VAR_9)
   VAR_8 = VAR_4 ? VAR_7->a1 : VAR_7->a0;
  else
   VAR_8 = VAR_7->a0;
 }

 switch (VAR_6) {
 case 0:
  if (VAR_9 && VAR_8 != VAR_2) {






   VAR_7->v0 = VAR_5->td_retval[0];
   if (VAR_4)
    VAR_7->v1 = VAR_5->td_retval[0];
   VAR_7->a3 = 0;
  } else {
   VAR_7->v0 = VAR_5->td_retval[0];
   VAR_7->v1 = VAR_5->td_retval[1];
   VAR_7->a3 = 0;
  }
  break;

 case 128:
  VAR_7->pc = VAR_5->td_pcb->pcb_tpc;
  break;

 case 129:
  break;

 default:
  if (VAR_9 && VAR_8 != VAR_2) {
   VAR_7->v0 = VAR_6;
   if (VAR_4)
    VAR_7->v1 = VAR_6;
   VAR_7->a3 = 1;
  } else {
   VAR_7->v0 = VAR_6;
   VAR_7->a3 = 1;
  }
 }
}
