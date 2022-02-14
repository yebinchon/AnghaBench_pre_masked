
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct thread {scalar_t__ td_user_pri; scalar_t__ td_priority; int td_base_user_pri; int td_lend_user_pri; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct thread*,int ) ;
 int FUNC_2 (struct thread*) ;
 int FUNC_3 (struct thread*) ;

void
FUNC_4(struct thread *VAR_0, u_char VAR_1)
{

 if (VAR_0->td_lend_user_pri != VAR_1)
  goto lend;
 if (VAR_0->td_user_pri != FUNC_0(VAR_1, VAR_0->td_base_user_pri))
  goto lend;
 if (VAR_0->td_priority >= VAR_0->td_user_pri)
  goto lend;
 return;

lend:
 FUNC_2(VAR_0);
 FUNC_1(VAR_0, VAR_1);
 FUNC_3(VAR_0);
}
