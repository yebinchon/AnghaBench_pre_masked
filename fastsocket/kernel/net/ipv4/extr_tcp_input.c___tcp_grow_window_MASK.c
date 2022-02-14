
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcp_sock {int rcv_ssthresh; } ;
struct sock {int dummy; } ;
struct sk_buff {int len; int truesize; } ;
struct TYPE_3__ {int rcv_mss; } ;
struct TYPE_4__ {TYPE_1__ icsk_ack; } ;


 TYPE_2__* FUNC_0 (struct sock const*) ;
 int * VAR_0 ;
 struct tcp_sock* FUNC_1 (struct sock const*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(const struct sock *VAR_1, const struct sk_buff *VAR_2)
{
 struct tcp_sock *VAR_3 = FUNC_1(VAR_1);

 int VAR_4 = FUNC_2(VAR_2->truesize) >> 1;
 int VAR_5 = FUNC_2(VAR_0[2]) >> 1;

 while (VAR_3->rcv_ssthresh <= VAR_5) {
  if (VAR_4 <= VAR_2->len)
   return 2 * FUNC_0(VAR_1)->icsk_ack.rcv_mss;

  VAR_4 >>= 1;
  VAR_5 >>= 1;
 }
 return 0;
}
