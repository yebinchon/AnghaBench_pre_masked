
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* td_ucred; } ;
struct prison {scalar_t__ pr_uref; int pr_mtx; } ;
struct jail_attach_args {int jid; } ;
struct TYPE_2__ {int cr_prison; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct thread*,struct prison*) ;
 int FUNC_1 (int *) ;
 struct prison* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct thread*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int
FUNC_7(struct thread *VAR_3, struct jail_attach_args *VAR_4)
{
 struct prison *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_3(VAR_3, VAR_1);
 if (VAR_6)
  return (VAR_6);







 FUNC_6(&VAR_2);
 FUNC_4(&VAR_2);
 VAR_5 = FUNC_2(VAR_3->td_ucred->cr_prison, VAR_4->jid);
 if (VAR_5 == ((void*)0)) {
  FUNC_5(&VAR_2);
  return (VAR_0);
 }





 if (VAR_5->pr_uref == 0) {
  FUNC_1(&VAR_5->pr_mtx);
  FUNC_5(&VAR_2);
  return (VAR_0);
 }

 return (FUNC_0(VAR_3, VAR_5));
}
