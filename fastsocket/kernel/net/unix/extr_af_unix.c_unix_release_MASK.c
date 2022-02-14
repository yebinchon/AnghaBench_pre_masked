
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int dummy; } ;


 int FUNC_0 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_1(struct socket *VAR_0)
{
 struct sock *VAR_1 = VAR_0->sk;

 if (!VAR_1)
  return 0;

 VAR_0->sk = ((void*)0);

 return FUNC_0(VAR_1, 0);
}
