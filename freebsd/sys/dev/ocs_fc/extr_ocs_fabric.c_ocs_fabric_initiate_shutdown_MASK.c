
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int hw; } ;
typedef TYPE_1__ ocs_t ;
struct TYPE_10__ {scalar_t__ free_group; } ;
struct TYPE_9__ {TYPE_5__ rnode; int * node_group; scalar_t__ attached; TYPE_1__* ocs; } ;
typedef TYPE_2__ ocs_node_t ;
typedef scalar_t__ ocs_hw_rtn_e ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,TYPE_5__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_5(ocs_node_t *VAR_3)
{
 ocs_hw_rtn_e VAR_4;
 ocs_t *VAR_5 = VAR_3->ocs;
 FUNC_4(VAR_3);

 if (VAR_3->attached) {




  VAR_4 = FUNC_1(&VAR_5->hw, &VAR_3->rnode);
  if (VAR_3->rnode.free_group) {
   FUNC_3(VAR_3->node_group);
   VAR_3->node_group = ((void*)0);
   VAR_3->rnode.free_group = VAR_0;
  }
  if (VAR_4 != VAR_1 && VAR_4 != VAR_2) {
   FUNC_0(VAR_3, "Failed freeing HW node, rc=%d\n", VAR_4);
  }
 }




 FUNC_2(VAR_3);
}
