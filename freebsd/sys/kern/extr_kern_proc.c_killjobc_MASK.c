
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct tty {struct session* t_session; } ;
struct session {int * s_leader; int * s_ttydp; struct vnode* s_ttyvp; struct tty* s_ttyp; } ;
struct proc {int p_flag; scalar_t__ p_pgrp; struct session* p_session; int p_children; TYPE_1__* p_pptr; } ;
struct TYPE_2__ {scalar_t__ p_pgrp; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct proc*) ;
 int FUNC_3 (struct proc*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (struct proc*) ;
 int FUNC_5 (struct session*) ;
 int FUNC_6 (struct session*) ;
 int VAR_3 ;
 int FUNC_7 (struct vnode*,int ) ;
 int FUNC_8 (struct vnode*,int ) ;
 struct proc* VAR_4 ;
 int FUNC_9 (struct proc*,scalar_t__,int ) ;
 int VAR_5 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct tty*) ;
 int FUNC_13 (struct tty*,int ) ;
 int FUNC_14 (struct tty*) ;
 scalar_t__ FUNC_15 (struct vnode*,int ) ;
 int FUNC_16 (struct vnode*) ;

void
FUNC_17(void)
{
 struct session *VAR_6;
 struct tty *VAR_7;
 struct proc *VAR_8;
 struct vnode *VAR_9;

 VAR_8 = VAR_4;
 FUNC_1(VAR_8->p_flag & VAR_1);




 FUNC_2(VAR_8);
 if (!FUNC_4(VAR_8) &&
     (VAR_8->p_pgrp == VAR_8->p_pptr->p_pgrp) &&
     FUNC_0(&VAR_8->p_children)) {
  FUNC_3(VAR_8);
  return;
 }
 FUNC_3(VAR_8);

 FUNC_10(&VAR_5);
 if (FUNC_4(VAR_8)) {
  VAR_6 = VAR_8->p_session;






  FUNC_5(VAR_6);
  VAR_9 = VAR_6->s_ttyvp;
  VAR_7 = VAR_6->s_ttyp;
  VAR_6->s_ttyvp = ((void*)0);
  VAR_6->s_ttydp = ((void*)0);
  VAR_6->s_leader = ((void*)0);
  FUNC_6(VAR_6);
  if (VAR_7 != ((void*)0)) {
   FUNC_12(VAR_7);
   if (VAR_7->t_session == VAR_6)
    FUNC_13(VAR_7, VAR_3);
   FUNC_14(VAR_7);
  }

  if (VAR_9 != ((void*)0)) {
   FUNC_11(&VAR_5);
   if (FUNC_15(VAR_9, VAR_0) == 0) {
    FUNC_7(VAR_9, VAR_2);
    FUNC_8(VAR_9, 0);
   }
   FUNC_16(VAR_9);
   FUNC_10(&VAR_5);
  }
 }
 FUNC_9(VAR_8, VAR_8->p_pgrp, 0);
 FUNC_11(&VAR_5);
}
