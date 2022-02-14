
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_timewait_sock {scalar_t__ tw_ts_recent_stamp; scalar_t__ tw_ts_recent; } ;
struct sock {int dummy; } ;
struct inet_timewait_sock {int tw_daddr; } ;
struct inet_peer {scalar_t__ tcp_ts_stamp; scalar_t__ tcp_ts; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 struct inet_peer* FUNC_1 (int ,int) ;
 int FUNC_2 (struct inet_peer*) ;
 struct tcp_timewait_sock* FUNC_3 (struct sock*) ;

int FUNC_4(struct inet_timewait_sock *VAR_1)
{
 struct inet_peer *VAR_2 = FUNC_1(VAR_1->tw_daddr, 1);

 if (VAR_2) {
  const struct tcp_timewait_sock *VAR_3 = FUNC_3((struct sock *)VAR_1);

  if ((s32)(VAR_2->tcp_ts - VAR_3->tw_ts_recent) <= 0 ||
      (VAR_2->tcp_ts_stamp + VAR_0 < FUNC_0() &&
       VAR_2->tcp_ts_stamp <= VAR_3->tw_ts_recent_stamp)) {
   VAR_2->tcp_ts_stamp = VAR_3->tw_ts_recent_stamp;
   VAR_2->tcp_ts = VAR_3->tw_ts_recent;
  }
  FUNC_2(VAR_2);
  return 1;
 }

 return 0;
}
