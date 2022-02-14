
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {int snd_nxt; int write_seq; scalar_t__ max_window; int snd_cwnd; int rx_opt; scalar_t__ bytes_acked; scalar_t__ snd_cwnd_cnt; int snd_ssthresh; scalar_t__ packets_out; scalar_t__ srtt; int out_of_order_queue; } ;
struct sock {int sk_state; int sk_userlocks; int (* sk_error_report ) (struct sock*) ;scalar_t__ sk_shutdown; int sk_async_wait_queue; int sk_receive_queue; void* sk_err; } ;
struct inet_sock {scalar_t__ num; scalar_t__ dport; } ;
struct inet_connection_sock {int icsk_bind_hash; scalar_t__ icsk_probes_out; scalar_t__ icsk_backoff; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 struct inet_connection_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;
 struct inet_sock* FUNC_8 (struct sock*) ;
 int FUNC_9 (int *,int ,int) ;
 int FUNC_10 (struct sock*,int ) ;
 int FUNC_11 (struct sock*) ;
 int FUNC_12 (struct tcp_sock*) ;
 int FUNC_13 (struct sock*) ;
 int FUNC_14 (struct sock*) ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 (struct sock*,int ) ;
 int FUNC_17 (struct sock*,int ) ;
 int FUNC_18 (struct sock*,int) ;
 struct tcp_sock* FUNC_19 (struct sock*) ;
 int FUNC_20 (struct sock*) ;

int FUNC_21(struct sock *VAR_10, int VAR_11)
{
 struct inet_sock *VAR_12 = FUNC_8(VAR_10);
 struct inet_connection_sock *VAR_13 = FUNC_4(VAR_10);
 struct tcp_sock *VAR_14 = FUNC_19(VAR_10);
 int VAR_15 = 0;
 int VAR_16 = VAR_10->sk_state;

 if (VAR_16 != VAR_6)
  FUNC_18(VAR_10, VAR_6);


 if (VAR_16 == VAR_8) {
  FUNC_6(VAR_10);
 } else if (FUNC_15(VAR_16) ||
     (VAR_14->snd_nxt != VAR_14->write_seq &&
      (1 << VAR_16) & (VAR_3 | VAR_4))) {



  FUNC_16(VAR_10, FUNC_3());
  VAR_10->sk_err = VAR_0;
 } else if (VAR_16 == VAR_9)
  VAR_10->sk_err = VAR_0;

 FUNC_13(VAR_10);
 FUNC_2(&VAR_10->sk_receive_queue);
 FUNC_20(VAR_10);
 FUNC_2(&VAR_14->out_of_order_queue);




 VAR_12->dport = 0;

 if (!(VAR_10->sk_userlocks & VAR_1))
  FUNC_7(VAR_10);

 VAR_10->sk_shutdown = 0;
 FUNC_10(VAR_10, VAR_2);
 VAR_14->srtt = 0;
 if ((VAR_14->write_seq += VAR_14->max_window + 2) == 0)
  VAR_14->write_seq = 1;
 VAR_13->icsk_backoff = 0;
 VAR_14->snd_cwnd = 2;
 VAR_13->icsk_probes_out = 0;
 VAR_14->packets_out = 0;
 VAR_14->snd_ssthresh = VAR_7;
 VAR_14->snd_cwnd_cnt = 0;
 VAR_14->bytes_acked = 0;
 FUNC_17(VAR_10, VAR_5);
 FUNC_12(VAR_14);
 FUNC_5(VAR_10);
 FUNC_14(VAR_10);
 FUNC_9(&VAR_14->rx_opt, 0, sizeof(VAR_14->rx_opt));
 FUNC_1(VAR_10);

 FUNC_0(VAR_12->num && !VAR_13->icsk_bind_hash);

 VAR_10->sk_error_report(VAR_10);
 return VAR_15;
}
