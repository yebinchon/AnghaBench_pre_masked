
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {scalar_t__ t_sessioncnt; int * t_pgrp; struct session* t_session; } ;
struct session {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct tty*) ;

void
FUNC_2(struct tty *VAR_0, struct session *VAR_1)
{

 FUNC_0(VAR_0->t_sessioncnt > 0);


 if (VAR_0->t_session == VAR_1) {
  VAR_0->t_session = ((void*)0);
  FUNC_0(VAR_0->t_pgrp == ((void*)0));
 }
 VAR_0->t_sessioncnt--;
 FUNC_1(VAR_0);
}
