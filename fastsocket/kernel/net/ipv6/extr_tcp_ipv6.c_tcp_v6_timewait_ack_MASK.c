
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_timewait_sock {int tw_rcv_wnd; int tw_ts_recent; int tw_rcv_nxt; int tw_snd_nxt; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct inet_timewait_sock {int tw_rcv_wscale; } ;


 struct inet_timewait_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct inet_timewait_sock*) ;
 struct tcp_timewait_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct tcp_timewait_sock*) ;
 int FUNC_4 (struct sk_buff*,int ,int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_0, struct sk_buff *VAR_1)
{
 struct inet_timewait_sock *VAR_2 = FUNC_0(VAR_0);
 struct tcp_timewait_sock *VAR_3 = FUNC_2(VAR_0);

 FUNC_4(VAR_1, VAR_3->tw_snd_nxt, VAR_3->tw_rcv_nxt,
   VAR_3->tw_rcv_wnd >> VAR_2->tw_rcv_wscale,
   VAR_3->tw_ts_recent, FUNC_3(VAR_3));

 FUNC_1(VAR_2);
}
