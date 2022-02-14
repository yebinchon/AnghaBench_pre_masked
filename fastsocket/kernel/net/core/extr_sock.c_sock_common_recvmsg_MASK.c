
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {TYPE_1__* sk_prot; } ;
struct msghdr {int msg_namelen; } ;
struct kiocb {int dummy; } ;
struct TYPE_2__ {int (* recvmsg ) (struct kiocb*,struct sock*,struct msghdr*,size_t,int,int,int*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct kiocb*,struct sock*,struct msghdr*,size_t,int,int,int*) ;

int FUNC_1(struct kiocb *VAR_1, struct socket *VAR_2,
   struct msghdr *VAR_3, size_t VAR_4, int VAR_5)
{
 struct sock *VAR_6 = VAR_2->sk;
 int VAR_7 = 0;
 int VAR_8;

 VAR_8 = VAR_6->sk_prot->recvmsg(VAR_1, VAR_6, VAR_3, VAR_4, VAR_5 & VAR_0,
       VAR_5 & ~VAR_0, &VAR_7);
 if (VAR_8 >= 0)
  VAR_3->msg_namelen = VAR_7;
 return VAR_8;
}
