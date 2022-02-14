
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_timewait_sock {int tw_ts_recent_stamp; int tw_snd_nxt; int tw_ts_recent; } ;
struct TYPE_2__ {int ts_recent_stamp; int ts_recent; } ;
struct tcp_sock {int write_seq; TYPE_1__ rx_opt; } ;
struct sock {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct sock*) ;
 scalar_t__ VAR_0 ;
 struct tcp_sock* FUNC_2 (struct sock*) ;
 struct tcp_timewait_sock* FUNC_3 (struct sock*) ;

int FUNC_4(struct sock *VAR_1, struct sock *VAR_2, void *VAR_3)
{
 const struct tcp_timewait_sock *VAR_4 = FUNC_3(VAR_2);
 struct tcp_sock *VAR_5 = FUNC_2(VAR_1);
 if (VAR_4->tw_ts_recent_stamp &&
     (VAR_3 == ((void*)0) || (VAR_0 &&
        FUNC_0() - VAR_4->tw_ts_recent_stamp > 1))) {
  VAR_5->write_seq = VAR_4->tw_snd_nxt + 65535 + 2;
  if (VAR_5->write_seq == 0)
   VAR_5->write_seq = 1;
  VAR_5->rx_opt.ts_recent = VAR_4->tw_ts_recent;
  VAR_5->rx_opt.ts_recent_stamp = VAR_4->tw_ts_recent_stamp;
  FUNC_1(VAR_2);
  return 1;
 }

 return 0;
}
