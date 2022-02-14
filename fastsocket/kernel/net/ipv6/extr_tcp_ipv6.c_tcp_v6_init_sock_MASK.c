
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {int snd_cwnd; int mss_cache; int * af_specific; int reordering; int snd_cwnd_clamp; int snd_ssthresh; void* mdev; int tsq_node; int out_of_order_queue; } ;
struct sock {int sk_rcvbuf; int sk_sndbuf; int sk_write_space; int sk_state; } ;
struct inet_connection_sock {int icsk_sync_mss; int * icsk_ca_ops; int * icsk_af_ops; void* icsk_rto; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 struct inet_connection_sock* FUNC_1 (struct sock*) ;
 int VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int VAR_5 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct sock*,int ) ;
 int VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct tcp_sock*) ;
 struct tcp_sock* FUNC_9 (struct sock*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_10(struct sock *VAR_13)
{
 struct inet_connection_sock *VAR_14 = FUNC_1(VAR_13);
 struct tcp_sock *VAR_15 = FUNC_9(VAR_13);

 FUNC_5(&VAR_15->out_of_order_queue);
 FUNC_7(VAR_13);
 FUNC_8(VAR_15);
 FUNC_0(&VAR_15->tsq_node);

 VAR_14->icsk_rto = VAR_3;
 VAR_15->mdev = VAR_3;






 VAR_15->snd_cwnd = 2;




 VAR_15->snd_ssthresh = VAR_2;
 VAR_15->snd_cwnd_clamp = ~0;
 VAR_15->mss_cache = 536;

 VAR_15->reordering = VAR_6;

 VAR_13->sk_state = VAR_1;

 VAR_14->icsk_af_ops = &VAR_4;
 VAR_14->icsk_ca_ops = &VAR_9;
 VAR_14->icsk_sync_mss = VAR_12;
 VAR_13->sk_write_space = VAR_5;
 FUNC_6(VAR_13, VAR_0);





 VAR_13->sk_sndbuf = VAR_8[1];
 VAR_13->sk_rcvbuf = VAR_7[1];

 FUNC_2();
 FUNC_4(&VAR_11);
 FUNC_3();

 return 0;
}
