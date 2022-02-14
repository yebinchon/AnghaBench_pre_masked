
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct linux_ioctl_args {int cmd; } ;
struct ioctl_args {int dummy; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct thread*,struct ioctl_args*) ;

__attribute__((used)) static int
FUNC_1(struct thread *VAR_4, struct linux_ioctl_args *VAR_5)
{
 int VAR_6;

 switch (VAR_5->cmd) {
 case 130:
  VAR_5->cmd = VAR_1;
  VAR_6 = FUNC_0(VAR_4, (struct ioctl_args *)VAR_5);
  break;
 case 128:
  VAR_5->cmd = VAR_3;
  VAR_6 = FUNC_0(VAR_4, (struct ioctl_args *)VAR_5);
  break;
 case 129:
  VAR_5->cmd = VAR_2;
  VAR_6 = FUNC_0(VAR_4, (struct ioctl_args *)VAR_5);
  break;
 default:
  VAR_6 = VAR_0;
 }

 return (VAR_6);
}
