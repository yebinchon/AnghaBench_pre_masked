
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sockaddr {int dummy; } ;
struct sock {TYPE_1__* sk_prot; } ;
struct TYPE_2__ {int (* bind ) (struct sock*,struct sockaddr*,int) ;} ;


 int FUNC_0 (struct socket*,struct sockaddr*,int) ;
 int FUNC_1 (struct sock*,struct sockaddr*,int) ;

__attribute__((used)) static int FUNC_2(struct socket *VAR_0, struct sockaddr *VAR_1,
  int VAR_2)
{
 struct sock *VAR_3 = VAR_0->sk;

 if (VAR_3->sk_prot->bind)
  return VAR_3->sk_prot->bind(VAR_3, VAR_1, VAR_2);

 return FUNC_0(VAR_0, VAR_1, VAR_2);
}
