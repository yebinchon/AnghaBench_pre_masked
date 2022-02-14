
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct linux_file {int f_flags; int f_sigio; } ;
struct linux_cdev {int dummy; } ;
struct file_operations {int (* fasync ) (int ,struct linux_file*,int) ;} ;
struct file {int f_flag; scalar_t__ f_data; } ;


 int VAR_0 ;




 int FUNC_0 (struct file*,struct thread*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (struct linux_cdev*) ;
 int FUNC_4 (struct file*,struct linux_file*,struct file_operations const*,int,void*,struct thread*) ;
 int FUNC_5 (struct linux_file*,struct file_operations const**,struct linux_cdev**) ;
 int FUNC_6 (struct thread*) ;
 int FUNC_7 (int ,struct linux_file*,int) ;
 int FUNC_8 (int ,struct linux_file*,int) ;

__attribute__((used)) static int
FUNC_9(struct file *VAR_1, u_long VAR_2, void *VAR_3, struct ucred *VAR_4,
    struct thread *VAR_5)
{
 struct linux_file *VAR_6;
 const struct file_operations *VAR_7;
 struct linux_cdev *VAR_8;
 int VAR_9;

 VAR_9 = 0;
 VAR_6 = (struct linux_file *)VAR_1->f_data;
 VAR_6->f_flags = VAR_1->f_flag;
 FUNC_5(VAR_6, &VAR_7, &VAR_8);

 FUNC_6(VAR_5);
 switch (VAR_2) {
 case 129:
  break;
 case 131:
  if (VAR_7->fasync == ((void*)0))
   break;
  VAR_9 = -FUNC_0(VAR_1, VAR_5, VAR_7->fasync(0, VAR_6, VAR_1->f_flag & VAR_0));
  break;
 case 128:
  VAR_9 = FUNC_2(*(int *)VAR_3, &VAR_6->f_sigio);
  if (VAR_9 == 0) {
   if (VAR_7->fasync == ((void*)0))
    break;
   VAR_9 = -FUNC_0(VAR_1, VAR_5, VAR_7->fasync(0, VAR_6,
       VAR_1->f_flag & VAR_0));
  }
  break;
 case 130:
  *(int *)VAR_3 = FUNC_1(&VAR_6->f_sigio);
  break;
 default:
  VAR_9 = FUNC_4(VAR_1, VAR_6, VAR_7, VAR_2, VAR_3, VAR_5);
  break;
 }
 FUNC_3(VAR_8);
 return (VAR_9);
}
