
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct umtx_q {scalar_t__ uq_flags; int uq_pi_contested; int * uq_pi_blocked; struct thread* uq_thread; int uq_inherited_pri; } ;
struct thread {struct umtx_q* td_umtxq; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct thread *VAR_1)
{
 struct umtx_q *VAR_2;

 VAR_2 = VAR_1->td_umtxq;
 VAR_2->uq_inherited_pri = VAR_0;

 FUNC_0(VAR_2->uq_flags == 0, ("uq_flags != 0"));
 FUNC_0(VAR_2->uq_thread == VAR_1, ("uq_thread != td"));
 FUNC_0(VAR_2->uq_pi_blocked == ((void*)0), ("uq_pi_blocked != NULL"));
 FUNC_0(FUNC_1(&VAR_2->uq_pi_contested), ("uq_pi_contested is not empty"));
}
