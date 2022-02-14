
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucred {int cr_ruidinfo; } ;
struct thread {int* td_retval; struct ucred* td_ucred; TYPE_1__* td_proc; } ;
struct kqueue {int kq_cred; struct filedesc* kq_fdp; } ;
struct filedesc {int fd_kqlist; } ;
struct filecaps {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct filedesc* p_fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct filedesc*) ;
 int FUNC_1 (struct filedesc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,struct kqueue*,int ) ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (struct ucred*) ;
 int FUNC_5 (struct thread*,struct file**,int*,int,struct filecaps*) ;
 int FUNC_6 (struct file*,struct thread*) ;
 int FUNC_7 (struct file*,int,int ,struct kqueue*,int *) ;
 int VAR_8 ;
 int FUNC_8 (struct kqueue*) ;
 int VAR_9 ;
 int FUNC_9 (struct thread*,int ) ;
 struct kqueue* FUNC_10 (int,int ,int) ;

int
FUNC_11(struct thread *VAR_10, int VAR_11, struct filecaps *VAR_12)
{
 struct filedesc *VAR_13;
 struct kqueue *VAR_14;
 struct file *VAR_15;
 struct ucred *VAR_16;
 int VAR_17, VAR_18;

 VAR_13 = VAR_10->td_proc->p_fd;
 VAR_16 = VAR_10->td_ucred;
 if (!FUNC_3(VAR_16->cr_ruidinfo, 1, FUNC_9(VAR_10, VAR_7)))
  return (VAR_1);

 VAR_18 = FUNC_5(VAR_10, &VAR_15, &VAR_17, VAR_11, VAR_12);
 if (VAR_18 != 0) {
  FUNC_3(VAR_16->cr_ruidinfo, -1, 0);
  return (VAR_18);
 }


 VAR_14 = FUNC_10(sizeof *VAR_14, VAR_4, VAR_5 | VAR_6);
 FUNC_8(VAR_14);
 VAR_14->kq_fdp = VAR_13;
 VAR_14->kq_cred = FUNC_4(VAR_16);

 FUNC_0(VAR_13);
 FUNC_2(&VAR_13->fd_kqlist, VAR_14, VAR_8);
 FUNC_1(VAR_13);

 FUNC_7(VAR_15, VAR_2 | VAR_3, VAR_0, VAR_14, &VAR_9);
 FUNC_6(VAR_15, VAR_10);

 VAR_10->td_retval[0] = VAR_17;
 return (0);
}
