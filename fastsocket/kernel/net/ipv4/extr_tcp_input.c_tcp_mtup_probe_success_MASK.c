
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {int snd_cwnd; void* rcv_ssthresh; int snd_cwnd_stamp; scalar_t__ snd_cwnd_cnt; int mss_cache; void* prior_ssthresh; } ;
struct sock {int dummy; } ;
struct TYPE_2__ {int probe_size; int search_low; } ;
struct inet_connection_sock {int icsk_pmtu_cookie; TYPE_1__ icsk_mtup; } ;


 struct inet_connection_sock* FUNC_0 (struct sock*) ;
 void* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,int ) ;
 struct tcp_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_1)
{
 struct tcp_sock *VAR_2 = FUNC_3(VAR_1);
 struct inet_connection_sock *VAR_3 = FUNC_0(VAR_1);


 VAR_2->prior_ssthresh = FUNC_1(VAR_1);
 VAR_2->snd_cwnd = VAR_2->snd_cwnd *
         FUNC_2(VAR_1, VAR_2->mss_cache) /
         VAR_3->icsk_mtup.probe_size;
 VAR_2->snd_cwnd_cnt = 0;
 VAR_2->snd_cwnd_stamp = VAR_0;
 VAR_2->rcv_ssthresh = FUNC_1(VAR_1);

 VAR_3->icsk_mtup.search_low = VAR_3->icsk_mtup.probe_size;
 VAR_3->icsk_mtup.probe_size = 0;
 FUNC_4(VAR_1, VAR_3->icsk_pmtu_cookie);
}
