
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {struct pgrp* p_pgrp; int p_session; } ;
struct pgrp {int pg_members; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,struct proc*,int ) ;
 int FUNC_2 (struct proc*,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct pgrp*) ;
 int FUNC_4 (struct pgrp*,int ) ;
 int FUNC_5 (struct pgrp*) ;
 int FUNC_6 (struct proc*) ;
 int FUNC_7 (struct proc*,int ) ;
 int FUNC_8 (struct proc*) ;
 int FUNC_9 (int ,int ) ;
 int VAR_1 ;
 int FUNC_10 (struct proc*,struct pgrp*,int) ;
 int VAR_2 ;
 int FUNC_11 (struct pgrp*) ;
 int VAR_3 ;
 int FUNC_12 (int *,int ) ;

__attribute__((used)) static void
FUNC_13(struct proc *VAR_4, struct pgrp *VAR_5)
{
 struct pgrp *VAR_6;

 FUNC_12(&VAR_3, VAR_1);
 FUNC_7(VAR_4, VAR_0);
 FUNC_4(VAR_5, VAR_0);
 FUNC_4(VAR_4->p_pgrp, VAR_0);
 FUNC_9(VAR_4->p_session, VAR_0);

 VAR_6 = VAR_4->p_pgrp;






 FUNC_10(VAR_4, VAR_5, 1);
 FUNC_10(VAR_4, VAR_4->p_pgrp, 0);

 FUNC_3(VAR_5);
 FUNC_3(VAR_6);
 FUNC_6(VAR_4);
 FUNC_2(VAR_4, VAR_2);
 VAR_4->p_pgrp = VAR_5;
 FUNC_8(VAR_4);
 FUNC_1(&VAR_5->pg_members, VAR_4, VAR_2);
 FUNC_5(VAR_6);
 FUNC_5(VAR_5);
 if (FUNC_0(&VAR_6->pg_members))
  FUNC_11(VAR_6);
}
