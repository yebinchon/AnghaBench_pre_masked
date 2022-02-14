
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct freebsd32_fcntl_args {int cmd; long arg; int fd; } ;
 int FUNC_0 (struct thread*,int ,int,long) ;

int
FUNC_1(struct thread *VAR_0, struct freebsd32_fcntl_args *VAR_1)
{
 long VAR_2;

 switch (VAR_1->cmd) {




 case 128:
 case 129:
 case 130:
 case 136:
 case 132:
 case 131:
 case 135:
 case 134:
 case 133:
  VAR_2 = (unsigned int)(VAR_1->arg);
  break;
 default:
  VAR_2 = VAR_1->arg;
  break;
 }
 return (FUNC_0(VAR_0, VAR_1->fd, VAR_1->cmd, VAR_2));
}
