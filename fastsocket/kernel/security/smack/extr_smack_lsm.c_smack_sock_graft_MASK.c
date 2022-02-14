
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_smack {int smk_out; int smk_in; } ;
struct socket {int dummy; } ;
struct sock {scalar_t__ sk_family; struct socket_smack* sk_security; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(struct sock *VAR_2, struct socket *VAR_3)
{
 struct socket_smack *VAR_4;

 if (VAR_2 == ((void*)0) ||
     (VAR_2->sk_family != VAR_0 && VAR_2->sk_family != VAR_1))
  return;

 VAR_4 = VAR_2->sk_security;
 VAR_4->smk_in = VAR_4->smk_out = FUNC_0();

}
