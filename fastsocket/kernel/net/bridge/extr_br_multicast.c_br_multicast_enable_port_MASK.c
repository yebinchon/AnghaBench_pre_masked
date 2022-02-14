
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge_port {struct net_bridge* br; } ;
struct net_bridge {int multicast_lock; int dev; scalar_t__ multicast_disabled; } ;


 int FUNC_0 (struct net_bridge_port*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct net_bridge_port *VAR_0)
{
 struct net_bridge *VAR_1 = VAR_0->br;

 FUNC_2(&VAR_1->multicast_lock);
 if (VAR_1->multicast_disabled || !FUNC_1(VAR_1->dev))
  goto out;

 FUNC_0(VAR_0);

out:
 FUNC_3(&VAR_1->multicast_lock);
}
