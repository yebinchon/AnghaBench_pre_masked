
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcp_sock {scalar_t__ rcv_nxt; scalar_t__ rcv_wup; scalar_t__ rcv_wnd; int out_of_order_queue; } ;
struct sock {int dummy; } ;
struct TYPE_3__ {scalar_t__ rcv_mss; } ;
struct TYPE_4__ {TYPE_1__ icsk_ack; } ;


 scalar_t__ FUNC_0 (struct sock*) ;
 TYPE_2__* FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 struct tcp_sock* FUNC_6 (struct sock*) ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_0, int VAR_1)
{
 struct tcp_sock *VAR_2 = FUNC_6(VAR_0);


 if (((VAR_2->rcv_nxt - VAR_2->rcv_wup) > FUNC_1(VAR_0)->icsk_ack.rcv_mss



      && FUNC_0(VAR_0) >= VAR_2->rcv_wnd) ||

     FUNC_3(VAR_0) ||

     (VAR_1 && FUNC_2(&VAR_2->out_of_order_queue))) {

  FUNC_4(VAR_0);
 } else {

  FUNC_5(VAR_0);
 }
}
