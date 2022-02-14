
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tcphdr {int dummy; } ;
struct TYPE_7__ {int snd_wscale; int rcv_wscale; int mss_clamp; scalar_t__ ts_recent_stamp; int ts_recent; scalar_t__ tstamp_ok; scalar_t__ wscale_ok; int sack_ok; scalar_t__ num_sacks; scalar_t__ dsack; scalar_t__ saw_tstamp; } ;
struct tcp_sock {int snd_wnd; int max_window; int tcp_header_len; TYPE_3__ rx_opt; TYPE_1__* af_specific; int * md5sig_info; int window_clamp; int rcv_wnd; int rcv_ssthresh; scalar_t__ urg_data; scalar_t__ write_seq; scalar_t__ pushed_seq; int out_of_order_queue; scalar_t__ frto_highmark; scalar_t__ frto_counter; scalar_t__ bytes_acked; scalar_t__ snd_cwnd_cnt; int snd_cwnd; int snd_ssthresh; scalar_t__ fackets_out; scalar_t__ sacked_out; scalar_t__ retrans_out; scalar_t__ packets_out; void* mdev; scalar_t__ srtt; int tsq_node; scalar_t__ snd_up; scalar_t__ snd_nxt; scalar_t__ snd_una; scalar_t__ snd_sml; scalar_t__ rcv_nxt; scalar_t__ copied_seq; scalar_t__ rcv_wup; scalar_t__ pred_flags; } ;
struct tcp_request_sock {scalar_t__ snt_isn; scalar_t__ rcv_isn; } ;
struct sock {int dummy; } ;
struct sk_buff {scalar_t__ len; } ;
struct request_sock {int mss; int ts_recent; int rcv_wnd; int window_clamp; } ;
struct inet_request_sock {int snd_wscale; int rcv_wscale; scalar_t__ wscale_ok; int sack_ok; scalar_t__ tstamp_ok; } ;
struct TYPE_6__ {scalar_t__ last_seg_size; } ;
struct inet_connection_sock {TYPE_2__ icsk_ack; int * icsk_ca_ops; void* icsk_rto; } ;
struct TYPE_8__ {int window; } ;
struct TYPE_5__ {scalar_t__ (* md5_lookup ) (struct sock*,struct sock*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct tcp_sock*,struct request_sock*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 void* VAR_10 ;
 scalar_t__ FUNC_3 () ;
 struct inet_connection_sock* FUNC_4 (struct sock*) ;
 struct sock* FUNC_5 (struct sock*,struct request_sock*,int ) ;
 int FUNC_6 (struct sock*,int ) ;
 struct inet_request_sock* FUNC_7 (struct request_sock*) ;
 int FUNC_8 (struct tcp_sock*) ;
 int FUNC_9 (int ,unsigned int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (struct sock*,int ) ;
 int FUNC_13 (struct sock*) ;
 int FUNC_14 (struct sock*,int ) ;
 scalar_t__ FUNC_15 (struct sock*,struct sock*) ;
 scalar_t__ VAR_11 ;
 int FUNC_16 (struct tcp_sock*) ;
 TYPE_4__* FUNC_17 (struct sk_buff*) ;
 int VAR_12 ;
 int FUNC_18 (struct tcp_sock*,scalar_t__) ;
 int FUNC_19 (struct sock*) ;
 int FUNC_20 (struct tcp_sock*) ;
 struct tcp_request_sock* FUNC_21 (struct request_sock*) ;
 int FUNC_22 (struct sock*,int ) ;
 struct tcp_sock* FUNC_23 (struct sock*) ;

struct sock *FUNC_24(struct sock *VAR_13, struct request_sock *VAR_14, struct sk_buff *VAR_15)
{
 struct sock *VAR_16 = FUNC_5(VAR_13, VAR_14, VAR_0);

 if (VAR_16 != ((void*)0)) {
  const struct inet_request_sock *VAR_17 = FUNC_7(VAR_14);
  struct tcp_request_sock *VAR_18 = FUNC_21(VAR_14);
  struct inet_connection_sock *VAR_19 = FUNC_4(VAR_16);
  struct tcp_sock *VAR_20;


  VAR_20 = FUNC_23(VAR_16);
  VAR_20->pred_flags = 0;
  VAR_20->rcv_wup = VAR_20->copied_seq = VAR_20->rcv_nxt = VAR_18->rcv_isn + 1;
  VAR_20->snd_sml = VAR_20->snd_una = VAR_20->snd_nxt = VAR_18->snt_isn + 1;
  VAR_20->snd_up = VAR_18->snt_isn + 1;

  FUNC_20(VAR_20);
  FUNC_0(&VAR_20->tsq_node);

  FUNC_18(VAR_20, VAR_18->rcv_isn);

  VAR_20->srtt = 0;
  VAR_20->mdev = VAR_10;
  VAR_19->icsk_rto = VAR_10;

  VAR_20->packets_out = 0;
  VAR_20->retrans_out = 0;
  VAR_20->sacked_out = 0;
  VAR_20->fackets_out = 0;
  VAR_20->snd_ssthresh = VAR_6;






  VAR_20->snd_cwnd = VAR_7;
  VAR_20->snd_cwnd_cnt = 0;
  VAR_20->bytes_acked = 0;

  VAR_20->frto_counter = 0;
  VAR_20->frto_highmark = 0;

  VAR_19->icsk_ca_ops = &VAR_12;

  FUNC_22(VAR_16, VAR_5);
  FUNC_19(VAR_16);
  FUNC_11(&VAR_20->out_of_order_queue);
  VAR_20->write_seq = VAR_18->snt_isn + 1;
  VAR_20->pushed_seq = VAR_20->write_seq;

  VAR_20->rx_opt.saw_tstamp = 0;

  VAR_20->rx_opt.dsack = 0;
  VAR_20->rx_opt.num_sacks = 0;

  VAR_20->urg_data = 0;

  if (FUNC_12(VAR_16, VAR_1))
   FUNC_6(VAR_16,
             FUNC_8(VAR_20));

  VAR_20->rx_opt.tstamp_ok = VAR_17->tstamp_ok;
  if ((VAR_20->rx_opt.sack_ok = VAR_17->sack_ok) != 0) {
   if (VAR_11)
    FUNC_16(VAR_20);
  }
  VAR_20->window_clamp = VAR_14->window_clamp;
  VAR_20->rcv_ssthresh = VAR_14->rcv_wnd;
  VAR_20->rcv_wnd = VAR_14->rcv_wnd;
  VAR_20->rx_opt.wscale_ok = VAR_17->wscale_ok;
  if (VAR_20->rx_opt.wscale_ok) {
   VAR_20->rx_opt.snd_wscale = VAR_17->snd_wscale;
   VAR_20->rx_opt.rcv_wscale = VAR_17->rcv_wscale;
  } else {
   VAR_20->rx_opt.snd_wscale = VAR_20->rx_opt.rcv_wscale = 0;
   VAR_20->window_clamp = FUNC_9(VAR_20->window_clamp, 65535U);
  }
  VAR_20->snd_wnd = (FUNC_10(FUNC_17(VAR_15)->window) <<
      VAR_20->rx_opt.snd_wscale);
  VAR_20->max_window = VAR_20->snd_wnd;

  if (VAR_20->rx_opt.tstamp_ok) {
   VAR_20->rx_opt.ts_recent = VAR_14->ts_recent;
   VAR_20->rx_opt.ts_recent_stamp = FUNC_3();
   VAR_20->tcp_header_len = sizeof(struct tcphdr) + VAR_4;
  } else {
   VAR_20->rx_opt.ts_recent_stamp = 0;
   VAR_20->tcp_header_len = sizeof(struct tcphdr);
  }





  if (VAR_15->len >= VAR_9+VAR_20->tcp_header_len)
   VAR_19->icsk_ack.last_seg_size = VAR_15->len - VAR_20->tcp_header_len;
  VAR_20->rx_opt.mss_clamp = VAR_14->mss;
  FUNC_1(VAR_20, VAR_14);

  FUNC_14(VAR_16, VAR_2);
  FUNC_2(FUNC_13(VAR_13), VAR_8);
 }
 return VAR_16;
}
