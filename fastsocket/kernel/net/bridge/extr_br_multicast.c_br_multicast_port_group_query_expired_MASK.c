
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge_port_group {scalar_t__ queries_sent; int mglist; struct net_bridge_port* port; } ;
struct net_bridge_port {struct net_bridge* br; } ;
struct net_bridge {scalar_t__ multicast_last_member_count; int multicast_lock; int dev; } ;


 int FUNC_0 (struct net_bridge_port_group*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_0)
{
 struct net_bridge_port_group *VAR_1 = (void *)VAR_0;
 struct net_bridge_port *VAR_2 = VAR_1->port;
 struct net_bridge *VAR_3 = VAR_2->br;

 FUNC_3(&VAR_3->multicast_lock);
 if (!FUNC_2(VAR_3->dev) || FUNC_1(&VAR_1->mglist) ||
     VAR_1->queries_sent >= VAR_3->multicast_last_member_count)
  goto out;

 FUNC_0(VAR_1);

out:
 FUNC_4(&VAR_3->multicast_lock);
}
