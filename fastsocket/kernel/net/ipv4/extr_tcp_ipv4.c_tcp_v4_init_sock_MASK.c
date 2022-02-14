
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {int mss_cache; int * af_specific; int reordering; int snd_cwnd_clamp; int snd_ssthresh; int snd_cwnd; void* mdev; int tsq_node; int out_of_order_queue; } ;
struct sock {int sk_rcvbuf; int sk_sndbuf; int sk_write_space; int sk_state; } ;
struct inet_connection_sock {int icsk_sync_mss; int * icsk_af_ops; int * icsk_ca_ops; void* icsk_rto; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 struct inet_connection_sock* FUNC_1 (struct sock*) ;
 int VAR_5 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int VAR_6 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct sock*,int ) ;
 int VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct tcp_sock*) ;
 struct tcp_sock* FUNC_9 (struct sock*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_10(struct sock *VAR_14)
{
 struct inet_connection_sock *VAR_15 = FUNC_1(VAR_14);
 struct tcp_sock *VAR_16 = FUNC_9(VAR_14);

 FUNC_5(&VAR_16->out_of_order_queue);
 FUNC_7(VAR_14);
 FUNC_8(VAR_16);
 FUNC_0(&VAR_16->tsq_node);

 VAR_15->icsk_rto = VAR_4;
 VAR_16->mdev = VAR_4;






 VAR_16->snd_cwnd = VAR_3;




 VAR_16->snd_ssthresh = VAR_2;
 VAR_16->snd_cwnd_clamp = ~0;
 VAR_16->mss_cache = 536;

 VAR_16->reordering = VAR_7;
 VAR_15->icsk_ca_ops = &VAR_10;

 VAR_14->sk_state = VAR_1;

 VAR_14->sk_write_space = VAR_6;
 FUNC_6(VAR_14, VAR_0);

 VAR_15->icsk_af_ops = &VAR_5;
 VAR_15->icsk_sync_mss = VAR_13;




 VAR_14->sk_sndbuf = VAR_9[1];
 VAR_14->sk_rcvbuf = VAR_8[1];

 FUNC_2();
 FUNC_4(&VAR_12);
 FUNC_3();

 return 0;
}
