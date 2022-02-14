
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcp_sock {scalar_t__ rcv_ssthresh; scalar_t__ window_clamp; int advmss; } ;
struct sock {int dummy; } ;
struct sk_buff {scalar_t__ len; int truesize; } ;
struct TYPE_3__ {int quick; } ;
struct TYPE_4__ {TYPE_1__ icsk_ack; } ;


 int FUNC_0 (struct sock*,struct sk_buff*) ;
 TYPE_2__* FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int VAR_0 ;
 struct tcp_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_1, struct sk_buff *VAR_2)
{
 struct tcp_sock *VAR_3 = FUNC_3(VAR_1);


 if (VAR_3->rcv_ssthresh < VAR_3->window_clamp &&
     (int)VAR_3->rcv_ssthresh < FUNC_4(VAR_1) &&
     !VAR_0) {
  int VAR_4;




  if (FUNC_5(VAR_2->truesize) <= VAR_2->len)
   VAR_4 = 2 * VAR_3->advmss;
  else
   VAR_4 = FUNC_0(VAR_1, VAR_2);

  if (VAR_4) {
   VAR_3->rcv_ssthresh = FUNC_2(VAR_3->rcv_ssthresh + VAR_4,
            VAR_3->window_clamp);
   FUNC_1(VAR_1)->icsk_ack.quick |= 1;
  }
 }
}
