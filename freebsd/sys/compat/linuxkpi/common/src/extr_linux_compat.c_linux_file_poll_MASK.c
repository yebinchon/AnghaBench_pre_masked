
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct linux_file {int f_flags; } ;
struct linux_cdev {int dummy; } ;
struct file_operations {int (* poll ) (struct linux_file*,int ) ;} ;
struct file {int f_flag; scalar_t__ f_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct file*,struct thread*,int ) ;
 int FUNC_1 (struct linux_cdev*) ;
 int FUNC_2 (struct linux_file*,struct file_operations const**,struct linux_cdev**) ;
 int FUNC_3 (struct thread*) ;
 int FUNC_4 (struct linux_file*,int ) ;

__attribute__((used)) static int
FUNC_5(struct file *VAR_1, int VAR_2, struct ucred *VAR_3,
    struct thread *VAR_4)
{
 struct linux_file *VAR_5;
 const struct file_operations *VAR_6;
 struct linux_cdev *VAR_7;
 int VAR_8;

 VAR_5 = (struct linux_file *)VAR_1->f_data;
 VAR_5->f_flags = VAR_1->f_flag;
 FUNC_3(VAR_4);
 FUNC_2(VAR_5, &VAR_6, &VAR_7);
 if (VAR_6->poll != ((void*)0)) {
  VAR_8 = FUNC_0(VAR_1, VAR_4, VAR_6->poll(VAR_5,
      VAR_0)) & VAR_2;
 } else {
  VAR_8 = 0;
 }
 FUNC_1(VAR_7);
 return (VAR_8);
}
