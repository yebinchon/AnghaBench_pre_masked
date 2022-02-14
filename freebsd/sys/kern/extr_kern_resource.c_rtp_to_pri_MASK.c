
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_char ;
struct thread {scalar_t__ td_pri_class; scalar_t__ td_user_pri; } ;
struct rtprio {scalar_t__ prio; int type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;

 scalar_t__ VAR_5 ;


 scalar_t__ FUNC_1 (struct thread*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct thread*,int ) ;
 int FUNC_5 (struct thread*,scalar_t__) ;
 int FUNC_6 (struct thread*,scalar_t__) ;
 int FUNC_7 (struct thread*) ;
 int FUNC_8 (struct thread*) ;
 int FUNC_9 (struct thread*,scalar_t__) ;

int
FUNC_10(struct rtprio *VAR_6, struct thread *VAR_7)
{
 u_char VAR_8, VAR_9, VAR_10;

 switch (FUNC_0(VAR_6->type)) {
 case 128:
  if (VAR_6->prio > VAR_5)
   return (VAR_0);
  VAR_8 = VAR_3 + VAR_6->prio;
  break;
 case 129:
  if (VAR_6->prio > (VAR_1 - VAR_4))
   return (VAR_0);
  VAR_8 = VAR_4 + VAR_6->prio;
  break;
 case 130:
  if (VAR_6->prio > VAR_5)
   return (VAR_0);
  VAR_8 = VAR_2 + VAR_6->prio;
  break;
 default:
  return (VAR_0);
 }

 FUNC_7(VAR_7);
 VAR_9 = VAR_7->td_pri_class;
 FUNC_4(VAR_7, VAR_6->type);
 VAR_10 = VAR_7->td_user_pri;
 FUNC_6(VAR_7, VAR_8);
 if (VAR_7->td_user_pri != VAR_10 && (VAR_9 != 129 ||
     VAR_7->td_pri_class != 129))
  FUNC_5(VAR_7, VAR_7->td_user_pri);
 if (FUNC_1(VAR_7) && VAR_10 != VAR_8) {
  FUNC_2();
  FUNC_8(VAR_7);
  FUNC_9(VAR_7, VAR_10);
  FUNC_3();
 } else
  FUNC_8(VAR_7);
 return (0);
}
