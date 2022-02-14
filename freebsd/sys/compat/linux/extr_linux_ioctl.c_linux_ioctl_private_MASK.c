
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct linux_ioctl_args {int fd; } ;
struct file {int f_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct file*,struct thread*) ;
 int FUNC_1 (struct thread*,int ,int *,struct file**) ;
 int FUNC_2 (struct thread*,struct linux_ioctl_args*) ;

__attribute__((used)) static int
FUNC_3(struct thread *VAR_3, struct linux_ioctl_args *VAR_4)
{
 struct file *VAR_5;
 int VAR_6, VAR_7;

 VAR_6 = FUNC_1(VAR_3, VAR_4->fd, &VAR_2, &VAR_5);
 if (VAR_6 != 0)
  return (VAR_6);
 VAR_7 = VAR_5->f_type;
 FUNC_0(VAR_5, VAR_3);
 if (VAR_7 == VAR_0)
  return (FUNC_2(VAR_3, VAR_4));
 return (VAR_1);
}
