
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {scalar_t__ snd_cwnd; scalar_t__ snd_ssthresh; } ;
struct sock {int dummy; } ;
struct TYPE_2__ {int icsk_ca_state; } ;


 int const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct sock const*) ;
 struct tcp_sock* FUNC_1 (struct sock const*) ;

__attribute__((used)) static inline int FUNC_2(const struct sock *VAR_3, const int VAR_4)
{
 const struct tcp_sock *VAR_5 = FUNC_1(VAR_3);
 return (!(VAR_4 & VAR_0) || VAR_5->snd_cwnd < VAR_5->snd_ssthresh) &&
  !((1 << FUNC_0(VAR_3)->icsk_ca_state) & (VAR_2 | VAR_1));
}
