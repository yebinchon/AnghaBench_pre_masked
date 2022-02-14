
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int dummy; } ;


 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;

__attribute__((used)) static int
FUNC_6(struct socket *VAR_0)
{
 struct sock *VAR_1 = VAR_0->sk;

 if (VAR_1) {
  FUNC_4(VAR_1);
  FUNC_3(VAR_1);
  FUNC_1(VAR_1);
  FUNC_0(VAR_1);
  FUNC_2(VAR_1);
  FUNC_5(VAR_1);
 }

 return 0;
}
