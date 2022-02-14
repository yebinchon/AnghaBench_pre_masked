
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge_port {scalar_t__ config_pending; scalar_t__ topology_change_ack; int state; int port_no; int priority; int port_id; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_bridge_port*) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(struct net_bridge_port *VAR_1)
{
 VAR_1->port_id = FUNC_1(VAR_1->priority, VAR_1->port_no);
 FUNC_0(VAR_1);
 VAR_1->state = VAR_0;
 VAR_1->topology_change_ack = 0;
 VAR_1->config_pending = 0;
}
