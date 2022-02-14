
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct linux_file {int * f_cdev; int * f_vnode; int f_sigio; int f_flags; } ;
struct linux_cdev {int dummy; } ;
struct file_operations {int (* release ) (int *,struct linux_file*) ;} ;
struct file {int f_flag; scalar_t__ f_data; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct file*,struct thread*,int ) ;
 scalar_t__ FUNC_2 (struct linux_file*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct linux_file*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct linux_cdev*) ;
 int FUNC_7 (struct linux_file*,struct file_operations const**,struct linux_cdev**) ;
 int FUNC_8 (struct linux_file*) ;
 int FUNC_9 (struct thread*) ;
 int FUNC_10 (int *,struct linux_file*) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int
FUNC_12(struct file *VAR_0, struct thread *VAR_1)
{
 struct linux_file *VAR_2;
 const struct file_operations *VAR_3;
 struct linux_cdev *VAR_4;
 int VAR_5;

 VAR_2 = (struct linux_file *)VAR_0->f_data;

 FUNC_0(FUNC_2(VAR_2) == 0,
     ("File refcount(%d) is not zero", FUNC_2(VAR_2)));

 VAR_5 = 0;
 VAR_2->f_flags = VAR_0->f_flag;
 FUNC_9(VAR_1);
 FUNC_8(VAR_2);
 FUNC_7(VAR_2, &VAR_3, &VAR_4);
 if (VAR_3->release != ((void*)0))
  VAR_5 = -FUNC_1(VAR_0, VAR_1, VAR_3->release(VAR_2->f_vnode, VAR_2));
 FUNC_3(&VAR_2->f_sigio);
 if (VAR_2->f_vnode != ((void*)0))
  FUNC_11(VAR_2->f_vnode);
 FUNC_6(VAR_4);
 if (VAR_2->f_cdev != ((void*)0))
  FUNC_5(VAR_2->f_cdev);
 FUNC_4(VAR_2);

 return (VAR_5);
}
