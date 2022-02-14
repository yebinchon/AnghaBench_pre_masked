
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int display_name; int ocs; int node_group_lock; int node_group_dir_list; int node_group_dir_next_instance; } ;
typedef TYPE_1__ ocs_sport_t ;
struct TYPE_8__ {scalar_t__ instance_index; scalar_t__ next_idx; scalar_t__ node_group_list_count; int node_group_list; int service_params; TYPE_1__* sport; } ;
typedef TYPE_2__ ocs_node_group_dir_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int *,int ) ;
 int VAR_3 ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,int ,scalar_t__) ;
 TYPE_2__* FUNC_5 (int ,int,int) ;
 int VAR_4 ;
 int FUNC_6 (int *) ;
 int VAR_5 ;

ocs_node_group_dir_t *
FUNC_7(ocs_sport_t *VAR_6, uint8_t *VAR_7)
{
 ocs_node_group_dir_t *VAR_8;

 VAR_8 = FUNC_5(VAR_6->ocs, sizeof(*VAR_8), VAR_1 | VAR_0);
 if (VAR_8 != ((void*)0)) {
  VAR_8->sport = VAR_6;

  FUNC_3(&VAR_6->node_group_lock);
   VAR_8->instance_index = VAR_6->node_group_dir_next_instance++;
   FUNC_0(VAR_8->service_params, VAR_7, (uint8_t*)&VAR_5, VAR_2);
   FUNC_2(&VAR_8->node_group_list, VAR_4, VAR_3);

   VAR_8->node_group_list_count = 0;
   VAR_8->next_idx = 0;
   FUNC_1(&VAR_6->node_group_dir_list, VAR_8);
  FUNC_6(&VAR_6->node_group_lock);

  FUNC_4(VAR_6->ocs, "[%s] [%d] allocating node group directory\n", VAR_6->display_name,
   VAR_8->instance_index);
 }
 return VAR_8;
}
