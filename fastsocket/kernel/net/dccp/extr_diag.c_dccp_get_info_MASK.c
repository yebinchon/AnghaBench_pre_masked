
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_info {int tcpi_options; int tcpi_pmtu; int tcpi_backoff; int tcpi_probes; int tcpi_retransmits; int tcpi_state; } ;
struct sock {int sk_state; } ;
struct inet_connection_sock {int icsk_pmtu_cookie; int icsk_backoff; int icsk_probes_out; int icsk_retransmits; } ;
struct dccp_sock {int * dccps_hc_tx_ccid; int * dccps_hc_rx_ccid; int * dccps_hc_rx_ackvec; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct sock*,struct tcp_info*) ;
 int FUNC_1 (int *,struct sock*,struct tcp_info*) ;
 struct dccp_sock* FUNC_2 (struct sock*) ;
 struct inet_connection_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct tcp_info*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_1, struct tcp_info *VAR_2)
{
 struct dccp_sock *VAR_3 = FUNC_2(VAR_1);
 const struct inet_connection_sock *VAR_4 = FUNC_3(VAR_1);

 FUNC_4(VAR_2, 0, sizeof(*VAR_2));

 VAR_2->tcpi_state = VAR_1->sk_state;
 VAR_2->tcpi_retransmits = VAR_4->icsk_retransmits;
 VAR_2->tcpi_probes = VAR_4->icsk_probes_out;
 VAR_2->tcpi_backoff = VAR_4->icsk_backoff;
 VAR_2->tcpi_pmtu = VAR_4->icsk_pmtu_cookie;

 if (VAR_3->dccps_hc_rx_ackvec != ((void*)0))
  VAR_2->tcpi_options |= VAR_0;

 if (VAR_3->dccps_hc_rx_ccid != ((void*)0))
  FUNC_0(VAR_3->dccps_hc_rx_ccid, VAR_1, VAR_2);

 if (VAR_3->dccps_hc_tx_ccid != ((void*)0))
  FUNC_1(VAR_3->dccps_hc_tx_ccid, VAR_1, VAR_2);
}
