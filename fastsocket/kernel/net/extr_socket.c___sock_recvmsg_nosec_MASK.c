
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {TYPE_1__* ops; int sk; } ;
struct sock_iocb {size_t size; int flags; struct msghdr* msg; int * scm; struct socket* sock; } ;
struct msghdr {int dummy; } ;
struct kiocb {int dummy; } ;
struct TYPE_2__ {int (* recvmsg ) (struct kiocb*,struct socket*,struct msghdr*,size_t,int) ;} ;


 struct sock_iocb* FUNC_0 (struct kiocb*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct kiocb*,struct socket*,struct msghdr*,size_t,int) ;

__attribute__((used)) static inline int FUNC_3(struct kiocb *VAR_0, struct socket *VAR_1,
           struct msghdr *VAR_2, size_t VAR_3, int VAR_4)
{
 struct sock_iocb *VAR_5 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->sk);

 VAR_5->sock = VAR_1;
 VAR_5->scm = ((void*)0);
 VAR_5->msg = VAR_2;
 VAR_5->size = VAR_3;
 VAR_5->flags = VAR_4;

 return VAR_1->ops->recvmsg(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
