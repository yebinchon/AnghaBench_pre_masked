
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct umtx_q {int uq_pi_contested; } ;
struct umtx_pi {struct thread* pi_owner; } ;
struct thread {struct umtx_q* td_umtxq; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,struct umtx_pi*,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(struct umtx_pi *VAR_3, struct thread *VAR_4)
{
 struct umtx_q *VAR_5;

 VAR_5 = VAR_4->td_umtxq;
 FUNC_2(&VAR_2, VAR_0);
 FUNC_0(VAR_3->pi_owner == ((void*)0));
 VAR_3->pi_owner = VAR_4;
 FUNC_1(&VAR_5->uq_pi_contested, VAR_3, VAR_1);
}
