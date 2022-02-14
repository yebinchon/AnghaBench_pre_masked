
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uio {scalar_t__ uio_resid; struct thread* uio_td; } ;
struct ucred {int dummy; } ;
struct thread {struct file* td_fpop; } ;
struct file {int f_flag; } ;
struct cdevsw {int (* d_write ) (struct cdev*,struct uio*,int) ;} ;
struct cdev {int si_ctime; int si_mtime; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_2__ {int (* fo_write ) (struct file*,struct uio*,struct ucred*,int,struct thread*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct cdev*,int) ;
 int FUNC_2 (struct file*,struct cdev**,struct cdevsw**,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct file*,struct uio*,int) ;
 int FUNC_5 (struct file*,struct uio*,int) ;
 int FUNC_6 (struct file*,struct uio*,struct ucred*,int,struct thread*) ;
 int FUNC_7 (struct cdev*,struct uio*,int) ;
 TYPE_1__ VAR_8 ;

__attribute__((used)) static int
FUNC_8(struct file *VAR_9, struct uio *VAR_10, struct ucred *VAR_11,
    int VAR_12, struct thread *VAR_13)
{
 struct cdev *VAR_14;
 int VAR_15, VAR_16, VAR_17;
 ssize_t VAR_18;
 struct cdevsw *VAR_19;
 struct file *VAR_20;

 if (VAR_10->uio_resid > VAR_0)
  return (VAR_1);
 VAR_20 = VAR_13->td_fpop;
 VAR_15 = FUNC_2(VAR_9, &VAR_14, &VAR_19, &VAR_17);
 if (VAR_15 != 0) {
  VAR_15 = VAR_8.fo_write(VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);
  return (VAR_15);
 }
 FUNC_0(VAR_10->uio_td == VAR_13, ("uio_td %p is not td %p", VAR_10->uio_td, VAR_13));
 VAR_16 = VAR_9->f_flag & (VAR_7 | VAR_5 | VAR_6);
 if (VAR_16 & VAR_5)
  VAR_16 |= VAR_4;
 FUNC_4(VAR_9, VAR_10, VAR_12 | VAR_3);

 VAR_18 = VAR_10->uio_resid;

 VAR_15 = VAR_19->d_write(VAR_14, VAR_10, VAR_16);
 if (VAR_10->uio_resid != VAR_18 || (VAR_15 == 0 && VAR_18 != 0)) {
  FUNC_3(&VAR_14->si_ctime);
  VAR_14->si_mtime = VAR_14->si_ctime;
 }
 VAR_13->td_fpop = VAR_20;
 FUNC_1(VAR_14, VAR_17);

 FUNC_5(VAR_9, VAR_10, VAR_12 | VAR_3 | VAR_2);
 return (VAR_15);
}
