
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int state; struct sock* sk; } ;
struct sock {TYPE_1__* sk_prot; } ;
struct TYPE_2__ {struct sock* (* accept ) (struct sock*,int,int*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,struct socket*) ;
 struct sock* FUNC_3 (struct sock*,int,int*) ;

__attribute__((used)) static int FUNC_4(struct socket *VAR_1, struct socket *VAR_2,
    int VAR_3)
{
 struct sock *VAR_4 = VAR_1->sk;
 struct sock *VAR_5;
 int VAR_6;

 VAR_5 = VAR_4->sk_prot->accept(VAR_4, VAR_3, &VAR_6);
 if (!VAR_5)
  return VAR_6;

 FUNC_0(VAR_5);
 FUNC_2(VAR_5, VAR_2);
 VAR_2->state = VAR_0;
 FUNC_1(VAR_5);
 return 0;
}
