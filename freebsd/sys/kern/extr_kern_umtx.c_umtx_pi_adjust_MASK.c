
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct umtx_q {struct umtx_pi* uq_pi_blocked; } ;
struct umtx_pi {int dummy; } ;
struct thread {struct umtx_q* td_umtxq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (struct umtx_pi*,struct thread*) ;
 int FUNC_3 (struct umtx_pi*) ;

void
FUNC_4(struct thread *VAR_1, u_char VAR_2)
{
 struct umtx_q *VAR_3;
 struct umtx_pi *VAR_4;

 VAR_3 = VAR_1->td_umtxq;
 FUNC_0(&VAR_0);



 VAR_4 = VAR_3->uq_pi_blocked;
 if (VAR_4 != ((void*)0)) {
  FUNC_2(VAR_4, VAR_1);
  FUNC_3(VAR_4);
 }
 FUNC_1(&VAR_0);
}
