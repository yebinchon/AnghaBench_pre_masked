
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* indicator; void* free_group; void* index; void* node_group; int fc_id; int attached; scalar_t__ sport; } ;
typedef TYPE_1__ ocs_remote_node_t ;
struct TYPE_6__ {int os; int sli; } ;
typedef TYPE_2__ ocs_hw_t ;
typedef int ocs_hw_rtn_e ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (int *,int ,void*) ;

ocs_hw_rtn_e
FUNC_2(ocs_hw_t *VAR_5, ocs_remote_node_t *VAR_6)
{
 ocs_hw_rtn_e VAR_7 = VAR_2;

 if (!VAR_5 || !VAR_6) {
  FUNC_0(((void*)0), "bad parameter(s) hw=%p rnode=%p\n",
       VAR_5, VAR_6);
  return VAR_1;
 }

 if (VAR_6->sport) {
  if (!VAR_6->attached) {
   if (VAR_6->indicator != VAR_4) {
    if (FUNC_1(&VAR_5->sli, VAR_3, VAR_6->indicator)) {
     FUNC_0(VAR_5->os, "FCOE_RPI free failure RPI %d addr=%#x\n",
          VAR_6->indicator, VAR_6->fc_id);
     VAR_7 = VAR_1;
    } else {
     VAR_6->node_group = VAR_0;
     VAR_6->indicator = VAR_4;
     VAR_6->index = VAR_4;
     VAR_6->free_group = VAR_0;
    }
   }
  } else {
   FUNC_0(VAR_5->os, "Error: rnode is still attached\n");
   VAR_7 = VAR_1;
  }
 }

 return VAR_7;
}
