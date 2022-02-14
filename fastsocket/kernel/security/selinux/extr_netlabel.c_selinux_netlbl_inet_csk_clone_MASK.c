
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sock {struct sk_security_struct* sk_security; } ;
struct sk_security_struct {int nlbl_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

void FUNC_0(struct sock *VAR_3, u16 VAR_4)
{
 struct sk_security_struct *VAR_5 = VAR_3->sk_security;

 if (VAR_4 == VAR_2)
  VAR_5->nlbl_state = VAR_0;
 else
  VAR_5->nlbl_state = VAR_1;
}
