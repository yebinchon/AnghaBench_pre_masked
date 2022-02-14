
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ time; scalar_t__ seq; } ;
struct tcp_sock {TYPE_1__ rcv_rtt_est; scalar_t__ rcv_wnd; scalar_t__ rcv_nxt; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct tcp_sock*,scalar_t__,int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline void FUNC_2(struct tcp_sock *VAR_2)
{
 if (VAR_2->rcv_rtt_est.time == 0)
  goto new_measure;
 if (FUNC_0(VAR_2->rcv_nxt, VAR_2->rcv_rtt_est.seq))
  return;
 FUNC_1(VAR_2, VAR_0 - VAR_2->rcv_rtt_est.time, 1);

new_measure:
 VAR_2->rcv_rtt_est.seq = VAR_2->rcv_nxt + VAR_2->rcv_wnd;
 VAR_2->rcv_rtt_est.time = VAR_1;
}
