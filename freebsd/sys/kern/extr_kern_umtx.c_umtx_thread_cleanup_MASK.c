
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct umtx_q {scalar_t__ uq_inherited_pri; int uq_pi_contested; } ;
struct umtx_pi {int * pi_owner; } ;
struct thread {uintptr_t td_rb_inact; scalar_t__ td_rb_list; scalar_t__ td_rbp_list; struct umtx_q* td_umtxq; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 struct umtx_pi* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct umtx_pi*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int FUNC_5 (struct thread*,scalar_t__) ;
 int FUNC_6 (struct thread*,scalar_t__,uintptr_t*,char*) ;
 int FUNC_7 (struct thread*,uintptr_t,int *,int) ;
 int VAR_2 ;
 int FUNC_8 (struct thread*,uintptr_t,uintptr_t*) ;

__attribute__((used)) static void
FUNC_9(struct thread *VAR_3)
{
 struct umtx_q *VAR_4;
 struct umtx_pi *VAR_5;
 uintptr_t VAR_6;




 VAR_4 = VAR_3->td_umtxq;
 if (VAR_4 != ((void*)0)) {
  if (VAR_4->uq_inherited_pri != VAR_0 ||
      !FUNC_0(&VAR_4->uq_pi_contested)) {
   FUNC_3(&VAR_2);
   VAR_4->uq_inherited_pri = VAR_0;
   while ((VAR_5 = FUNC_1(&VAR_4->uq_pi_contested)) != ((void*)0)) {
    VAR_5->pi_owner = ((void*)0);
    FUNC_2(&VAR_4->uq_pi_contested, VAR_5, VAR_1);
   }
   FUNC_4(&VAR_2);
  }
  FUNC_5(VAR_3, VAR_0);
 }

 if (VAR_3->td_rb_inact == 0 && VAR_3->td_rb_list == 0 && VAR_3->td_rbp_list == 0)
  return;






 VAR_6 = VAR_3->td_rb_inact;
 if (VAR_6 != 0)
  (void)FUNC_8(VAR_3, VAR_6, &VAR_6);
 FUNC_6(VAR_3, VAR_3->td_rb_list, &VAR_6, "");
 FUNC_6(VAR_3, VAR_3->td_rbp_list, &VAR_6, "priv ");
 if (VAR_6 != 0)
  (void)FUNC_7(VAR_3, VAR_6, ((void*)0), 1);
}
