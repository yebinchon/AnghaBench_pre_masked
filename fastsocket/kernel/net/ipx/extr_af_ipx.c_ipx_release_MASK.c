
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int (* sk_state_change ) (struct sock*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,int ) ;
 int FUNC_3 (struct sock*,int ) ;
 int FUNC_4 (struct sock*) ;

__attribute__((used)) static int FUNC_5(struct socket *VAR_1)
{
 struct sock *VAR_2 = VAR_1->sk;

 if (!VAR_2)
  goto out;

 if (!FUNC_2(VAR_2, VAR_0))
  VAR_2->sk_state_change(VAR_2);

 FUNC_3(VAR_2, VAR_0);
 VAR_1->sk = ((void*)0);
 FUNC_1(VAR_2);
 FUNC_0(VAR_2);
out:
 return 0;
}
