
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucred {int dummy; } ;
struct thread {struct file* td_fpop; } ;
struct file {int dummy; } ;
struct cdevsw {int (* d_poll ) (struct cdev*,int,struct thread*) ;} ;
struct cdev {int dummy; } ;
struct TYPE_2__ {int (* fo_poll ) (struct file*,int,struct ucred*,struct thread*) ;} ;


 int FUNC_0 (struct cdev*,int) ;
 int FUNC_1 (struct file*,struct cdev**,struct cdevsw**,int*) ;
 int FUNC_2 (struct file*,int,struct ucred*,struct thread*) ;
 int FUNC_3 (struct cdev*,int,struct thread*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int
FUNC_4(struct file *VAR_1, int VAR_2, struct ucred *VAR_3, struct thread *VAR_4)
{
 struct cdev *VAR_5;
 struct cdevsw *VAR_6;
 int VAR_7, VAR_8;
 struct file *VAR_9;

 VAR_9 = VAR_4->td_fpop;
 VAR_7 = FUNC_1(VAR_1, &VAR_5, &VAR_6, &VAR_8);
 if (VAR_7 != 0) {
  VAR_7 = VAR_0.fo_poll(VAR_1, VAR_2, VAR_3, VAR_4);
  return (VAR_7);
 }
 VAR_7 = VAR_6->d_poll(VAR_5, VAR_2, VAR_4);
 VAR_4->td_fpop = VAR_9;
 FUNC_0(VAR_5, VAR_8);
 return(VAR_7);
}
