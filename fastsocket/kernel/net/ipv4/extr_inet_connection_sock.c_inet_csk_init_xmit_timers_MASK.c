
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_timer; } ;
struct TYPE_2__ {scalar_t__ pending; } ;
struct inet_connection_sock {TYPE_1__ icsk_ack; scalar_t__ icsk_pending; int icsk_delack_timer; int icsk_retransmit_timer; } ;


 struct inet_connection_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (int *,void (*) (unsigned long),unsigned long) ;

void FUNC_2(struct sock *VAR_0,
          void (*VAR_1)(unsigned long),
          void (*VAR_2)(unsigned long),
          void (*VAR_3)(unsigned long))
{
 struct inet_connection_sock *VAR_4 = FUNC_0(VAR_0);

 FUNC_1(&VAR_4->icsk_retransmit_timer, VAR_1,
   (unsigned long)VAR_0);
 FUNC_1(&VAR_4->icsk_delack_timer, VAR_2,
   (unsigned long)VAR_0);
 FUNC_1(&VAR_0->sk_timer, VAR_3, (unsigned long)VAR_0);
 VAR_4->icsk_pending = VAR_4->icsk_ack.pending = 0;
}
