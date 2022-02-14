
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {struct sk_security_struct* sk_security; } ;
struct sk_security_struct {int dummy; } ;


 int FUNC_0 (struct sk_security_struct*) ;
 int FUNC_1 (struct sk_security_struct*) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_0)
{
 struct sk_security_struct *VAR_1 = VAR_0->sk_security;

 VAR_0->sk_security = ((void*)0);
 FUNC_1(VAR_1);
 FUNC_0(VAR_1);
}
