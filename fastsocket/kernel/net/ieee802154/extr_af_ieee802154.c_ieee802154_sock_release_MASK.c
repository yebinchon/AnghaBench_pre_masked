
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {TYPE_1__* sk_prot; } ;
struct TYPE_2__ {int (* close ) (struct sock*,int ) ;} ;


 int FUNC_0 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_1(struct socket *VAR_0)
{
 struct sock *VAR_1 = VAR_0->sk;

 if (VAR_1) {
  VAR_0->sk = ((void*)0);
  VAR_1->sk_prot->close(VAR_1, 0);
 }
 return 0;
}
