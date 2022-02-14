
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_state; } ;
struct sk_buff {int destructor; struct sock* sk; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct sk_buff*) ;

void
FUNC_3(struct sk_buff *VAR_2, struct sock *VAR_3)
{


 if (VAR_3->sk_state == VAR_0) {
  FUNC_1(FUNC_0(VAR_3));
  return;
 }

 FUNC_2(VAR_2);
 VAR_2->sk = VAR_3;
 VAR_2->destructor = VAR_1;
}
