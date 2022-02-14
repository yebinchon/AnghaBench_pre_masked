
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_segment_descriptor {int dummy; } ;
struct thread {struct pcb* td_pcb; } ;
struct pcb {scalar_t__ pcb_gsbase; } ;
struct linux_set_thread_area_args {int desc; } ;
struct l_user_desc {int entry_number; scalar_t__ base_addr; } ;
typedef scalar_t__ register_t ;
typedef int a ;


 int VAR_0 ;


 scalar_t__ FUNC_0 (struct l_user_desc*) ;
 int FUNC_1 (struct l_user_desc*) ;
 int FUNC_2 (struct l_user_desc*) ;
 int VAR_1 ;
 int FUNC_3 (int ,struct l_user_desc*,int) ;
 int FUNC_4 (struct l_user_desc*,int ,int) ;
 int FUNC_5 (struct user_segment_descriptor*,int**,int) ;
 int FUNC_6 (struct pcb*,int ) ;
 int FUNC_7 (struct thread*,scalar_t__) ;

int
FUNC_8(struct thread *VAR_2,
    struct linux_set_thread_area_args *VAR_3)
{
 struct l_user_desc VAR_4;
 struct user_segment_descriptor VAR_5;
 struct pcb *VAR_6;
 int VAR_7[2];
 int VAR_8;

 VAR_8 = FUNC_3(VAR_3->desc, &VAR_4, sizeof(struct l_user_desc));
 if (VAR_8)
  return (VAR_8);
 switch (VAR_4.entry_number) {
 case 128:
 case 129:
 case 6:
 case -1:
  VAR_4.entry_number = 128;
  break;
 default:
  return (VAR_0);
 }







 VAR_8 = FUNC_4(&VAR_4, VAR_3->desc, sizeof(struct l_user_desc));
 if (VAR_8)
  return (VAR_8);

 if (FUNC_0(&VAR_4)) {
  VAR_7[0] = 0;
  VAR_7[1] = 0;
 } else {
  VAR_7[0] = FUNC_1(&VAR_4);
  VAR_7[1] = FUNC_2(&VAR_4);
 }

 FUNC_5(&VAR_5, &VAR_7, sizeof(VAR_7));
 VAR_6 = VAR_2->td_pcb;
 VAR_6->pcb_gsbase = (register_t)VAR_4.base_addr;
 FUNC_6(VAR_6, VAR_1);
 FUNC_7(VAR_2, VAR_4.base_addr);

 return (0);
}
