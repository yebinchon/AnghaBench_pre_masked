
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_timer; } ;
struct TYPE_2__ {scalar_t__ blocked; scalar_t__ pending; } ;
struct inet_connection_sock {int icsk_delack_timer; int icsk_retransmit_timer; TYPE_1__ icsk_ack; scalar_t__ icsk_pending; } ;


 struct inet_connection_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*,int *) ;

void FUNC_2(struct sock *VAR_0)
{
 struct inet_connection_sock *VAR_1 = FUNC_0(VAR_0);

 VAR_1->icsk_pending = VAR_1->icsk_ack.pending = VAR_1->icsk_ack.blocked = 0;

 FUNC_1(VAR_0, &VAR_1->icsk_retransmit_timer);
 FUNC_1(VAR_0, &VAR_1->icsk_delack_timer);
 FUNC_1(VAR_0, &VAR_0->sk_timer);
}
