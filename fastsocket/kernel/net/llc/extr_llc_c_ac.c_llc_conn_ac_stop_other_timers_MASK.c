
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_6__ {int timer; } ;
struct TYPE_5__ {int timer; } ;
struct TYPE_4__ {int timer; } ;
struct llc_sock {scalar_t__ ack_pf; scalar_t__ ack_must_be_send; TYPE_3__ busy_state_timer; TYPE_2__ pf_cycle_timer; TYPE_1__ rej_sent_timer; } ;


 int FUNC_0 (int *) ;
 struct llc_sock* FUNC_1 (struct sock*) ;

int FUNC_2(struct sock *VAR_0, struct sk_buff *VAR_1)
{
 struct llc_sock *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(&VAR_2->rej_sent_timer.timer);
 FUNC_0(&VAR_2->pf_cycle_timer.timer);
 FUNC_0(&VAR_2->busy_state_timer.timer);
 VAR_2->ack_must_be_send = 0;
 VAR_2->ack_pf = 0;
 return 0;
}
