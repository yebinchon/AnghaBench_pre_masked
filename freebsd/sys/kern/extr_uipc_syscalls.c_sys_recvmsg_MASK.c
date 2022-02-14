
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_proc; } ;
struct recvmsg_args {int msg; int s; int flags; } ;
struct msghdr {struct iovec* msg_iov; int msg_flags; int msg_iovlen; } ;
struct iovec {int dummy; } ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,struct msghdr*,int) ;
 int FUNC_2 (struct iovec*,int ,struct iovec**,int ) ;
 int FUNC_3 (struct msghdr*,int ,int) ;
 int FUNC_4 (struct iovec*,int ) ;
 int FUNC_5 (struct thread*,int ,struct msghdr*,int *) ;

int
FUNC_6(struct thread *VAR_4, struct recvmsg_args *VAR_5)
{
 struct msghdr VAR_6;
 struct iovec *VAR_7, *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_5->msg, &VAR_6, sizeof (VAR_6));
 if (VAR_9 != 0)
  return (VAR_9);
 VAR_9 = FUNC_2(VAR_6.msg_iov, VAR_6.msg_iovlen, &VAR_8, VAR_0);
 if (VAR_9 != 0)
  return (VAR_9);
 VAR_6.msg_flags = VAR_5->flags;




 VAR_7 = VAR_6.msg_iov;
 VAR_6.msg_iov = VAR_8;
 VAR_9 = FUNC_5(VAR_4, VAR_5->s, &VAR_6, ((void*)0));
 if (VAR_9 == 0) {
  VAR_6.msg_iov = VAR_7;
  VAR_9 = FUNC_3(&VAR_6, VAR_5->msg, sizeof(VAR_6));
 }
 FUNC_4(VAR_8, VAR_2);
 return (VAR_9);
}
