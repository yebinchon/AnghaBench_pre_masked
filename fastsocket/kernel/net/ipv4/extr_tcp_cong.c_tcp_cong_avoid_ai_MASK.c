
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tcp_sock {scalar_t__ snd_cwnd_cnt; scalar_t__ snd_cwnd; scalar_t__ snd_cwnd_clamp; } ;



void FUNC_0(struct tcp_sock *VAR_0, u32 VAR_1)
{
 if (VAR_0->snd_cwnd_cnt >= VAR_1) {
  if (VAR_0->snd_cwnd < VAR_0->snd_cwnd_clamp)
   VAR_0->snd_cwnd++;
  VAR_0->snd_cwnd_cnt = 0;
 } else {
  VAR_0->snd_cwnd_cnt++;
 }
}
