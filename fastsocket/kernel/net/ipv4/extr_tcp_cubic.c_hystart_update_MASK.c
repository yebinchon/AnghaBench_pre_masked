
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tcp_sock {int snd_cwnd; int snd_ssthresh; } ;
struct sock {int dummy; } ;
struct bictcp {int found; scalar_t__ last_ack; scalar_t__ round_start; scalar_t__ delay_min; scalar_t__ sample_cnt; scalar_t__ curr_rtt; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct bictcp* FUNC_2 (struct sock*) ;
 struct tcp_sock* FUNC_3 (struct sock*) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_5, u32 VAR_6)
{
 struct tcp_sock *VAR_7 = FUNC_3(VAR_5);
 struct bictcp *VAR_8 = FUNC_2(VAR_5);

 if (!(VAR_8->found & VAR_4)) {
  u32 VAR_9 = FUNC_1();


  if ((s32)(VAR_9 - VAR_8->last_ack) <= VAR_3) {
   VAR_8->last_ack = VAR_9;
   if ((s32)(VAR_9 - VAR_8->round_start) > VAR_8->delay_min >> 4)
    VAR_8->found |= VAR_0;
  }


  if (VAR_8->sample_cnt < VAR_2) {
   if (VAR_8->curr_rtt == 0 || VAR_8->curr_rtt > VAR_6)
    VAR_8->curr_rtt = VAR_6;

   VAR_8->sample_cnt++;
  } else {
   if (VAR_8->curr_rtt > VAR_8->delay_min +
       FUNC_0(VAR_8->delay_min>>4))
    VAR_8->found |= VAR_1;
  }




  if (VAR_8->found & VAR_4)
   VAR_7->snd_ssthresh = VAR_7->snd_cwnd;
 }
}
