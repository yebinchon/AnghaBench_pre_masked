
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge_port {int multicast_router; int rlist; int multicast_router_timer; struct net_bridge* br; } ;
struct net_bridge {int multicast_lock; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_0)
{
 struct net_bridge_port *VAR_1 = (void *)VAR_0;
 struct net_bridge *VAR_2 = VAR_1->br;

 FUNC_2(&VAR_2->multicast_lock);
 if (VAR_1->multicast_router != 1 ||
     FUNC_4(&VAR_1->multicast_router_timer) ||
     FUNC_1(&VAR_1->rlist))
  goto out;

 FUNC_0(&VAR_1->rlist);

out:
 FUNC_3(&VAR_2->multicast_lock);
}
