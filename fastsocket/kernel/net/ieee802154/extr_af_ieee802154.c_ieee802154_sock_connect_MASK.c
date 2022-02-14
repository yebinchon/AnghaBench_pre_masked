
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct sock {TYPE_1__* sk_prot; } ;
struct TYPE_2__ {int (* disconnect ) (struct sock*,int) ;int (* connect ) (struct sock*,struct sockaddr*,int) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sock*,int) ;
 int FUNC_1 (struct sock*,struct sockaddr*,int) ;

__attribute__((used)) static int FUNC_2(struct socket *VAR_1, struct sockaddr *VAR_2,
   int VAR_3, int VAR_4)
{
 struct sock *VAR_5 = VAR_1->sk;

 if (VAR_2->sa_family == VAR_0)
  return VAR_5->sk_prot->disconnect(VAR_5, VAR_4);

 return VAR_5->sk_prot->connect(VAR_5, VAR_2, VAR_3);
}
