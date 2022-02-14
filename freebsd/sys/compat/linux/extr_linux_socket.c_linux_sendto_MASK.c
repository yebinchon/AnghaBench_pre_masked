
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct msghdr {int msg_iovlen; scalar_t__ msg_flags; int * msg_control; struct iovec* msg_iov; int msg_namelen; void* msg_name; } ;
struct linux_sendto_args {int flags; int s; int len; int msg; int tolen; int to; } ;
struct iovec {int iov_len; void* iov_base; } ;


 void* FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct thread*,int ) ;
 int FUNC_2 (struct thread*,int ,struct msghdr*,int ,int *,int ) ;
 int FUNC_3 (struct thread*,struct linux_sendto_args*) ;

int
FUNC_4(struct thread *VAR_1, struct linux_sendto_args *VAR_2)
{
 struct msghdr VAR_3;
 struct iovec VAR_4;

 if (FUNC_1(VAR_1, VAR_2->s) == 0)

  return (FUNC_3(VAR_1, VAR_2));

 VAR_3.msg_name = FUNC_0(VAR_2->to);
 VAR_3.msg_namelen = VAR_2->tolen;
 VAR_3.msg_iov = &VAR_4;
 VAR_3.msg_iovlen = 1;
 VAR_3.msg_control = ((void*)0);
 VAR_3.msg_flags = 0;
 VAR_4.iov_base = FUNC_0(VAR_2->msg);
 VAR_4.iov_len = VAR_2->len;
 return (FUNC_2(VAR_1, VAR_2->s, &VAR_3, VAR_2->flags, ((void*)0),
     VAR_0));
}
