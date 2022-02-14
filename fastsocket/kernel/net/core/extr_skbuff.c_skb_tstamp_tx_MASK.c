
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ee_origin; int ee_errno; } ;
struct sock_exterr_skb {TYPE_1__ ee; } ;
struct sock {int dummy; } ;
struct skb_shared_hwtstamps {int dummy; } ;
struct sk_buff {int tstamp; struct sock* sk; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sock_exterr_skb* FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct sock_exterr_skb*,int ,int) ;
 struct sk_buff* FUNC_4 (struct sk_buff*,int ) ;
 struct skb_shared_hwtstamps* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sock*,struct sk_buff*) ;

void FUNC_7(struct sk_buff *VAR_3,
  struct skb_shared_hwtstamps *VAR_4)
{
 struct sock *VAR_5 = VAR_3->sk;
 struct sock_exterr_skb *VAR_6;
 struct sk_buff *VAR_7;
 int VAR_8;

 if (!VAR_5)
  return;

 VAR_7 = FUNC_4(VAR_3, VAR_1);
 if (!VAR_7)
  return;

 if (VAR_4) {
  *FUNC_5(VAR_7) =
   *VAR_4;
 } else {





  VAR_7->tstamp = FUNC_2();
 }

 VAR_6 = FUNC_0(VAR_7);
 FUNC_3(VAR_6, 0, sizeof(*VAR_6));
 VAR_6->ee.ee_errno = VAR_0;
 VAR_6->ee.ee_origin = VAR_2;
 VAR_8 = FUNC_6(VAR_5, VAR_7);
 if (VAR_8)
  FUNC_1(VAR_7);
}
