
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_open_args {int a_mode; struct file* a_fp; struct vnode* a_vp; struct thread* a_td; } ;
struct vnode {scalar_t__ v_type; struct cdev* v_rdev; } ;
struct thread {struct file* td_fpop; } ;
struct file {int f_flag; int * f_ops; struct vnode* f_vnode; struct cdev* f_data; } ;
struct cdevsw {int (* d_fdopen ) (struct cdev*,int ,struct thread*,struct file*) ;int (* d_open ) (struct cdev*,int ,int ,struct thread*) ;} ;
struct cdev {scalar_t__ si_iosize_max; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct vnode*) ;
 int FUNC_2 (struct vnode*,int ) ;
 int VAR_8 ;
 struct cdevsw* FUNC_3 (struct cdev*,int*) ;
 int FUNC_4 (struct cdev*,int) ;
 int FUNC_5 () ;
 int VAR_9 ;
 int FUNC_6 (struct file*,int ,int ,struct cdev*,int *) ;
 int FUNC_7 (struct cdev*,int ,struct thread*,struct file*) ;
 int FUNC_8 (struct cdev*,int ,int ,struct thread*) ;
 int FUNC_9 (struct vnode*,int) ;

__attribute__((used)) static int
FUNC_10(struct vop_open_args *VAR_10)
{
 struct thread *VAR_11 = VAR_10->a_td;
 struct vnode *VAR_12 = VAR_10->a_vp;
 struct cdev *VAR_13 = VAR_12->v_rdev;
 struct file *VAR_14 = VAR_10->a_fp;
 int VAR_15, VAR_16, VAR_17;
 struct cdevsw *VAR_18;
 struct file *VAR_19;

 if (VAR_12->v_type == VAR_7)
  return (VAR_3);

 if (VAR_13 == ((void*)0))
  return (VAR_3);


 if (VAR_13->si_iosize_max == 0)
  VAR_13->si_iosize_max = VAR_0;

 VAR_18 = FUNC_3(VAR_13, &VAR_16);
 if (VAR_18 == ((void*)0))
  return (VAR_3);
 if (VAR_14 == ((void*)0) && VAR_18->d_fdopen != ((void*)0)) {
  FUNC_4(VAR_13, VAR_16);
  return (VAR_3);
 }

 VAR_17 = FUNC_1(VAR_12);
 FUNC_2(VAR_12, 0);

 VAR_19 = VAR_11->td_fpop;
 VAR_11->td_fpop = VAR_14;
 if (VAR_14 != ((void*)0)) {
  VAR_14->f_data = VAR_13;
  VAR_14->f_vnode = VAR_12;
 }
 if (VAR_18->d_fdopen != ((void*)0))
  VAR_15 = VAR_18->d_fdopen(VAR_13, VAR_10->a_mode, VAR_11, VAR_14);
 else
  VAR_15 = VAR_18->d_open(VAR_13, VAR_10->a_mode, VAR_6, VAR_11);

 if (VAR_15 != 0)
  FUNC_5();
 VAR_11->td_fpop = VAR_19;

 FUNC_9(VAR_12, VAR_17 | VAR_5);
 FUNC_4(VAR_13, VAR_16);
 if (VAR_15 != 0) {
  if (VAR_15 == VAR_4)
   VAR_15 = VAR_2;
  return (VAR_15);
 }




 if (VAR_14 == ((void*)0))
  return (VAR_15);

 if (VAR_14->f_ops == &VAR_8)
  FUNC_6(VAR_14, VAR_14->f_flag, VAR_1, VAR_13, &VAR_9);
 return (VAR_15);
}
