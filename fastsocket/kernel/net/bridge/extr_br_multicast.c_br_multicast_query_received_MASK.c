
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge_port {int dummy; } ;
struct net_bridge {int multicast_querier_timer; scalar_t__ multicast_querier_interval; } ;


 int FUNC_0 (struct net_bridge*,struct net_bridge_port*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct net_bridge *VAR_1,
     struct net_bridge_port *VAR_2,
     int VAR_3)
{
 if (VAR_3)
  FUNC_1(&VAR_1->multicast_querier_timer,
     VAR_0 + VAR_1->multicast_querier_interval);
 else if (FUNC_2(&VAR_1->multicast_querier_timer))
  return;

 FUNC_0(VAR_1, VAR_2);
}
