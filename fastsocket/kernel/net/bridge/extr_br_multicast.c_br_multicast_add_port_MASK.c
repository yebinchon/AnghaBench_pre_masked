
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge_port {int multicast_router; int multicast_query_timer; int multicast_router_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,unsigned long) ;

void FUNC_1(struct net_bridge_port *VAR_2)
{
 VAR_2->multicast_router = 1;

 FUNC_0(&VAR_2->multicast_router_timer, VAR_1,
      (unsigned long)VAR_2);
 FUNC_0(&VAR_2->multicast_query_timer,
      VAR_0, (unsigned long)VAR_2);
}
