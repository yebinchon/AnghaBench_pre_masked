
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int cr_agroups; } ;
struct proc {struct ucred* p_ucred; } ;


 int VAR_0 ;
 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*,int ) ;
 int FUNC_2 (struct proc*) ;
 int FUNC_3 (struct ucred*,struct ucred*) ;
 int FUNC_4 (struct ucred*,int) ;

struct ucred *
FUNC_5(struct proc *VAR_1, struct ucred *VAR_2)
{
 struct ucred *VAR_3;
 int VAR_4;

 FUNC_1(VAR_1, VAR_0);

 VAR_3 = VAR_1->p_ucred;
 while (VAR_2->cr_agroups < VAR_3->cr_agroups) {
  VAR_4 = VAR_3->cr_agroups;
  FUNC_2(VAR_1);
  FUNC_4(VAR_2, VAR_4);
  FUNC_0(VAR_1);
  VAR_3 = VAR_1->p_ucred;
 }
 FUNC_3(VAR_2, VAR_3);

 return (VAR_3);
}
