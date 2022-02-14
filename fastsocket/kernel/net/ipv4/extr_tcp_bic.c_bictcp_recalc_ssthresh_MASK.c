
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcp_sock {int snd_cwnd; } ;
struct sock {int dummy; } ;
struct bictcp {int last_max_cwnd; int loss_cwnd; scalar_t__ epoch_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct bictcp* FUNC_0 (struct sock*) ;
 int VAR_3 ;
 int FUNC_1 (int,unsigned int) ;
 struct tcp_sock* FUNC_2 (struct sock*) ;

__attribute__((used)) static u32 FUNC_3(struct sock *VAR_4)
{
 const struct tcp_sock *VAR_5 = FUNC_2(VAR_4);
 struct bictcp *VAR_6 = FUNC_0(VAR_4);

 VAR_6->epoch_start = 0;


 if (VAR_5->snd_cwnd < VAR_6->last_max_cwnd && VAR_2)
  VAR_6->last_max_cwnd = (VAR_5->snd_cwnd * (VAR_0 + VAR_1))
   / (2 * VAR_0);
 else
  VAR_6->last_max_cwnd = VAR_5->snd_cwnd;

 VAR_6->loss_cwnd = VAR_5->snd_cwnd;


 if (VAR_5->snd_cwnd <= VAR_3)
  return FUNC_1(VAR_5->snd_cwnd >> 1U, 2U);
 else
  return FUNC_1((VAR_5->snd_cwnd * VAR_1) / VAR_0, 2U);
}
