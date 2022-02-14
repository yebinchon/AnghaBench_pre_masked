
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct dn_scp {scalar_t__ state; scalar_t__ persist; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct dn_scp* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_2, struct sk_buff *VAR_3)
{
 struct dn_scp *VAR_4 = FUNC_0(VAR_2);

 if (VAR_4->state == VAR_1) {
  VAR_4->state = VAR_0;
  VAR_4->persist = 0;
 }

 FUNC_1(VAR_3);
}
