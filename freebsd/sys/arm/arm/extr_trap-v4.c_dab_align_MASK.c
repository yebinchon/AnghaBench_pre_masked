
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct trapframe {int tf_pc; int tf_r0; } ;
struct thread {struct trapframe* td_frame; TYPE_1__* td_pcb; } ;
struct ksig {int signb; scalar_t__ code; } ;
struct TYPE_2__ {scalar_t__ pcb_onfault; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct trapframe*) ;
 int FUNC_1 (struct trapframe*,int ,int ,struct thread*,struct ksig*) ;

__attribute__((used)) static int
FUNC_2(struct trapframe *VAR_2, u_int VAR_3, u_int VAR_4, struct thread *VAR_5,
    struct ksig *VAR_6)
{


 if (!FUNC_0(VAR_2)) {
  if (!VAR_5 || !VAR_5->td_pcb->pcb_onfault)
   FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
  VAR_2->tf_r0 = VAR_0;
  VAR_2->tf_pc = (int)VAR_5->td_pcb->pcb_onfault;
  return (0);
 }




 VAR_6->code = 0;
 VAR_6->signb = VAR_1;
 VAR_5->td_frame = VAR_2;

 return (1);
}
