
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct msghdr {int dummy; } ;
struct linux_recvmsg_args {int flags; int msg; int s; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct thread*,int ,int ,int ,struct msghdr*) ;

int
FUNC_2(struct thread *VAR_0, struct linux_recvmsg_args *VAR_1)
{
 struct msghdr VAR_2;

 return (FUNC_1(VAR_0, VAR_1->s, FUNC_0(VAR_1->msg),
     VAR_1->flags, &VAR_2));
}
