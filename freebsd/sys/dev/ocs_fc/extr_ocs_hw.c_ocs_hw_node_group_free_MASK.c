
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {size_t index; int indicator; } ;
typedef TYPE_2__ ocs_remote_node_group_t ;
struct TYPE_9__ {TYPE_1__* rpi_ref; int os; int sli; } ;
typedef TYPE_3__ ocs_hw_t ;
typedef int ocs_hw_rtn_e ;
struct TYPE_7__ {int rpi_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,char*,int,int ) ;
 int FUNC_3 (int ,char*,TYPE_3__*,...) ;
 scalar_t__ FUNC_4 (int *,int ,int ) ;

ocs_hw_rtn_e
FUNC_5(ocs_hw_t *VAR_4, ocs_remote_node_group_t *VAR_5)
{
 int VAR_6;

 if (!VAR_4 || !VAR_5) {
  FUNC_3(((void*)0), "bad parameter hw=%p ngroup=%p\n",
    VAR_4, VAR_5);
  return VAR_0;
 }

 VAR_6 = FUNC_0(&VAR_4->rpi_ref[VAR_5->index].rpi_count);
 if (VAR_6) {

  FUNC_2(VAR_4->os, "node group reference=%d (RPI=%#x)\n",
    VAR_6, VAR_5->indicator);

  if (FUNC_4(&VAR_4->sli, VAR_2, VAR_5->indicator)) {
   FUNC_3(VAR_4->os, "FCOE_RPI free failure RPI=%#x\n",
        VAR_5->indicator);
   return VAR_0;
  }

  FUNC_1(&VAR_4->rpi_ref[VAR_5->index].rpi_count, 0);
 }

 VAR_5->indicator = VAR_3;
 VAR_5->index = VAR_3;

 return VAR_1;
}
