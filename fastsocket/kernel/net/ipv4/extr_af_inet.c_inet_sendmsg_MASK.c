
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {TYPE_1__* sk_prot; } ;
struct msghdr {int dummy; } ;
struct kiocb {int dummy; } ;
struct TYPE_4__ {int num; } ;
struct TYPE_3__ {int (* sendmsg ) (struct kiocb*,struct sock*,struct msghdr*,size_t) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sock*) ;
 TYPE_2__* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct kiocb*,struct sock*,struct msghdr*,size_t) ;

int FUNC_4(struct kiocb *VAR_1, struct socket *VAR_2, struct msghdr *VAR_3,
   size_t VAR_4)
{
 struct sock *VAR_5 = VAR_2->sk;

 FUNC_2(VAR_5);


 if (!FUNC_1(VAR_5)->num && FUNC_0(VAR_5))
  return -VAR_0;

 return VAR_5->sk_prot->sendmsg(VAR_1, VAR_5, VAR_3, VAR_4);
}
