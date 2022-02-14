
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
struct pts_softc {int pts_unit; TYPE_2__ pts_outpoll; TYPE_1__ pts_inpoll; int pts_cred; struct cdev* pts_cdev; int pts_outwait; int pts_inwait; } ;
struct proc {int dummy; } ;
struct file {int dummy; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct ucred*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (struct file*,int,int ,struct tty*,int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (struct thread*,int ) ;
 struct pts_softc* FUNC_8 (int,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (struct proc*,int ,int) ;
 int FUNC_10 (struct proc*,int ,int) ;
 struct tty* FUNC_11 (int *,struct pts_softc*) ;
 int FUNC_12 (struct tty*,struct ucred*,char*,char const*) ;

int
FUNC_13(int VAR_9, struct thread *VAR_10, struct file *VAR_11,
    struct cdev *VAR_12, const char *VAR_13)
{
 int VAR_14, VAR_15;
 struct tty *VAR_16;
 struct pts_softc *VAR_17;
 struct proc *VAR_18 = VAR_10->td_proc;
 struct ucred *VAR_19 = VAR_10->td_ucred;


 FUNC_0(VAR_18);
 VAR_15 = FUNC_9(VAR_18, VAR_5, 1);
 if (VAR_15 != 0) {
  FUNC_1(VAR_18);
  return (VAR_1);
 }
 VAR_14 = FUNC_2(VAR_19->cr_ruidinfo, 1, FUNC_7(VAR_10, VAR_6));
 if (!VAR_14) {
  FUNC_10(VAR_18, VAR_5, 1);
  FUNC_1(VAR_18);
  return (VAR_1);
 }
 FUNC_1(VAR_18);


 VAR_17 = FUNC_8(sizeof(struct pts_softc), VAR_2, VAR_3|VAR_4);
 FUNC_4(&VAR_17->pts_inwait, "ptsin");
 FUNC_4(&VAR_17->pts_outwait, "ptsout");

 VAR_17->pts_unit = -1;
 VAR_17->pts_cdev = VAR_12;
 VAR_17->pts_cred = FUNC_3(VAR_19);

 VAR_16 = FUNC_11(&VAR_7, VAR_17);
 FUNC_6(&VAR_17->pts_inpoll.si_note, VAR_16->t_mtx);
 FUNC_6(&VAR_17->pts_outpoll.si_note, VAR_16->t_mtx);


 FUNC_12(VAR_16, VAR_10->td_ucred, "%s", VAR_13);

 FUNC_5(VAR_11, VAR_9, VAR_0, VAR_16, &VAR_8);

 return (0);
}
