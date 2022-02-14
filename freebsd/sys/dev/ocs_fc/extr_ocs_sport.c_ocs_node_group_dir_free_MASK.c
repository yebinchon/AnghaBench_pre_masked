
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ocs; int node_group_lock; int node_group_dir_list; int display_name; } ;
typedef TYPE_1__ ocs_sport_t ;
struct TYPE_7__ {int node_group_list; int instance_index; TYPE_1__* sport; } ;
typedef TYPE_2__ ocs_node_group_dir_t ;


 int FUNC_0 (int ,TYPE_2__*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,int ,int ) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (int *) ;

void
FUNC_7(ocs_node_group_dir_t *VAR_0)
{
 ocs_sport_t *VAR_1;
 if (VAR_0 != ((void*)0)) {
  VAR_1 = VAR_0->sport;
  FUNC_4(VAR_1->ocs, "[%s] [%d] freeing node group directory\n", VAR_1->display_name,
   VAR_0->instance_index);
  FUNC_3(&VAR_1->node_group_lock);
   if (!FUNC_1(&VAR_0->node_group_list)) {
    FUNC_5(VAR_1->ocs, "[%s] WARNING: node group list not empty\n", VAR_1->display_name);
   }
   FUNC_2(&VAR_1->node_group_dir_list, VAR_0);
  FUNC_6(&VAR_1->node_group_lock);
  FUNC_0(VAR_1->ocs, VAR_0, sizeof(*VAR_0));
 }
}
