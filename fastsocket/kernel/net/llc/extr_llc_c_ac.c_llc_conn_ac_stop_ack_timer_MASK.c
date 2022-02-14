
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {int timer; } ;
struct TYPE_4__ {TYPE_1__ ack_timer; } ;


 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (struct sock*) ;

int FUNC_2(struct sock *VAR_0, struct sk_buff *VAR_1)
{
 FUNC_0(&FUNC_1(VAR_0)->ack_timer.timer);
 return 0;
}
