
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcp_sock {scalar_t__ snd_cwnd; scalar_t__ snd_ssthresh; } ;
struct sock {int dummy; } ;
struct inet_connection_sock {scalar_t__ icsk_ca_state; } ;
struct bictcp {int delayed_ack; int delay_min; scalar_t__ epoch_start; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct sock*,int) ;
 struct inet_connection_sock* FUNC_1 (struct sock*) ;
 struct bictcp* FUNC_2 (struct sock*) ;
 int FUNC_3 (int,int ) ;
 struct tcp_sock* FUNC_4 (struct sock*) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_8, u32 VAR_9, s32 VAR_10)
{
 const struct inet_connection_sock *VAR_11 = FUNC_1(VAR_8);
 const struct tcp_sock *VAR_12 = FUNC_4(VAR_8);
 struct bictcp *VAR_13 = FUNC_2(VAR_8);
 u32 VAR_14;

 if (VAR_11->icsk_ca_state == VAR_3) {
  u32 VAR_15 = VAR_13->delayed_ack;

  VAR_15 -= VAR_13->delayed_ack >> VAR_1;
  VAR_15 += VAR_9;

  VAR_13->delayed_ack = FUNC_3(VAR_15, VAR_0);
 }


 if (VAR_10 < 0)
  return;


 if ((s32)(VAR_7 - VAR_13->epoch_start) < VAR_2)
  return;

 VAR_14 = (VAR_10 << 3) / VAR_4;
 if (VAR_14 == 0)
  VAR_14 = 1;


 if (VAR_13->delay_min == 0 || VAR_13->delay_min > VAR_14)
  VAR_13->delay_min = VAR_14;


 if (VAR_5 && VAR_12->snd_cwnd <= VAR_12->snd_ssthresh &&
     VAR_12->snd_cwnd >= VAR_6)
  FUNC_0(VAR_8, VAR_14);
}
