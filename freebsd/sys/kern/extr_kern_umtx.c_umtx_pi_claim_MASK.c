
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct umtx_q {struct thread* uq_thread; } ;
struct umtx_pi {int pi_blocked; struct thread* pi_owner; } ;
struct thread {int dummy; } ;


 int VAR_0 ;
 struct umtx_q* FUNC_0 (int *) ;
 int FUNC_1 (struct thread*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct thread*,int) ;
 int FUNC_5 (struct thread*) ;
 int FUNC_6 (struct thread*) ;
 int VAR_1 ;
 int FUNC_7 (struct umtx_pi*,struct thread*) ;

__attribute__((used)) static int
FUNC_8(struct umtx_pi *VAR_2, struct thread *VAR_3)
{
 struct umtx_q *VAR_4;
 int VAR_5;

 FUNC_2(&VAR_1);
 if (VAR_2->pi_owner == VAR_3) {
  FUNC_3(&VAR_1);
  return (0);
 }

 if (VAR_2->pi_owner != ((void*)0)) {



  FUNC_3(&VAR_1);
  return (VAR_0);
 }
 FUNC_7(VAR_2, VAR_3);
 VAR_4 = FUNC_0(&VAR_2->pi_blocked);
 if (VAR_4 != ((void*)0)) {
  VAR_5 = FUNC_1(VAR_4->uq_thread);
  FUNC_5(VAR_3);
  if (VAR_5 < FUNC_1(VAR_3))
   FUNC_4(VAR_3, VAR_5);
  FUNC_6(VAR_3);
 }
 FUNC_3(&VAR_1);
 return (0);
}
