
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct reboot_args {int opt; } ;
struct linux_reboot_args {scalar_t__ magic1; int magic2; int cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 scalar_t__ VAR_4 ;






 int FUNC_0 (struct thread*,int ) ;
 int FUNC_1 (struct thread*,struct reboot_args*) ;

int
FUNC_2(struct thread *VAR_5, struct linux_reboot_args *VAR_6)
{
 struct reboot_args VAR_7;

 if (VAR_6->magic1 != VAR_4)
  return (VAR_0);

 switch (VAR_6->magic2) {
 case 133:
 case 132:
 case 131:
  break;
 default:
  return (VAR_0);
 }

 switch (VAR_6->cmd) {
 case 135:
 case 136:
  return (FUNC_0(VAR_5, VAR_1));
 case 134:
  VAR_7.opt = VAR_2;
  break;
 case 129:
 case 128:
  VAR_7.opt = 0;
  break;
 case 130:
  VAR_7.opt = VAR_3;
  break;
 default:
  return (VAR_0);
 }
 return (FUNC_1(VAR_5, &VAR_7));
}
