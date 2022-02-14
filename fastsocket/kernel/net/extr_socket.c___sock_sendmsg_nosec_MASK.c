
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {TYPE_1__* ops; int sk; } ;
struct sock_iocb {size_t size; struct msghdr* msg; int * scm; struct socket* sock; } ;
struct msghdr {int dummy; } ;
struct kiocb {int dummy; } ;
struct TYPE_2__ {int (* sendmsg ) (struct kiocb*,struct socket*,struct msghdr*,size_t) ;} ;


 struct sock_iocb* FUNC_0 (struct kiocb*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct kiocb*,struct socket*,struct msghdr*,size_t) ;

__attribute__((used)) static inline int FUNC_4(struct kiocb *VAR_0, struct socket *VAR_1,
           struct msghdr *VAR_2, size_t VAR_3)
{
 struct sock_iocb *VAR_4 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->sk);

 FUNC_2(VAR_1->sk);

 VAR_4->sock = VAR_1;
 VAR_4->scm = ((void*)0);
 VAR_4->msg = VAR_2;
 VAR_4->size = VAR_3;

 return VAR_1->ops->sendmsg(VAR_0, VAR_1, VAR_2, VAR_3);
}
