
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {struct TYPE_10__* ocs; int node_group_lock; int node_group_list_count; int node_group_list; int display_name; struct TYPE_10__* sport; } ;
typedef TYPE_1__ ocs_sport_t ;
struct TYPE_11__ {int instance_index; TYPE_1__* node_group_dir; } ;
typedef TYPE_2__ ocs_remote_node_group_t ;
typedef TYPE_1__ ocs_node_group_dir_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*,int) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,char*,int ,int ) ;
 int FUNC_5 (int *) ;

void
FUNC_6(ocs_remote_node_group_t *VAR_0)
{
 ocs_sport_t *VAR_1;
 ocs_node_group_dir_t *VAR_2;

 if (VAR_0 != ((void*)0)) {

  FUNC_0(VAR_0->node_group_dir);
  FUNC_0(VAR_0->node_group_dir->sport);
  FUNC_0(VAR_0->node_group_dir->sport->ocs);

  VAR_2 = VAR_0->node_group_dir;
  VAR_1 = VAR_2->sport;

  FUNC_4(VAR_1->ocs, "[%s] [%d] freeing node group\n", VAR_1->display_name, VAR_0->instance_index);


  FUNC_3(&VAR_1->node_group_lock);
   FUNC_2(&VAR_2->node_group_list, VAR_0);
   VAR_2->node_group_list_count --;


  FUNC_5(&VAR_1->node_group_lock);
  FUNC_1(VAR_1->ocs, VAR_0, sizeof(*VAR_0));
 }
}
