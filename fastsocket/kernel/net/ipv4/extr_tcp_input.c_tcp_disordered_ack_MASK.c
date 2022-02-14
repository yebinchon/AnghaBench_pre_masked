
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tcphdr {int window; scalar_t__ ack; } ;
struct TYPE_4__ {int snd_wscale; scalar_t__ rcv_tsval; scalar_t__ ts_recent; } ;
struct tcp_sock {scalar_t__ rcv_nxt; scalar_t__ snd_una; TYPE_1__ rx_opt; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
typedef int s32 ;
struct TYPE_6__ {scalar_t__ seq; scalar_t__ ack_seq; scalar_t__ end_seq; } ;
struct TYPE_5__ {int icsk_rto; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (struct sk_buff const*) ;
 TYPE_2__* FUNC_1 (struct sock const*) ;
 int FUNC_2 (int ) ;
 struct tcphdr* FUNC_3 (struct sk_buff const*) ;
 int FUNC_4 (struct tcp_sock*,scalar_t__,scalar_t__,int) ;
 struct tcp_sock* FUNC_5 (struct sock const*) ;

__attribute__((used)) static int FUNC_6(const struct sock *VAR_1, const struct sk_buff *VAR_2)
{
 struct tcp_sock *VAR_3 = FUNC_5(VAR_1);
 struct tcphdr *VAR_4 = FUNC_3(VAR_2);
 u32 VAR_5 = FUNC_0(VAR_2)->seq;
 u32 VAR_6 = FUNC_0(VAR_2)->ack_seq;

 return (
  (VAR_4->ack && VAR_5 == FUNC_0(VAR_2)->end_seq && VAR_5 == VAR_3->rcv_nxt) &&


  VAR_6 == VAR_3->snd_una &&


  !FUNC_4(VAR_3, VAR_6, VAR_5, FUNC_2(VAR_4->window) << VAR_3->rx_opt.snd_wscale) &&


  (s32)(VAR_3->rx_opt.ts_recent - VAR_3->rx_opt.rcv_tsval) <= (FUNC_1(VAR_1)->icsk_rto * 1024) / VAR_0);
}
