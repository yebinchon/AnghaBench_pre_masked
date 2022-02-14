
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {struct pgrp* p_pgrp; } ;
struct pgrp {int pg_members; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct proc*,int ) ;
 int FUNC_2 (struct pgrp*) ;
 int FUNC_3 (struct pgrp*) ;
 int FUNC_4 (struct proc*) ;
 int FUNC_5 (struct proc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (struct pgrp*) ;
 int VAR_2 ;
 int FUNC_7 (int *,int ) ;

int
FUNC_8(struct proc *VAR_3)
{
 struct pgrp *VAR_4;

 FUNC_7(&VAR_2, VAR_0);
 VAR_4 = VAR_3->p_pgrp;
 FUNC_2(VAR_4);
 FUNC_4(VAR_3);
 FUNC_1(VAR_3, VAR_1);
 VAR_3->p_pgrp = ((void*)0);
 FUNC_5(VAR_3);
 FUNC_3(VAR_4);
 if (FUNC_0(&VAR_4->pg_members))
  FUNC_6(VAR_4);
 return (0);
}
