
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_info {int tcpi_rcv_rtt; int tcpi_options; int tcpi_ca_state; } ;
struct sock {scalar_t__ sk_state; } ;
struct ccid3_hc_rx_sock {int ccid3hcrx_rtt; int ccid3hcrx_state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct ccid3_hc_rx_sock* FUNC_0 (struct sock*) ;

__attribute__((used)) static void FUNC_1(struct sock *VAR_2, struct tcp_info *VAR_3)
{
 const struct ccid3_hc_rx_sock *VAR_4;


 if (VAR_2->sk_state == VAR_0)
  return;

 VAR_4 = FUNC_0(VAR_2);
 VAR_3->tcpi_ca_state = VAR_4->ccid3hcrx_state;
 VAR_3->tcpi_options |= VAR_1;
 VAR_3->tcpi_rcv_rtt = VAR_4->ccid3hcrx_rtt;
}
