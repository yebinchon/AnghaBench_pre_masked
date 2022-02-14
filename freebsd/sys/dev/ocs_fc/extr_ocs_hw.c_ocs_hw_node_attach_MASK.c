
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_16__ {size_t index; TYPE_1__* sport; int indicator; int fc_id; scalar_t__ node_group; scalar_t__ attached; } ;
typedef TYPE_4__ ocs_remote_node_t ;
struct TYPE_14__ {scalar_t__ auto_xfer_rdy_t10_enable; } ;
struct TYPE_17__ {int os; TYPE_3__* rpi_ref; TYPE_2__ config; scalar_t__ auto_xfer_rdy_enabled; int sli; } ;
typedef TYPE_5__ ocs_hw_t ;
typedef scalar_t__ ocs_hw_rtn_e ;
struct TYPE_18__ {int virt; } ;
typedef TYPE_6__ ocs_dma_t ;
struct TYPE_15__ {int rpi_count; int rpi_attached; } ;
struct TYPE_13__ {int indicator; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 size_t VAR_9 ;
 scalar_t__ FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (char*,char*,int ,int *,int ) ;
 int FUNC_4 (int ,int *,int ) ;
 int VAR_10 ;
 scalar_t__ FUNC_5 (TYPE_5__*,int *,int ,int ,TYPE_4__*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (int ,char*,scalar_t__,scalar_t__) ;
 int * FUNC_9 (int ,int ,int ) ;
 scalar_t__ FUNC_10 (int *,int *,int ,int ,int ,int ,TYPE_6__*,int ,int) ;
 scalar_t__ FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;

ocs_hw_rtn_e
FUNC_13(ocs_hw_t *VAR_11, ocs_remote_node_t *VAR_12, ocs_dma_t *VAR_13)
{
 ocs_hw_rtn_e VAR_14 = VAR_2;
 uint8_t *VAR_15 = ((void*)0);
 uint32_t VAR_16 = 0;

 if (!VAR_11 || !VAR_12 || !VAR_13) {
  FUNC_7(((void*)0), "bad parameter(s) hw=%p rnode=%p sparms=%p\n",
       VAR_11, VAR_12, VAR_13);
  return VAR_2;
 }




 if (FUNC_11(&VAR_11->sli) > 0) {
  FUNC_6(VAR_11->os, "Chip is in an error state - reset needed\n");
  return VAR_2;
 }

 VAR_15 = FUNC_9(VAR_11->os, VAR_7, VAR_6);
 if (!VAR_15) {
  FUNC_7(VAR_11->os, "no buffer for command\n");
  return VAR_3;
 }





 if (VAR_12->index == VAR_9) {
  FUNC_7(((void*)0), "bad parameter rnode->index invalid\n");
  FUNC_4(VAR_11->os, VAR_15, VAR_7);
  return VAR_2;
 }
 VAR_16 = FUNC_0(&VAR_11->rpi_ref[VAR_12->index].rpi_count, 1);
 if (VAR_16) {




  if (FUNC_12(&VAR_11->sli) == VAR_0) {
   FUNC_8(VAR_11->os, "attach to already attached node HLM=%d count=%d\n",
     FUNC_12(&VAR_11->sli), VAR_16);
   VAR_14 = VAR_4;
  } else {
   VAR_12->node_group = VAR_8;
   VAR_12->attached = FUNC_1(&VAR_11->rpi_ref[VAR_12->index].rpi_attached);
   VAR_14 = VAR_12->attached ? VAR_5 : VAR_4;
  }
 } else {
  VAR_12->node_group = VAR_0;

  FUNC_3("", "reg rpi", 0, ((void*)0), VAR_13->virt);
  if (FUNC_10(&VAR_11->sli, VAR_15, VAR_7, VAR_12->fc_id,
     VAR_12->indicator, VAR_12->sport->indicator,
     VAR_13, 0, (VAR_11->auto_xfer_rdy_enabled && VAR_11->config.auto_xfer_rdy_t10_enable))) {
   VAR_14 = FUNC_5(VAR_11, VAR_15, VAR_1,
     VAR_10, VAR_12);
  }
 }

 if (VAR_16 || VAR_14) {
  if (VAR_14 < VAR_4) {
   FUNC_2(&VAR_11->rpi_ref[VAR_12->index].rpi_count, 1);
   FUNC_7(VAR_11->os, "%s error\n", VAR_16 ? "HLM" : "REG_RPI");
  }
  FUNC_4(VAR_11->os, VAR_15, VAR_7);
 }

 return VAR_14;
}
