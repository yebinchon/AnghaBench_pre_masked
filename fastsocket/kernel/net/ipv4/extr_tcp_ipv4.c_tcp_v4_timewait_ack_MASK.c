
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_timewait_sock {int tw_rcv_wnd; int tw_ts_recent; int tw_rcv_nxt; int tw_snd_nxt; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct inet_timewait_sock {int tw_rcv_wscale; scalar_t__ tw_transparent; int tw_bound_dev_if; } ;


 int VAR_0 ;
 struct inet_timewait_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct inet_timewait_sock*) ;
 struct tcp_timewait_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct tcp_timewait_sock*) ;
 int FUNC_4 (struct sk_buff*,int ,int ,int,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_1, struct sk_buff *VAR_2)
{
 struct inet_timewait_sock *VAR_3 = FUNC_0(VAR_1);
 struct tcp_timewait_sock *VAR_4 = FUNC_2(VAR_1);

 FUNC_4(VAR_2, VAR_4->tw_snd_nxt, VAR_4->tw_rcv_nxt,
   VAR_4->tw_rcv_wnd >> VAR_3->tw_rcv_wscale,
   VAR_4->tw_ts_recent,
   VAR_3->tw_bound_dev_if,
   FUNC_3(VAR_4),
   VAR_3->tw_transparent ? VAR_0 : 0
   );

 FUNC_1(VAR_3);
}
