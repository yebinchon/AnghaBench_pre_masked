
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* td_pcb; } ;
struct segment_descriptor {int dummy; } ;
struct l_user_desc {int entry_number; } ;
typedef int a ;
struct TYPE_2__ {int pcb_gs; struct segment_descriptor pcb_gsd; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct l_user_desc*) ;
 int FUNC_2 (struct l_user_desc*) ;
 int VAR_1 ;
 int FUNC_3 (void*,struct l_user_desc*,int) ;
 int FUNC_4 (struct l_user_desc*,void*,int) ;
 int FUNC_5 (struct thread*,char*) ;
 int FUNC_6 (struct segment_descriptor*,int**,int) ;

int
FUNC_7(struct thread *VAR_2, void *VAR_3)
{
 struct segment_descriptor VAR_4;
 struct l_user_desc VAR_5;
 int VAR_6, VAR_7;
 int VAR_8[2];

 VAR_7 = FUNC_3(VAR_3, &VAR_5, sizeof(struct l_user_desc));
 if (VAR_7) {
  FUNC_5(VAR_2, "set_cloned_tls copyin failed!");
 } else {
  VAR_6 = VAR_5.entry_number;





  if (VAR_6 != 6 && VAR_6 != 3) {
   FUNC_5(VAR_2, "set_cloned_tls resetting idx!");
   VAR_6 = 3;
  }


  if (VAR_6 == 6) {

   VAR_5.entry_number = 3;
   VAR_7 = FUNC_4(&VAR_5, VAR_3, sizeof(struct l_user_desc));
   if (VAR_7)
    FUNC_5(VAR_2, "set_cloned_tls copyout failed!");
  }

  VAR_8[0] = FUNC_1(&VAR_5);
  VAR_8[1] = FUNC_2(&VAR_5);

  FUNC_6(&VAR_4, &VAR_8, sizeof(VAR_8));

  VAR_2->td_pcb->pcb_gsd = VAR_4;
  VAR_2->td_pcb->pcb_gs = FUNC_0(VAR_0, VAR_1);
 }

 return (VAR_7);
}
