
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct user_segment_descriptor {int dummy; } ;
struct thread {TYPE_1__* td_frame; struct pcb* td_pcb; } ;
struct pcb {scalar_t__ pcb_gsbase; } ;
struct l_user_desc {scalar_t__ base_addr; int entry_number; } ;
typedef scalar_t__ register_t ;
typedef int a ;
struct TYPE_2__ {int tf_gs; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct l_user_desc*) ;
 int FUNC_2 (struct l_user_desc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (void*,struct l_user_desc*,int) ;
 int FUNC_4 (struct l_user_desc*,void*,int) ;
 int FUNC_5 (struct thread*,char*) ;
 int FUNC_6 (struct user_segment_descriptor*,int**,int) ;
 int FUNC_7 (struct pcb*,int ) ;

int
FUNC_8(struct thread *VAR_3, void *VAR_4)
{
 struct user_segment_descriptor VAR_5;
 struct l_user_desc VAR_6;
 struct pcb *VAR_7;
 int VAR_8;
 int VAR_9[2];

 VAR_8 = FUNC_3(VAR_4, &VAR_6, sizeof(struct l_user_desc));
 if (VAR_8) {
  FUNC_5(VAR_3, "set_cloned_tls copyin info failed!");
 } else {


  VAR_6.entry_number = VAR_0;
  VAR_8 = FUNC_4(&VAR_6, VAR_4, sizeof(struct l_user_desc));
  if (VAR_8)
   FUNC_5(VAR_3, "set_cloned_tls copyout info failed!");

  VAR_9[0] = FUNC_1(&VAR_6);
  VAR_9[1] = FUNC_2(&VAR_6);

  FUNC_6(&VAR_5, &VAR_9, sizeof(VAR_9));
  VAR_7 = VAR_3->td_pcb;
  VAR_7->pcb_gsbase = (register_t)VAR_6.base_addr;
  VAR_3->td_frame->tf_gs = FUNC_0(VAR_0, VAR_2);
  FUNC_7(VAR_7, VAR_1);
 }

 return (VAR_8);
}
