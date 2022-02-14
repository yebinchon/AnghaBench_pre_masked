
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct trapframe {int tf_pc; int tf_r0; } ;
struct thread {scalar_t__ td_intr_nesting_level; TYPE_1__* td_pcb; } ;
struct ksig {int addr; int sig; int code; } ;
struct TYPE_2__ {int * pcb_onfault; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct trapframe*) ;
 int FUNC_1 (struct trapframe*,int ,int ,int ,int ,struct thread*,struct ksig*) ;

__attribute__((used)) static int
FUNC_2(struct trapframe *VAR_3, u_int VAR_4, u_int VAR_5, u_int VAR_6,
    u_int VAR_7, struct thread *VAR_8, struct ksig *VAR_9)
{
 bool VAR_10;

 VAR_10 = FUNC_0(VAR_3);
 if (!VAR_10) {
  if (VAR_8->td_intr_nesting_level == 0 && VAR_8 != ((void*)0) &&
      VAR_8->td_pcb->pcb_onfault != ((void*)0)) {
   VAR_3->tf_r0 = VAR_1;
   VAR_3->tf_pc = (int)VAR_8->td_pcb->pcb_onfault;
   return (0);
  }
  FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
 }

 VAR_9->code = VAR_0;
 VAR_9->sig = VAR_2;
 VAR_9->addr = VAR_6;
 return (1);
}
