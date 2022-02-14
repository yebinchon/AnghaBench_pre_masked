
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct sock {TYPE_1__* sk_prot; } ;
struct TYPE_4__ {int num; } ;
struct TYPE_3__ {int (* disconnect ) (struct sock*,int) ;int (* connect ) (struct sock*,struct sockaddr*,int) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sock*) ;
 TYPE_2__* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,int) ;
 int FUNC_3 (struct sock*,struct sockaddr*,int) ;

int FUNC_4(struct socket *VAR_2, struct sockaddr * VAR_3,
         int VAR_4, int VAR_5)
{
 struct sock *VAR_6 = VAR_2->sk;

 if (VAR_3->sa_family == VAR_0)
  return VAR_6->sk_prot->disconnect(VAR_6, VAR_5);

 if (!FUNC_1(VAR_6)->num && FUNC_0(VAR_6))
  return -VAR_1;
 return VAR_6->sk_prot->connect(VAR_6, (struct sockaddr *)VAR_3, VAR_4);
}
