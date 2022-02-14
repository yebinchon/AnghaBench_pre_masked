
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sack_ok; } ;
struct tcp_sock {TYPE_1__ rx_opt; int * lost_skb_hint; } ;


 scalar_t__ FUNC_0 (struct tcp_sock*) ;

__attribute__((used)) static void FUNC_1(struct tcp_sock *VAR_0)
{

 if (FUNC_0(VAR_0))
  VAR_0->lost_skb_hint = ((void*)0);
 VAR_0->rx_opt.sack_ok &= ~2;
}
