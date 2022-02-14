
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {TYPE_1__* sk_prot; } ;
struct msghdr {int dummy; } ;
struct kiocb {int dummy; } ;
struct TYPE_2__ {int (* sendmsg ) (struct kiocb*,struct sock*,struct msghdr*,size_t) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct socket*) ;
 int FUNC_1 (struct kiocb*,struct sock*,struct msghdr*,size_t) ;

__attribute__((used)) static int FUNC_2(struct kiocb *VAR_1, struct socket *VAR_2,
    struct msghdr *VAR_3, size_t VAR_4)
{
 struct sock *VAR_5 = VAR_2->sk;

 if (FUNC_0(VAR_2))
  return -VAR_0;

 return VAR_5->sk_prot->sendmsg(VAR_1, VAR_5, VAR_3, VAR_4);
}
