
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct p2p_group {scalar_t__ num_members; TYPE_1__* cfg; } ;
struct TYPE_2__ {scalar_t__ max_clients; } ;



int FUNC_0(struct p2p_group *VAR_0)
{
 if (!VAR_0 || !VAR_0->cfg)
  return 1;

 return VAR_0->num_members >= VAR_0->cfg->max_clients;
}
