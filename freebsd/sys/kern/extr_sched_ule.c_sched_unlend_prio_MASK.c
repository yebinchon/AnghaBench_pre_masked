
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_char ;
struct thread {scalar_t__ td_base_pri; scalar_t__ td_user_pri; int td_flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct thread*,scalar_t__) ;
 int FUNC_1 (struct thread*,scalar_t__) ;

void
FUNC_2(struct thread *VAR_3, u_char VAR_4)
{
 u_char VAR_5;

 if (VAR_3->td_base_pri >= VAR_1 &&
     VAR_3->td_base_pri <= VAR_0)
  VAR_5 = VAR_3->td_user_pri;
 else
  VAR_5 = VAR_3->td_base_pri;
 if (VAR_4 >= VAR_5) {
  VAR_3->td_flags &= ~VAR_2;
  FUNC_1(VAR_3, VAR_5);
 } else
  FUNC_0(VAR_3, VAR_4);
}
