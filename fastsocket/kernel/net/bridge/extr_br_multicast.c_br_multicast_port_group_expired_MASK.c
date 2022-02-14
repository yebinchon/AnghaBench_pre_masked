
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_bridge_port_group {int mglist; int timer; TYPE_1__* port; } ;
struct net_bridge {int multicast_lock; int dev; } ;
struct TYPE_2__ {struct net_bridge* br; } ;


 int FUNC_0 (struct net_bridge*,struct net_bridge_port_group*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_0)
{
 struct net_bridge_port_group *VAR_1 = (void *)VAR_0;
 struct net_bridge *VAR_2 = VAR_1->port->br;

 FUNC_3(&VAR_2->multicast_lock);
 if (!FUNC_2(VAR_2->dev) || FUNC_5(&VAR_1->timer) ||
     FUNC_1(&VAR_1->mglist))
  goto out;

 FUNC_0(VAR_2, VAR_1);

out:
 FUNC_4(&VAR_2->multicast_lock);
}
