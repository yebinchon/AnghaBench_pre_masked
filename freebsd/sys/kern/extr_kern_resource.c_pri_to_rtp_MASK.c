
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_pri_class; scalar_t__ td_base_user_pri; } ;
struct rtprio {int type; scalar_t__ prio; } ;


 int FUNC_0 (int ) ;

 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;


 int FUNC_1 (struct thread*) ;
 int FUNC_2 (struct thread*) ;

void
FUNC_3(struct thread *VAR_3, struct rtprio *VAR_4)
{

 FUNC_1(VAR_3);
 switch (FUNC_0(VAR_3->td_pri_class)) {
 case 129:
  VAR_4->prio = VAR_3->td_base_user_pri - VAR_1;
  break;
 case 128:
  VAR_4->prio = VAR_3->td_base_user_pri - VAR_2;
  break;
 case 130:
  VAR_4->prio = VAR_3->td_base_user_pri - VAR_0;
  break;
 default:
  break;
 }
 VAR_4->type = VAR_3->td_pri_class;
 FUNC_2(VAR_3);
}
