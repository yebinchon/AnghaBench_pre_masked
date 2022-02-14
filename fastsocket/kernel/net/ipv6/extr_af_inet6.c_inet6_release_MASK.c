
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct socket*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;

int FUNC_3(struct socket *VAR_1)
{
 struct sock *VAR_2 = VAR_1->sk;

 if (VAR_2 == ((void*)0))
  return -VAR_0;


 FUNC_2(VAR_2);


 FUNC_1(VAR_2);

 return FUNC_0(VAR_1);
}
