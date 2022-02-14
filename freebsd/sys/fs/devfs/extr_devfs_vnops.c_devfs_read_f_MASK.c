
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uio {scalar_t__ uio_resid; } ;
struct ucred {int dummy; } ;
struct thread {struct file* td_fpop; } ;
struct file {int f_flag; } ;
struct cdevsw {int (* d_read ) (struct cdev*,struct uio*,int) ;} ;
struct cdev {int si_atime; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_2__ {int (* fo_read ) (struct file*,struct uio*,struct ucred*,int,struct thread*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct cdev*,int) ;
 int FUNC_1 (struct file*,struct cdev**,struct cdevsw**,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct file*,struct uio*,int) ;
 int FUNC_4 (struct file*,struct uio*,int) ;
 int FUNC_5 (struct file*,struct uio*,struct ucred*,int,struct thread*) ;
 int FUNC_6 (struct cdev*,struct uio*,int) ;
 TYPE_1__ VAR_7 ;

__attribute__((used)) static int
FUNC_7(struct file *VAR_8, struct uio *VAR_9, struct ucred *VAR_10,
    int VAR_11, struct thread *VAR_12)
{
 struct cdev *VAR_13;
 int VAR_14, VAR_15, VAR_16;
 ssize_t VAR_17;
 struct cdevsw *VAR_18;
 struct file *VAR_19;

 if (VAR_9->uio_resid > VAR_0)
  return (VAR_1);
 VAR_19 = VAR_12->td_fpop;
 VAR_15 = FUNC_1(VAR_8, &VAR_13, &VAR_18, &VAR_16);
 if (VAR_15 != 0) {
  VAR_15 = VAR_7.fo_read(VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
  return (VAR_15);
 }
 VAR_17 = VAR_9->uio_resid;
 VAR_14 = VAR_8->f_flag & (VAR_6 | VAR_5);
 if (VAR_14 & VAR_5)
  VAR_14 |= VAR_4;

 FUNC_3(VAR_8, VAR_9, VAR_11 | VAR_3);
 VAR_15 = VAR_18->d_read(VAR_13, VAR_9, VAR_14);
 if (VAR_9->uio_resid != VAR_17 || (VAR_15 == 0 && VAR_17 != 0))
  FUNC_2(&VAR_13->si_atime);
 VAR_12->td_fpop = VAR_19;
 FUNC_0(VAR_13, VAR_16);

 FUNC_4(VAR_8, VAR_9, VAR_11 | VAR_3 | VAR_2);
 return (VAR_15);
}
