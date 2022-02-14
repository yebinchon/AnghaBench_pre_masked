
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sock {scalar_t__ sk_family; struct sk_security_struct* sk_security; } ;
struct sk_security_struct {int peer_sid; } ;
struct sk_buff {scalar_t__ protocol; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,scalar_t__,int *) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_3, struct sk_buff *VAR_4)
{
 u16 VAR_5 = VAR_3->sk_family;
 struct sk_security_struct *VAR_6 = VAR_3->sk_security;


 if (VAR_5 == VAR_2 && VAR_4->protocol == FUNC_0(VAR_0))
  VAR_5 = VAR_1;

 FUNC_1(VAR_4, VAR_5, &VAR_6->peer_sid);
}
