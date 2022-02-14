
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct linux_ioctl_args {int cmd; } ;
struct ioctl_args {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct thread*,struct ioctl_args*) ;

__attribute__((used)) static int
FUNC_2(struct thread *VAR_0, struct linux_ioctl_args *VAR_1)
{
 VAR_1->cmd = FUNC_0(VAR_1->cmd);
 return (FUNC_1(VAR_0, (struct ioctl_args *)VAR_1));
}
