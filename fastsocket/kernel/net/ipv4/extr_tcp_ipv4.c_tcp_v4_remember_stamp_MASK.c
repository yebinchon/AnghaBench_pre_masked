
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ts_recent_stamp; scalar_t__ ts_recent; } ;
struct tcp_sock {TYPE_1__ rx_opt; } ;
struct sock {int dummy; } ;
struct rtable {scalar_t__ rt_dst; struct inet_peer* peer; } ;
struct inet_sock {scalar_t__ daddr; } ;
struct inet_peer {scalar_t__ tcp_ts_stamp; scalar_t__ tcp_ts; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct sock*) ;
 scalar_t__ FUNC_1 () ;
 struct inet_peer* FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (struct inet_peer*) ;
 struct inet_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct rtable*,int) ;
 struct tcp_sock* FUNC_6 (struct sock*) ;

int FUNC_7(struct sock *VAR_1)
{
 struct inet_sock *VAR_2 = FUNC_4(VAR_1);
 struct tcp_sock *VAR_3 = FUNC_6(VAR_1);
 struct rtable *VAR_4 = (struct rtable *)FUNC_0(VAR_1);
 struct inet_peer *VAR_5 = ((void*)0);
 int VAR_6 = 0;

 if (!VAR_4 || VAR_4->rt_dst != VAR_2->daddr) {
  VAR_5 = FUNC_2(VAR_2->daddr, 1);
  VAR_6 = 1;
 } else {
  if (!VAR_4->peer)
   FUNC_5(VAR_4, 1);
  VAR_5 = VAR_4->peer;
 }

 if (VAR_5) {
  if ((s32)(VAR_5->tcp_ts - VAR_3->rx_opt.ts_recent) <= 0 ||
      (VAR_5->tcp_ts_stamp + VAR_0 < FUNC_1() &&
       VAR_5->tcp_ts_stamp <= VAR_3->rx_opt.ts_recent_stamp)) {
   VAR_5->tcp_ts_stamp = VAR_3->rx_opt.ts_recent_stamp;
   VAR_5->tcp_ts = VAR_3->rx_opt.ts_recent;
  }
  if (VAR_6)
   FUNC_3(VAR_5);
  return 1;
 }

 return 0;
}
