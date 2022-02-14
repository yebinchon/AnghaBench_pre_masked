
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {struct sk_security_struct* sk_security; } ;
struct sk_security_struct {int sclass; int sid; } ;


 int VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(struct sock *VAR_1)
{
 struct sk_security_struct *VAR_2 = VAR_1->sk_security;
 VAR_2->sid = FUNC_0();
 VAR_2->sclass = VAR_0;
}
