
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct winsize {int dummy; } ;
struct termios {int c_iflag; int c_lflag; int c_cflag; int * c_cc; int c_oflag; int c_ospeed; int c_ispeed; } ;
struct tty {int t_drainwait; int t_flags; struct winsize t_winsize; int t_bgwait; struct pgrp* t_pgrp; int t_sessioncnt; TYPE_2__* t_session; struct termios t_termios; int t_inq; int t_sigio; int t_outq; } ;
struct thread {struct proc* td_proc; } ;
struct proc {TYPE_2__* p_session; int p_flag; struct pgrp* p_pgrp; } ;
struct pgrp {int pg_id; TYPE_2__* pg_session; } ;
struct TYPE_4__ {int s_sid; struct tty* s_ttyp; TYPE_1__* s_ttyvp; } ;
struct TYPE_3__ {int v_type; } ;


 int VAR_0 ;
 int FUNC_0 (char) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;






 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_12 ;
 int FUNC_2 (struct pgrp*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (struct proc*) ;
 int FUNC_4 (struct proc*) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_5 (struct proc*) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;


 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 size_t VAR_34 ;
 size_t VAR_35 ;
 struct tty* VAR_36 ;
 int FUNC_6 () ;
 int FUNC_7 (struct tty*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int,int *) ;
 int FUNC_11 (int **,int *,int) ;
 struct pgrp* FUNC_12 (int) ;
 int FUNC_13 (struct thread*,int ) ;
 int VAR_37 ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct tty*,int ) ;
 int FUNC_19 (struct tty*,int) ;
 int FUNC_20 (struct tty*) ;
 int FUNC_21 (struct tty*,int,void*,int,struct thread*) ;
 int FUNC_22 (struct tty*,struct proc*) ;
 int FUNC_23 (struct tty*) ;
 int FUNC_24 (struct tty*,void*) ;
 int FUNC_25 (struct tty*) ;
 int FUNC_26 (struct tty*,int) ;
 int FUNC_27 (struct tty*) ;
 int FUNC_28 (struct tty*,int,int) ;
 int FUNC_29 (struct tty*) ;
 int FUNC_30 (struct tty*,struct termios*) ;
 int FUNC_31 (struct tty*,int ) ;
 int FUNC_32 (struct tty*) ;
 int FUNC_33 (struct tty*,char,int ) ;
 int FUNC_34 (struct tty*) ;
 int FUNC_35 (int *) ;
 int FUNC_36 (int *) ;
 int FUNC_37 (int *) ;

__attribute__((used)) static int
FUNC_38(struct tty *VAR_38, u_long VAR_39, void *VAR_40, int VAR_41,
    struct thread *VAR_42)
{
 int VAR_43;

 switch (VAR_39) {





 case 137:
  FUNC_28(VAR_38, VAR_17, 0);
  return (0);
 case 156:
  FUNC_28(VAR_38, 0, VAR_17);
  return (0);
 case 142: {
  int VAR_44 = *(int *)VAR_40;
  FUNC_28(VAR_38,
      (VAR_44 & (VAR_21 | VAR_23)) >> 1,
      ((~VAR_44) & (VAR_21 | VAR_23)) >> 1);
  return (0);
 }
 case 144: {
  int VAR_45 = *(int *)VAR_40;
  FUNC_28(VAR_38, (VAR_45 & (VAR_21 | VAR_23)) >> 1, 0);
  return (0);
 }
 case 145: {
  int VAR_46 = *(int *)VAR_40;
  FUNC_28(VAR_38, 0, (VAR_46 & (VAR_21 | VAR_23)) >> 1);
  return (0);
 }
 case 143:
  *(int *)VAR_40 = VAR_22 + (FUNC_28(VAR_38, 0, 0) << 1);
  return (0);

 case 162:
  if (*(int *)VAR_40)
   VAR_38->t_flags |= VAR_18;
  else
   VAR_38->t_flags &= ~VAR_18;
  return (0);
 case 160:

  return (0);
 case 159:
  *(int *)VAR_40 = FUNC_35(&VAR_38->t_inq);
  return (0);
 case 158:
 case 140:
  *(int *)VAR_40 = FUNC_37(&VAR_38->t_outq);
  return (0);
 case 157:
  if (VAR_38->t_session != ((void*)0) && !FUNC_22(VAR_38, VAR_42->td_proc))

   return (VAR_4);


  FUNC_25(VAR_38);
  VAR_43 = FUNC_10(*(int *)VAR_40, &VAR_38->t_sigio);
  FUNC_23(VAR_38);
  return (VAR_43);
 case 161:
  if (VAR_38->t_session != ((void*)0) && !FUNC_22(VAR_38, VAR_42->td_proc))

   return (VAR_4);


  *(int *)VAR_40 = FUNC_9(&VAR_38->t_sigio);
  return (0);
 case 150:

  *(struct termios*)VAR_40 = VAR_38->t_termios;
  return (0);
 case 136:
 case 134:
 case 135: {
  struct termios *VAR_47 = VAR_40;






  if (VAR_47->c_ispeed == 0)
   VAR_47->c_ispeed = VAR_47->c_ospeed;


  VAR_47->c_iflag &= VAR_30;
  VAR_47->c_oflag &= VAR_32;
  VAR_47->c_lflag &= VAR_31;
  VAR_47->c_cflag &= VAR_29;


  if (VAR_39 == 134 || VAR_39 == 135) {
   VAR_43 = FUNC_18(VAR_38, 0);
   if (VAR_43)
    return (VAR_43);
   if (VAR_39 == 135)
    FUNC_19(VAR_38, VAR_6);
  }




  if ((VAR_47->c_cflag & VAR_0) == 0 &&
      (VAR_38->t_termios.c_cflag != VAR_47->c_cflag ||
      ((VAR_38->t_termios.c_iflag ^ VAR_47->c_iflag) &
      (VAR_11|VAR_10|VAR_9)) ||
      VAR_38->t_termios.c_ispeed != VAR_47->c_ispeed ||
      VAR_38->t_termios.c_ospeed != VAR_47->c_ospeed)) {
   VAR_43 = FUNC_30(VAR_38, VAR_47);
   if (VAR_43)
    return (VAR_43);



   VAR_38->t_termios.c_cflag = VAR_47->c_cflag & ~VAR_0;
   VAR_38->t_termios.c_ispeed = VAR_47->c_ispeed;
   VAR_38->t_termios.c_ospeed = VAR_47->c_ospeed;


   VAR_43 = FUNC_27(VAR_38);
   if (VAR_43)
    return (VAR_43);
  }


  VAR_38->t_termios.c_iflag = VAR_47->c_iflag;
  VAR_38->t_termios.c_oflag = VAR_47->c_oflag;
  VAR_38->t_termios.c_lflag = VAR_47->c_lflag;
  FUNC_11(&VAR_38->t_termios.c_cc, VAR_47->c_cc, sizeof VAR_47->c_cc);

  FUNC_32(VAR_38);

  if ((VAR_47->c_lflag & VAR_8) == 0) {





   FUNC_36(&VAR_38->t_inq);
   FUNC_26(VAR_38, VAR_6);
  }





  if (VAR_38->t_termios.c_iflag & VAR_11 &&
      VAR_38->t_termios.c_cc[VAR_35] == FUNC_0('S') &&
      VAR_38->t_termios.c_cc[VAR_34] == FUNC_0('Q'))
   FUNC_31(VAR_38, VAR_24);
  else
   FUNC_31(VAR_38, VAR_25);
  return (0);
 }
 case 149:

  *(int *)VAR_40 = VAR_28;
  return (0);
 case 148:
  if (!FUNC_22(VAR_38, VAR_42->td_proc))
   return (VAR_4);

  if (VAR_38->t_pgrp != ((void*)0))
   *(int *)VAR_40 = VAR_38->t_pgrp->pg_id;
  else
   *(int *)VAR_40 = VAR_12;
  return (0);
 case 147:
  if (!FUNC_22(VAR_38, VAR_42->td_proc))
   return (VAR_4);

  FUNC_1(VAR_38->t_session);
  *(int *)VAR_40 = VAR_38->t_session->s_sid;
  return (0);
 case 139: {
  struct proc *VAR_48 = VAR_42->td_proc;


  FUNC_25(VAR_38);
  FUNC_16(&VAR_37);
  FUNC_23(VAR_38);

  if (!FUNC_5(VAR_48)) {

   FUNC_17(&VAR_37);
   return (VAR_5);
  }

  if (VAR_38->t_session != ((void*)0) && VAR_38->t_session == VAR_48->p_session) {

   FUNC_17(&VAR_37);
   return (0);
  }

  if (VAR_48->p_session->s_ttyp != ((void*)0) ||
      (VAR_38->t_session != ((void*)0) && VAR_38->t_session->s_ttyvp != ((void*)0) &&
      VAR_38->t_session->s_ttyvp->v_type != VAR_33)) {
   FUNC_17(&VAR_37);
   return (VAR_5);
  }


  VAR_38->t_session = VAR_48->p_session;
  VAR_38->t_session->s_ttyp = VAR_38;
  VAR_38->t_sessioncnt++;
  FUNC_17(&VAR_37);


  VAR_38->t_pgrp = VAR_48->p_pgrp;
  FUNC_3(VAR_48);
  VAR_48->p_flag |= VAR_16;
  FUNC_4(VAR_48);

  return (0);
 }
 case 133: {
  struct pgrp *VAR_49;






  FUNC_25(VAR_38);
  FUNC_14(&VAR_37);
  VAR_49 = FUNC_12(*(int *)VAR_40);
  if (VAR_49 != ((void*)0))
   FUNC_2(VAR_49);
  if (VAR_49 == ((void*)0) || VAR_49->pg_session != VAR_42->td_proc->p_session) {
   FUNC_15(&VAR_37);
   FUNC_23(VAR_38);
   return (VAR_5);
  }
  FUNC_23(VAR_38);





  if (!FUNC_22(VAR_38, VAR_42->td_proc)) {
   FUNC_15(&VAR_37);
   return (VAR_4);
  }
  VAR_38->t_pgrp = VAR_49;
  FUNC_15(&VAR_37);


  FUNC_8(&VAR_38->t_bgwait);
  return (0);
 }
 case 152: {
  int VAR_50 = *(int *)VAR_40;

  if (VAR_50 == 0)
   VAR_50 = (VAR_6|VAR_7);
  else
   VAR_50 &= (VAR_6|VAR_7);
  FUNC_19(VAR_38, VAR_50);
  return (0);
 }
 case 154:

  return FUNC_18(VAR_38, 0);
 case 151:
  *(int *)VAR_40 = VAR_38->t_drainwait;
  return (0);
 case 138:
  VAR_43 = FUNC_13(VAR_42, VAR_14);
  if (VAR_43 == 0)
   VAR_38->t_drainwait = *(int *)VAR_40;
  return (VAR_43);
 case 155:

  if (*(int *)VAR_40) {
   VAR_43 = FUNC_13(VAR_42, VAR_13);
   if (VAR_43)
    return (VAR_43);






   if (VAR_36 == VAR_38)
    return (0);
   if (VAR_36 != ((void*)0))
    return (VAR_2);

   FUNC_25(VAR_38);
   FUNC_7(VAR_38);
   FUNC_23(VAR_38);
  } else if (VAR_36 == VAR_38) {
   FUNC_6();
  }
  return (0);
 case 146:

  *(struct winsize*)VAR_40 = VAR_38->t_winsize;
  return (0);
 case 128:

  FUNC_24(VAR_38, VAR_40);
  return (0);
 case 153:
  VAR_38->t_flags |= VAR_19;
  return (0);
 case 141:
  VAR_38->t_flags &= ~VAR_19;
  return (0);
 case 129:
  VAR_38->t_flags |= VAR_20;
  FUNC_31(VAR_38, VAR_27);
  return (0);
 case 132:
  VAR_38->t_flags &= ~VAR_20;
  FUNC_29(VAR_38);
  FUNC_31(VAR_38, VAR_26);
  return (0);
 case 131:
  FUNC_20(VAR_38);
  return (0);
 case 130:
  if ((VAR_41 & VAR_6) == 0 && FUNC_13(VAR_42, VAR_15))
   return (VAR_5);
  if (!FUNC_22(VAR_38, VAR_42->td_proc) &&
      FUNC_13(VAR_42, VAR_15))
   return (VAR_1);
  FUNC_33(VAR_38, *(char *)VAR_40, 0);
  FUNC_34(VAR_38);
  return (0);
 }




 return (VAR_3);

}
