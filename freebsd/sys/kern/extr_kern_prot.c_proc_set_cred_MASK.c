
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct proc {scalar_t__ p_state; struct ucred* p_ucred; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct proc*,int ) ;
 int FUNC_2 (struct proc*) ;
 scalar_t__ VAR_1 ;

struct ucred *
FUNC_3(struct proc *VAR_2, struct ucred *VAR_3)
{
 struct ucred *VAR_4;

 FUNC_0(VAR_2->p_ucred != ((void*)0));
 if (VAR_3 == ((void*)0))
  FUNC_0(VAR_2->p_state == VAR_1);
 else
  FUNC_1(VAR_2, VAR_0);

 VAR_4 = VAR_2->p_ucred;
 VAR_2->p_ucred = VAR_3;
 if (VAR_3 != ((void*)0))
  FUNC_2(VAR_2);
 return (VAR_4);
}
