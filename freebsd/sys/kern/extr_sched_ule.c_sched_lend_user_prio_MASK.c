
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct thread {scalar_t__ td_user_pri; scalar_t__ td_priority; int td_flags; int td_base_user_pri; int td_lend_user_pri; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct thread*,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct thread*,scalar_t__) ;

void
FUNC_3(struct thread *VAR_2, u_char VAR_3)
{

 FUNC_0(VAR_2, VAR_0);
 VAR_2->td_lend_user_pri = VAR_3;
 VAR_2->td_user_pri = FUNC_1(VAR_3, VAR_2->td_base_user_pri);
 if (VAR_2->td_priority > VAR_2->td_user_pri)
  FUNC_2(VAR_2, VAR_2->td_user_pri);
 else if (VAR_2->td_priority != VAR_2->td_user_pri)
  VAR_2->td_flags |= VAR_1;
}
