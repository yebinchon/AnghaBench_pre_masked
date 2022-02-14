
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_proc; } ;
struct sendmsg_args {int flags; int s; int msg; } ;
struct msghdr {scalar_t__ msg_flags; struct iovec* msg_iov; int msg_iovlen; } ;
struct iovec {int dummy; } ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,struct msghdr*,int) ;
 int FUNC_2 (struct iovec*,int ,struct iovec**,int ) ;
 int FUNC_3 (struct iovec*,int ) ;
 int FUNC_4 (struct thread*,int ,struct msghdr*,int ) ;

int
FUNC_5(struct thread *VAR_3, struct sendmsg_args *VAR_4)
{
 struct msghdr VAR_5;
 struct iovec *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_4->msg, &VAR_5, sizeof (VAR_5));
 if (VAR_7 != 0)
  return (VAR_7);
 VAR_7 = FUNC_2(VAR_5.msg_iov, VAR_5.msg_iovlen, &VAR_6, VAR_0);
 if (VAR_7 != 0)
  return (VAR_7);
 VAR_5.msg_iov = VAR_6;




 VAR_7 = FUNC_4(VAR_3, VAR_4->s, &VAR_5, VAR_4->flags);
 FUNC_3(VAR_6, VAR_1);
 return (VAR_7);
}
