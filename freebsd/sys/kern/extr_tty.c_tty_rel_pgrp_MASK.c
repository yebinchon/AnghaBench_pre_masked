
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {scalar_t__ t_sessioncnt; struct pgrp* t_pgrp; } ;
struct pgrp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct tty*,int ) ;
 int FUNC_2 (struct tty*) ;

void
FUNC_3(struct tty *VAR_1, struct pgrp *VAR_2)
{

 FUNC_0(VAR_1->t_sessioncnt > 0);
 FUNC_1(VAR_1, VAR_0);

 if (VAR_1->t_pgrp == VAR_2)
  VAR_1->t_pgrp = ((void*)0);

 FUNC_2(VAR_1);
}
