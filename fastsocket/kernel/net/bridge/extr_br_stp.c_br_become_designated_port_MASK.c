
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge_port {int port_id; int designated_port; int designated_bridge; int designated_cost; int designated_root; struct net_bridge* br; } ;
struct net_bridge {int bridge_id; int root_path_cost; int designated_root; } ;



void FUNC_0(struct net_bridge_port *VAR_0)
{
 struct net_bridge *VAR_1;

 VAR_1 = VAR_0->br;
 VAR_0->designated_root = VAR_1->designated_root;
 VAR_0->designated_cost = VAR_1->root_path_cost;
 VAR_0->designated_bridge = VAR_1->bridge_id;
 VAR_0->designated_port = VAR_0->port_id;
}
