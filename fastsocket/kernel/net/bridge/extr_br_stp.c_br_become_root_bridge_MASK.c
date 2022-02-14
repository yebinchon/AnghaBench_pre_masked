
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_bridge {scalar_t__ hello_time; int hello_timer; TYPE_1__* dev; int tcn_timer; int bridge_forward_delay; int forward_delay; scalar_t__ bridge_hello_time; int bridge_max_age; int max_age; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_bridge*) ;
 int FUNC_1 (struct net_bridge*) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int *,scalar_t__) ;

void FUNC_4(struct net_bridge *VAR_2)
{
 VAR_2->max_age = VAR_2->bridge_max_age;
 VAR_2->hello_time = VAR_2->bridge_hello_time;
 VAR_2->forward_delay = VAR_2->bridge_forward_delay;
 FUNC_1(VAR_2);
 FUNC_2(&VAR_2->tcn_timer);

 if (VAR_2->dev->flags & VAR_0) {
  FUNC_0(VAR_2);
  FUNC_3(&VAR_2->hello_timer, VAR_1 + VAR_2->hello_time);
 }
}
