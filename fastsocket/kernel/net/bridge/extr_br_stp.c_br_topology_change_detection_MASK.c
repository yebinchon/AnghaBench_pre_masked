
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_bridge {scalar_t__ stp_enabled; int topology_change; int topology_change_detected; scalar_t__ bridge_hello_time; int tcn_timer; scalar_t__ bridge_max_age; scalar_t__ bridge_forward_delay; int topology_change_timer; TYPE_1__* dev; } ;
struct TYPE_2__ {int name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct net_bridge*) ;
 int FUNC_1 (struct net_bridge*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (char*,int ,char*) ;

void FUNC_4(struct net_bridge *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_2);

 if (VAR_2->stp_enabled != VAR_0)
  return;

 FUNC_3("%s: topology change detected, %s\n", VAR_2->dev->name,
  VAR_3 ? "propagating" : "sending tcn bpdu");

 if (VAR_3) {
  VAR_2->topology_change = 1;
  FUNC_2(&VAR_2->topology_change_timer, VAR_1
     + VAR_2->bridge_forward_delay + VAR_2->bridge_max_age);
 } else if (!VAR_2->topology_change_detected) {
  FUNC_1(VAR_2);
  FUNC_2(&VAR_2->tcn_timer, VAR_1 + VAR_2->bridge_hello_time);
 }

 VAR_2->topology_change_detected = 1;
}
