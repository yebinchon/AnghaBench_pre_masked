
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int (* sk_data_ready ) (struct sock*,int ) ;int sk_receive_queue; } ;
struct sk_buff {int len; } ;
struct atm_vcc {int dummy; } ;


 struct sock* FUNC_0 (struct atm_vcc*) ;
 int FUNC_1 (int *,struct sk_buff*) ;
 int FUNC_2 (struct sock*,int ) ;

__attribute__((used)) static void FUNC_3(struct atm_vcc *VAR_0,struct sk_buff *VAR_1)
{
 if (VAR_1) {
  struct sock *VAR_2 = FUNC_0(VAR_0);

  FUNC_1(&VAR_2->sk_receive_queue, VAR_1);
  VAR_2->sk_data_ready(VAR_2, VAR_1->len);
 }
}
