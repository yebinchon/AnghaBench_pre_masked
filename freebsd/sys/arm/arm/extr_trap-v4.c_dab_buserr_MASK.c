
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct trapframe {int tf_spsr; scalar_t__ tf_pc; int tf_r0; scalar_t__ tf_usr_lr; } ;
struct thread {struct trapframe* td_frame; struct pcb* td_pcb; } ;
struct TYPE_2__ {scalar_t__ sf_sp; } ;
struct pcb {int * pcb_onfault; TYPE_1__ pcb_regs; } ;
struct ksig {scalar_t__ code; int signb; } ;
typedef scalar_t__ register_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct trapframe*) ;
 int FUNC_1 (struct trapframe*,int,int,struct thread*,struct ksig*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(struct trapframe *VAR_7, u_int VAR_8, u_int VAR_9, struct thread *VAR_10,
    struct ksig *VAR_11)
{
 struct pcb *VAR_12 = VAR_10->td_pcb;
 if (VAR_12->pcb_onfault) {
  VAR_7->tf_r0 = VAR_0;
  VAR_7->tf_pc = (register_t)(intptr_t) VAR_12->pcb_onfault;
  return (0);
 }




 if (!FUNC_0(VAR_7))
  FUNC_1(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);


 VAR_11->signb = VAR_6;
 VAR_11->code = 0;
 VAR_10->td_frame = VAR_7;

 return (1);
}
