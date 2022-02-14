
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge_port {scalar_t__ port_no; struct net_bridge* br; } ;
struct net_bridge {scalar_t__ root_port; scalar_t__ bridge_hello_time; int tcn_timer; int topology_change_timer; scalar_t__ topology_change_detected; int hello_timer; } ;
struct br_config_bpdu {scalar_t__ topology_change_ack; } ;


 int FUNC_0 (struct net_bridge*) ;
 int FUNC_1 (struct net_bridge*) ;
 scalar_t__ FUNC_2 (struct net_bridge_port*) ;
 int FUNC_3 (struct net_bridge*) ;
 int FUNC_4 (struct net_bridge*) ;
 int FUNC_5 (struct net_bridge_port*,struct br_config_bpdu*) ;
 int FUNC_6 (struct net_bridge*,struct br_config_bpdu*) ;
 int FUNC_7 (struct net_bridge_port*) ;
 scalar_t__ FUNC_8 (struct net_bridge_port*,struct br_config_bpdu*) ;
 int FUNC_9 (struct net_bridge*) ;
 int FUNC_10 (struct net_bridge*) ;
 int FUNC_11 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_12 (int *,scalar_t__) ;

void FUNC_13(struct net_bridge_port *VAR_1, struct br_config_bpdu *VAR_2)
{
 struct net_bridge *VAR_3;
 int VAR_4;

 VAR_3 = VAR_1->br;
 VAR_4 = FUNC_3(VAR_3);

 if (FUNC_8(VAR_1, VAR_2)) {
  FUNC_5(VAR_1, VAR_2);
  FUNC_1(VAR_3);
  FUNC_4(VAR_3);

  if (!FUNC_3(VAR_3) && VAR_4) {
   FUNC_11(&VAR_3->hello_timer);
   if (VAR_3->topology_change_detected) {
    FUNC_11(&VAR_3->topology_change_timer);
    FUNC_10(VAR_3);

    FUNC_12(&VAR_3->tcn_timer,
       VAR_0 + VAR_3->bridge_hello_time);
   }
  }

  if (VAR_1->port_no == VAR_3->root_port) {
   FUNC_6(VAR_3, VAR_2);
   FUNC_0(VAR_3);
   if (VAR_2->topology_change_ack)
    FUNC_9(VAR_3);
  }
 } else if (FUNC_2(VAR_1)) {
  FUNC_7(VAR_1);
 }
}
