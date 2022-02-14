
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ucred {int cr_ruidinfo; } ;
struct tty {int t_mtx; } ;
struct thread {struct ucred* td_ucred; struct proc* td_proc; } ;
struct TYPE_4__ {int si_note; } ;
struct TYPE_3__ {int si_note; } ;
struct pts_softc {int pts_unit; TYPE_2__ pts_outpoll; TYPE_1__ pts_inpoll; int pts_cred; int pts_outwait; int pts_inwait; } ;
struct proc {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (struct ucred*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (struct file*,int,int ,struct tty*,int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (struct thread*,int ) ;
 struct pts_softc* FUNC_9 (int,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_10 (struct proc*,int ,int) ;
 int FUNC_11 (struct proc*,int ,int) ;
 struct tty* FUNC_12 (int *,struct pts_softc*) ;
 int FUNC_13 (struct tty*,struct ucred*,char*,int) ;

int
FUNC_14(int VAR_10, struct thread *VAR_11, struct file *VAR_12)
{
 int VAR_13, VAR_14, VAR_15;
 struct tty *VAR_16;
 struct pts_softc *VAR_17;
 struct proc *VAR_18 = VAR_11->td_proc;
 struct ucred *VAR_19 = VAR_11->td_ucred;


 FUNC_0(VAR_18);
 VAR_15 = FUNC_10(VAR_18, VAR_5, 1);
 if (VAR_15 != 0) {
  FUNC_1(VAR_18);
  return (VAR_1);
 }
 VAR_14 = FUNC_3(VAR_19->cr_ruidinfo, 1, FUNC_8(VAR_11, VAR_6));
 if (!VAR_14) {
  FUNC_11(VAR_18, VAR_5, 1);
  FUNC_1(VAR_18);
  return (VAR_1);
 }
 FUNC_1(VAR_18);


 VAR_13 = FUNC_2(VAR_8);
 if (VAR_13 < 0) {
  FUNC_11(VAR_18, VAR_5, 1);
  FUNC_3(VAR_19->cr_ruidinfo, -1, 0);
  return (VAR_1);
 }


 VAR_17 = FUNC_9(sizeof(struct pts_softc), VAR_2, VAR_3|VAR_4);
 FUNC_5(&VAR_17->pts_inwait, "ptsin");
 FUNC_5(&VAR_17->pts_outwait, "ptsout");

 VAR_17->pts_unit = VAR_13;
 VAR_17->pts_cred = FUNC_4(VAR_19);

 VAR_16 = FUNC_12(&VAR_7, VAR_17);
 FUNC_7(&VAR_17->pts_inpoll.si_note, VAR_16->t_mtx);
 FUNC_7(&VAR_17->pts_outpoll.si_note, VAR_16->t_mtx);


 FUNC_13(VAR_16, VAR_11->td_ucred, "pts/%u", VAR_17->pts_unit);

 FUNC_6(VAR_12, VAR_10, VAR_0, VAR_16, &VAR_9);

 return (0);
}
