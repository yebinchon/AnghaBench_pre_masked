
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ expire; int timer; } ;
struct llc_sock {int remote_busy_flag; TYPE_1__ busy_state_timer; } ;


 scalar_t__ VAR_0 ;
 struct llc_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (int *,scalar_t__) ;

int FUNC_2(struct sock *VAR_1, struct sk_buff *VAR_2)
{
 struct llc_sock *VAR_3 = FUNC_0(VAR_1);

 if (!VAR_3->remote_busy_flag) {
  VAR_3->remote_busy_flag = 1;
  FUNC_1(&VAR_3->busy_state_timer.timer,
    VAR_0 + VAR_3->busy_state_timer.expire);
 }
 return 0;
}
