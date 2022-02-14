
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p2p_group_config {int cb_ctx; int (* idle_update ) (int ,int) ;} ;
struct p2p_group {int group_formation; int beacon_update; struct p2p_group_config* cfg; struct p2p_data* p2p; } ;
struct p2p_data {struct p2p_group** groups; scalar_t__ num_groups; } ;


 int FUNC_0 (struct p2p_group*) ;
 struct p2p_group** FUNC_1 (struct p2p_group**,scalar_t__,int) ;
 struct p2p_group* FUNC_2 (int) ;
 int FUNC_3 (struct p2p_group*) ;
 int FUNC_4 (int ,int) ;

struct p2p_group * FUNC_5(struct p2p_data *VAR_0,
      struct p2p_group_config *VAR_1)
{
 struct p2p_group *VAR_2, **VAR_3;

 VAR_2 = FUNC_2(sizeof(*VAR_2));
 if (VAR_2 == ((void*)0))
  return ((void*)0);

 VAR_3 = FUNC_1(VAR_0->groups, VAR_0->num_groups + 1,
      sizeof(struct p2p_group *));
 if (VAR_3 == ((void*)0)) {
  FUNC_0(VAR_2);
  return ((void*)0);
 }
 VAR_3[VAR_0->num_groups++] = VAR_2;
 VAR_0->groups = VAR_3;

 VAR_2->p2p = VAR_0;
 VAR_2->cfg = VAR_1;
 VAR_2->group_formation = 1;
 VAR_2->beacon_update = 1;
 FUNC_3(VAR_2);
 VAR_2->cfg->idle_update(VAR_2->cfg->cb_ctx, 1);

 return VAR_2;
}
