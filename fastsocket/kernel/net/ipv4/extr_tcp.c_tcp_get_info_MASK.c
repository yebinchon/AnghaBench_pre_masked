
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_8__ {int space; } ;
struct TYPE_7__ {int rtt; } ;
struct TYPE_5__ {int rcv_wscale; int snd_wscale; scalar_t__ wscale_ok; scalar_t__ tstamp_ok; } ;
struct tcp_sock {int ecn_flags; int total_retrans; TYPE_4__ rcvq_space; TYPE_3__ rcv_rtt_est; int reordering; int advmss; int snd_cwnd; int snd_ssthresh; int mdev; int srtt; int rcv_ssthresh; scalar_t__ rcv_tstamp; scalar_t__ lsndtime; int fackets_out; int retrans_out; int lost_out; int sacked_out; int packets_out; int mss_cache; TYPE_1__ rx_opt; } ;
struct tcp_info {scalar_t__ tcpi_state; int tcpi_rto; int tcpi_ato; int tcpi_rtt; int tcpi_rttvar; int tcpi_rcv_rtt; int tcpi_total_retrans; int tcpi_rcv_space; int tcpi_reordering; int tcpi_advmss; int tcpi_snd_cwnd; int tcpi_snd_ssthresh; int tcpi_rcv_ssthresh; int tcpi_pmtu; void* tcpi_last_ack_recv; void* tcpi_last_data_recv; void* tcpi_last_data_sent; int tcpi_fackets; int tcpi_retrans; int tcpi_lost; int tcpi_sacked; int tcpi_unacked; int tcpi_rcv_mss; int tcpi_snd_mss; int tcpi_options; int tcpi_rcv_wscale; int tcpi_snd_wscale; int tcpi_backoff; int tcpi_probes; int tcpi_retransmits; int tcpi_ca_state; } ;
struct sock {scalar_t__ sk_state; int sk_max_ack_backlog; int sk_ack_backlog; } ;
struct TYPE_6__ {scalar_t__ lrcvtime; int rcv_mss; int ato; } ;
struct inet_connection_sock {int icsk_pmtu_cookie; TYPE_2__ icsk_ack; int icsk_rto; int icsk_backoff; int icsk_probes_out; int icsk_retransmits; int icsk_ca_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct inet_connection_sock* FUNC_0 (struct sock*) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct tcp_info*,int ,int) ;
 scalar_t__ FUNC_4 (struct tcp_sock*) ;
 struct tcp_sock* FUNC_5 (struct sock*) ;
 scalar_t__ VAR_6 ;

void FUNC_6(struct sock *VAR_7, struct tcp_info *VAR_8)
{
 struct tcp_sock *VAR_9 = FUNC_5(VAR_7);
 const struct inet_connection_sock *VAR_10 = FUNC_0(VAR_7);
 u32 VAR_11 = VAR_6;

 FUNC_3(VAR_8, 0, sizeof(*VAR_8));

 VAR_8->tcpi_state = VAR_7->sk_state;
 VAR_8->tcpi_ca_state = VAR_10->icsk_ca_state;
 VAR_8->tcpi_retransmits = VAR_10->icsk_retransmits;
 VAR_8->tcpi_probes = VAR_10->icsk_probes_out;
 VAR_8->tcpi_backoff = VAR_10->icsk_backoff;

 if (VAR_9->rx_opt.tstamp_ok)
  VAR_8->tcpi_options |= VAR_2;
 if (FUNC_4(VAR_9))
  VAR_8->tcpi_options |= VAR_1;
 if (VAR_9->rx_opt.wscale_ok) {
  VAR_8->tcpi_options |= VAR_3;
  VAR_8->tcpi_snd_wscale = VAR_9->rx_opt.snd_wscale;
  VAR_8->tcpi_rcv_wscale = VAR_9->rx_opt.rcv_wscale;
 }

 if (VAR_9->ecn_flags&VAR_4)
  VAR_8->tcpi_options |= VAR_0;

 VAR_8->tcpi_rto = FUNC_2(VAR_10->icsk_rto);
 VAR_8->tcpi_ato = FUNC_2(VAR_10->icsk_ack.ato);
 VAR_8->tcpi_snd_mss = VAR_9->mss_cache;
 VAR_8->tcpi_rcv_mss = VAR_10->icsk_ack.rcv_mss;

 if (VAR_7->sk_state == VAR_5) {
  VAR_8->tcpi_unacked = VAR_7->sk_ack_backlog;
  VAR_8->tcpi_sacked = VAR_7->sk_max_ack_backlog;
 } else {
  VAR_8->tcpi_unacked = VAR_9->packets_out;
  VAR_8->tcpi_sacked = VAR_9->sacked_out;
 }
 VAR_8->tcpi_lost = VAR_9->lost_out;
 VAR_8->tcpi_retrans = VAR_9->retrans_out;
 VAR_8->tcpi_fackets = VAR_9->fackets_out;

 VAR_8->tcpi_last_data_sent = FUNC_1(VAR_11 - VAR_9->lsndtime);
 VAR_8->tcpi_last_data_recv = FUNC_1(VAR_11 - VAR_10->icsk_ack.lrcvtime);
 VAR_8->tcpi_last_ack_recv = FUNC_1(VAR_11 - VAR_9->rcv_tstamp);

 VAR_8->tcpi_pmtu = VAR_10->icsk_pmtu_cookie;
 VAR_8->tcpi_rcv_ssthresh = VAR_9->rcv_ssthresh;
 VAR_8->tcpi_rtt = FUNC_2(VAR_9->srtt)>>3;
 VAR_8->tcpi_rttvar = FUNC_2(VAR_9->mdev)>>2;
 VAR_8->tcpi_snd_ssthresh = VAR_9->snd_ssthresh;
 VAR_8->tcpi_snd_cwnd = VAR_9->snd_cwnd;
 VAR_8->tcpi_advmss = VAR_9->advmss;
 VAR_8->tcpi_reordering = VAR_9->reordering;

 VAR_8->tcpi_rcv_rtt = FUNC_2(VAR_9->rcv_rtt_est.rtt)>>3;
 VAR_8->tcpi_rcv_space = VAR_9->rcvq_space.space;

 VAR_8->tcpi_total_retrans = VAR_9->total_retrans;
}
