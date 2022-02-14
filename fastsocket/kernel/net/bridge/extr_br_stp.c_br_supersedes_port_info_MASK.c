
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_bridge_port {scalar_t__ designated_cost; scalar_t__ designated_port; TYPE_1__* br; int designated_bridge; int designated_root; } ;
struct br_config_bpdu {scalar_t__ root_path_cost; scalar_t__ port_id; int bridge_id; int root; } ;
struct TYPE_2__ {int bridge_id; } ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static int FUNC_1(struct net_bridge_port *VAR_0, struct br_config_bpdu *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(&VAR_1->root, &VAR_0->designated_root, 8);
 if (VAR_2 < 0)
  return 1;
 else if (VAR_2 > 0)
  return 0;

 if (VAR_1->root_path_cost < VAR_0->designated_cost)
  return 1;
 else if (VAR_1->root_path_cost > VAR_0->designated_cost)
  return 0;

 VAR_2 = FUNC_0(&VAR_1->bridge_id, &VAR_0->designated_bridge, 8);
 if (VAR_2 < 0)
  return 1;
 else if (VAR_2 > 0)
  return 0;

 if (FUNC_0(&VAR_1->bridge_id, &VAR_0->br->bridge_id, 8))
  return 1;

 if (VAR_1->port_id <= VAR_0->designated_port)
  return 1;

 return 0;
}
