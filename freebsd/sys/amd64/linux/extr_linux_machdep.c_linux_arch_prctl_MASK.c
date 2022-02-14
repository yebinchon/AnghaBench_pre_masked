
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* td_frame; struct pcb* td_pcb; } ;
struct pcb {int pcb_gsbase; int pcb_fsbase; } ;
struct linux_arch_prctl_args {int code; int addr; } ;
struct TYPE_2__ {int tf_fs; int tf_gs; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (int ,char*,int,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct pcb*,int ) ;

int
FUNC_4(struct thread *VAR_7, struct linux_arch_prctl_args *VAR_8)
{
 struct pcb *VAR_9;
 int VAR_10;

 VAR_9 = VAR_7->td_pcb;
 FUNC_0(VAR_6, "0x%x, %p", VAR_8->code, VAR_8->addr);

 switch (VAR_8->code) {
 case 128:
  if (VAR_8->addr < VAR_3) {
   FUNC_3(VAR_9, VAR_2);
   VAR_9->pcb_gsbase = VAR_8->addr;
   VAR_7->td_frame->tf_gs = VAR_5;
   VAR_10 = 0;
  } else
   VAR_10 = VAR_1;
  break;
 case 129:
  if (VAR_8->addr < VAR_3) {
   FUNC_3(VAR_9, VAR_2);
   VAR_9->pcb_fsbase = VAR_8->addr;
   VAR_7->td_frame->tf_fs = VAR_4;
   VAR_10 = 0;
  } else
   VAR_10 = VAR_1;
  break;
 case 131:
  VAR_10 = FUNC_2(&VAR_9->pcb_fsbase, FUNC_1(VAR_8->addr),
      sizeof(VAR_8->addr));
  break;
 case 130:
  VAR_10 = FUNC_2(&VAR_9->pcb_gsbase, FUNC_1(VAR_8->addr),
      sizeof(VAR_8->addr));
  break;
 default:
  VAR_10 = VAR_0;
 }
 return (VAR_10);
}
