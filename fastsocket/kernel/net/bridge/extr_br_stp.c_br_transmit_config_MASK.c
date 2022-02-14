
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ expires; } ;
struct net_bridge_port {int config_pending; int hold_timer; scalar_t__ topology_change_ack; TYPE_1__ message_age_timer; int port_id; struct net_bridge* br; } ;
struct net_bridge {scalar_t__ max_age; int forward_delay; int hello_time; int root_port; int bridge_id; int root_path_cost; int designated_root; int topology_change; } ;
struct br_config_bpdu {scalar_t__ message_age; scalar_t__ max_age; int forward_delay; int hello_time; int port_id; int bridge_id; int root_path_cost; int root; scalar_t__ topology_change_ack; int topology_change; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct net_bridge_port* FUNC_0 (struct net_bridge*,int ) ;
 scalar_t__ FUNC_1 (struct net_bridge*) ;
 int FUNC_2 (struct net_bridge_port*,struct br_config_bpdu*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int *) ;

void FUNC_6(struct net_bridge_port *VAR_3)
{
 struct br_config_bpdu VAR_4;
 struct net_bridge *VAR_5;


 if (FUNC_5(&VAR_3->hold_timer)) {
  VAR_3->config_pending = 1;
  return;
 }

 VAR_5 = VAR_3->br;

 VAR_4.topology_change = VAR_5->topology_change;
 VAR_4.topology_change_ack = VAR_3->topology_change_ack;
 VAR_4.root = VAR_5->designated_root;
 VAR_4.root_path_cost = VAR_5->root_path_cost;
 VAR_4.bridge_id = VAR_5->bridge_id;
 VAR_4.port_id = VAR_3->port_id;
 if (FUNC_1(VAR_5))
  VAR_4.message_age = 0;
 else {
  struct net_bridge_port *VAR_6
   = FUNC_0(VAR_5, VAR_5->root_port);
  VAR_4.message_age = VAR_5->max_age
   - (VAR_6->message_age_timer.expires - VAR_2)
   + VAR_1;
 }
 VAR_4.max_age = VAR_5->max_age;
 VAR_4.hello_time = VAR_5->hello_time;
 VAR_4.forward_delay = VAR_5->forward_delay;

 if (VAR_4.message_age < VAR_5->max_age) {
  FUNC_2(VAR_3, &VAR_4);
  VAR_3->topology_change_ack = 0;
  VAR_3->config_pending = 0;
  FUNC_3(&VAR_3->hold_timer,
     FUNC_4(VAR_2 + VAR_0));
 }
}
