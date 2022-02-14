
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge_port {int multicast_router; int multicast_router_timer; int rlist; } ;
struct net_bridge {int multicast_router; scalar_t__ multicast_querier_interval; int multicast_router_timer; } ;


 int FUNC_0 (struct net_bridge*,struct net_bridge_port*) ;
 int FUNC_1 (int *) ;
 unsigned long VAR_0 ;
 int FUNC_2 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct net_bridge *VAR_1,
         struct net_bridge_port *VAR_2)
{
 unsigned long VAR_3 = VAR_0;

 if (!VAR_2) {
  if (VAR_1->multicast_router == 1)
   FUNC_2(&VAR_1->multicast_router_timer,
      VAR_3 + VAR_1->multicast_querier_interval);
  return;
 }

 if (VAR_2->multicast_router != 1)
  return;

 if (!FUNC_1(&VAR_2->rlist))
  goto timer;

 FUNC_0(VAR_1, VAR_2);

timer:
 FUNC_2(&VAR_2->multicast_router_timer,
    VAR_3 + VAR_1->multicast_querier_interval);
}
