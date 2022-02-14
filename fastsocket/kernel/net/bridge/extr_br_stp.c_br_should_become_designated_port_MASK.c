
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge_port {scalar_t__ designated_cost; scalar_t__ port_id; scalar_t__ designated_port; int designated_bridge; int designated_root; struct net_bridge* br; } ;
struct net_bridge {scalar_t__ root_path_cost; int bridge_id; int designated_root; } ;


 scalar_t__ FUNC_0 (struct net_bridge_port const*) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static int FUNC_2(const struct net_bridge_port *VAR_0)
{
 struct net_bridge *VAR_1;
 int VAR_2;

 VAR_1 = VAR_0->br;
 if (FUNC_0(VAR_0))
  return 1;

 if (FUNC_1(&VAR_0->designated_root, &VAR_1->designated_root, 8))
  return 1;

 if (VAR_1->root_path_cost < VAR_0->designated_cost)
  return 1;
 else if (VAR_1->root_path_cost > VAR_0->designated_cost)
  return 0;

 VAR_2 = FUNC_1(&VAR_1->bridge_id, &VAR_0->designated_bridge, 8);
 if (VAR_2 < 0)
  return 1;
 else if (VAR_2 > 0)
  return 0;

 if (VAR_0->port_id < VAR_0->designated_port)
  return 1;

 return 0;
}
