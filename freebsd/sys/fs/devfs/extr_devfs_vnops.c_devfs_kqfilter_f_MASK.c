
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {struct file* td_fpop; } ;
struct knote {int dummy; } ;
struct file {int dummy; } ;
struct cdevsw {int (* d_kqfilter ) (struct cdev*,struct knote*) ;} ;
struct cdev {int dummy; } ;


 struct thread* VAR_0 ;
 int FUNC_0 (struct cdev*,int) ;
 int FUNC_1 (struct file*,struct cdev**,struct cdevsw**,int*) ;
 int FUNC_2 (struct cdev*,struct knote*) ;

__attribute__((used)) static int
FUNC_3(struct file *VAR_1, struct knote *VAR_2)
{
 struct cdev *VAR_3;
 struct cdevsw *VAR_4;
 int VAR_5, VAR_6;
 struct file *VAR_7;
 struct thread *VAR_8;

 VAR_8 = VAR_0;
 VAR_7 = VAR_8->td_fpop;
 VAR_5 = FUNC_1(VAR_1, &VAR_3, &VAR_4, &VAR_6);
 if (VAR_5)
  return (VAR_5);
 VAR_5 = VAR_4->d_kqfilter(VAR_3, VAR_2);
 VAR_8->td_fpop = VAR_7;
 FUNC_0(VAR_3, VAR_6);
 return (VAR_5);
}
