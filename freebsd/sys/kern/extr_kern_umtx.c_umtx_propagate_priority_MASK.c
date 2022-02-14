
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct umtx_q {struct umtx_pi* uq_pi_blocked; } ;
struct umtx_pi {struct thread* pi_owner; } ;
struct thread {int td_lend_user_pri; struct umtx_q* td_umtxq; TYPE_1__* td_proc; } ;
struct TYPE_2__ {scalar_t__ p_magic; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct thread*) ;
 struct thread* VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct thread*,int) ;
 int FUNC_4 (struct thread*) ;
 int FUNC_5 (struct thread*) ;
 int VAR_3 ;
 int FUNC_6 (struct umtx_pi*,struct thread*) ;
 scalar_t__ FUNC_7 (struct umtx_pi*) ;

__attribute__((used)) static void
FUNC_8(struct thread *VAR_4)
{
 struct umtx_q *VAR_5;
 struct umtx_pi *VAR_6;
 int VAR_7;

 FUNC_2(&VAR_3, VAR_0);
 VAR_7 = FUNC_1(VAR_4);
 VAR_5 = VAR_4->td_umtxq;
 VAR_6 = VAR_5->uq_pi_blocked;
 if (VAR_6 == ((void*)0))
  return;
 if (FUNC_7(VAR_6))
  return;

 for (;;) {
  VAR_4 = VAR_6->pi_owner;
  if (VAR_4 == ((void*)0) || VAR_4 == VAR_2)
   return;

  FUNC_0(VAR_4->td_proc != ((void*)0));
  FUNC_0(VAR_4->td_proc->p_magic == VAR_1);

  FUNC_4(VAR_4);
  if (VAR_4->td_lend_user_pri > VAR_7)
   FUNC_3(VAR_4, VAR_7);
  else {
   FUNC_5(VAR_4);
   break;
  }
  FUNC_5(VAR_4);




  VAR_5 = VAR_4->td_umtxq;
  VAR_6 = VAR_5->uq_pi_blocked;
  if (VAR_6 == ((void*)0))
   break;

  FUNC_6(VAR_6, VAR_4);
 }
}
