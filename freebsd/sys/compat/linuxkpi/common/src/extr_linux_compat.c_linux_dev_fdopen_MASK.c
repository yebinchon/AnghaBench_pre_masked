
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct linux_file {int f_mode; int f_vnode; struct linux_cdev* f_cdev; struct file* _file; int f_flags; int f_op; int f_dentry_store; int * f_dentry; } ;
struct linux_cdev {int refs; int ops; } ;
struct file_operations {int (* open ) (int ,struct linux_file*) ;} ;
struct file {int f_vnode; int f_flag; } ;
struct cdev {struct linux_cdev* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct file*,int ,int ,struct linux_file*,int *) ;
 int FUNC_1 (struct linux_file*) ;
 int FUNC_2 (struct linux_cdev*) ;
 int FUNC_3 (struct linux_cdev*) ;
 struct linux_file* FUNC_4 () ;
 int FUNC_5 (struct linux_file*,struct file_operations const**,struct linux_cdev**) ;
 int FUNC_6 (struct thread*) ;
 int VAR_2 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,struct linux_file*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(struct cdev *VAR_3, int VAR_4, struct thread *VAR_5,
    struct file *VAR_6)
{
 struct linux_cdev *VAR_7;
 struct linux_file *VAR_8;
 const struct file_operations *VAR_9;
 int VAR_10;

 VAR_7 = VAR_3->si_drv1;

 VAR_8 = FUNC_4();
 VAR_8->f_dentry = &VAR_8->f_dentry_store;
 VAR_8->f_op = VAR_7->ops;
 VAR_8->f_mode = VAR_6->f_flag;
 VAR_8->f_flags = VAR_6->f_flag;
 VAR_8->f_vnode = VAR_6->f_vnode;
 VAR_8->_file = VAR_6;
 FUNC_7(&VAR_7->refs);
 VAR_8->f_cdev = VAR_7;

 FUNC_6(VAR_5);
 FUNC_5(VAR_8, &VAR_9, &VAR_7);

 if (VAR_9->open != ((void*)0)) {
  VAR_10 = -VAR_9->open(VAR_6->f_vnode, VAR_8);
  if (VAR_10 != 0) {
   FUNC_3(VAR_7);
   FUNC_2(VAR_8->f_cdev);
   FUNC_1(VAR_8);
   return (VAR_10);
  }
 }


 FUNC_9(VAR_8->f_vnode);


 FUNC_0(VAR_6, VAR_8->f_mode, VAR_0, VAR_8, &VAR_2);
 FUNC_3(VAR_7);
 return (VAR_1);
}
