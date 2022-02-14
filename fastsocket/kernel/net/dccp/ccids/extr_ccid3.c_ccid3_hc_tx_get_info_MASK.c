
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_info {int tcpi_rtt; int tcpi_rto; } ;
struct sock {scalar_t__ sk_state; } ;
struct ccid3_hc_tx_sock {int ccid3hctx_rtt; int ccid3hctx_t_rto; } ;


 scalar_t__ VAR_0 ;
 struct ccid3_hc_tx_sock* FUNC_0 (struct sock*) ;

__attribute__((used)) static void FUNC_1(struct sock *VAR_1, struct tcp_info *VAR_2)
{
 struct ccid3_hc_tx_sock *VAR_3;


 if (VAR_1->sk_state == VAR_0)
  return;

 VAR_3 = FUNC_0(VAR_1);
 VAR_2->tcpi_rto = VAR_3->ccid3hctx_t_rto;
 VAR_2->tcpi_rtt = VAR_3->ccid3hctx_rtt;
}
