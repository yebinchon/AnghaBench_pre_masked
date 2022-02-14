
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int node_group_lock; struct TYPE_16__* sport; int node_group_list_count; int node_group_list; int display_name; int hw; int node_group_next_instance; struct TYPE_16__* ocs; } ;
typedef TYPE_1__ ocs_t ;
typedef TYPE_1__ ocs_sport_t ;
struct TYPE_17__ {scalar_t__ instance_index; int indicator; TYPE_1__* node_group_dir; } ;
typedef TYPE_3__ ocs_remote_node_group_t ;
typedef TYPE_1__ ocs_node_group_dir_t ;
typedef scalar_t__ ocs_hw_rtn_e ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*,TYPE_3__*,int) ;
 scalar_t__ FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (int *,TYPE_3__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,char*,int ,int ,scalar_t__) ;
 int FUNC_6 (TYPE_1__*,char*,scalar_t__) ;
 TYPE_3__* FUNC_7 (TYPE_1__*,int,int) ;
 int FUNC_8 (int *) ;

ocs_remote_node_group_t *
FUNC_9(ocs_node_group_dir_t *VAR_3)
{
 ocs_t *VAR_4;
 ocs_sport_t *VAR_5;
 ocs_remote_node_group_t *VAR_6;
 ocs_hw_rtn_e VAR_7;

 FUNC_0(VAR_3, ((void*)0));
 FUNC_0(VAR_3->sport, ((void*)0));
 FUNC_0(VAR_3->sport->ocs, ((void*)0));

 VAR_5 = VAR_3->sport;
 VAR_4 = VAR_5->ocs;


 VAR_6 = FUNC_7(VAR_4, sizeof(*VAR_6), VAR_2 | VAR_1);
 if (VAR_6 != ((void*)0)) {


  VAR_6->node_group_dir = VAR_3;

  FUNC_4(&VAR_3->sport->node_group_lock);
   VAR_6->instance_index = VAR_5->node_group_next_instance++;
  FUNC_8(&VAR_3->sport->node_group_lock);


  VAR_7 = FUNC_2(&VAR_4->hw, VAR_6);
  if (VAR_7 != VAR_0) {
   FUNC_6(VAR_4, "ocs_hw_node_group_alloc() failed: %d\n", VAR_7);
   FUNC_1(VAR_4, VAR_6, sizeof(*VAR_6));
   return ((void*)0);
  }

  FUNC_5(VAR_4, "[%s] [%d] indicator x%03x allocating node group\n", VAR_5->display_name,
   VAR_6->indicator, VAR_6->instance_index);


  FUNC_4(&VAR_3->sport->node_group_lock);
   FUNC_3(&VAR_3->node_group_list, VAR_6);
   VAR_3->node_group_list_count ++;
  FUNC_8(&VAR_3->sport->node_group_lock);
 }
 return VAR_6;
}
