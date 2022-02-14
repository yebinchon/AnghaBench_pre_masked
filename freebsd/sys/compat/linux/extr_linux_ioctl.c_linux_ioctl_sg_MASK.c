
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
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct thread*,struct linux_ioctl_args*) ;
 int FUNC_1 (struct thread*,struct ioctl_args*) ;

__attribute__((used)) static int
FUNC_2(struct thread *VAR_8, struct linux_ioctl_args *VAR_9)
{

 switch (VAR_9->cmd) {
 case 130:
  VAR_9->cmd = VAR_5;
  break;
 case 128:
  VAR_9->cmd = VAR_7;
  break;
 case 131:
  VAR_9->cmd = VAR_4;
  break;
 case 129:
  VAR_9->cmd = VAR_6;



  break;
 case 134:
  VAR_9->cmd = VAR_1;
  break;
 case 133:
  VAR_9->cmd = VAR_2;
  break;
 case 132:
  VAR_9->cmd = VAR_3;
  break;
 default:
  return (VAR_0);
 }
 return (FUNC_1(VAR_8, (struct ioctl_args *)VAR_9));
}
