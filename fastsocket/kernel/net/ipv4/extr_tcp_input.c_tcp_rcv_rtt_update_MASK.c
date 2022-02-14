
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int rtt; } ;
struct tcp_sock {TYPE_1__ rcv_rtt_est; } ;



__attribute__((used)) static void FUNC_0(struct tcp_sock *VAR_0, u32 VAR_1, int VAR_2)
{
 u32 VAR_3 = VAR_0->rcv_rtt_est.rtt;
 long VAR_4 = VAR_1;

 if (VAR_4 == 0)
  VAR_4 = 1;

 if (VAR_3 != 0) {
  if (!VAR_2) {
   VAR_4 -= (VAR_3 >> 3);
   VAR_3 += VAR_4;
  } else if (VAR_4 < VAR_3)
   VAR_3 = VAR_4 << 3;
 } else {

  VAR_3 = VAR_4 << 3;
 }

 if (VAR_0->rcv_rtt_est.rtt != VAR_3)
  VAR_0->rcv_rtt_est.rtt = VAR_3;
}
