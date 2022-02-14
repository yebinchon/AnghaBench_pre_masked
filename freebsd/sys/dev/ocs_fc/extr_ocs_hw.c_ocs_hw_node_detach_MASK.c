
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
struct TYPE_9__ {size_t index; int fc_id; int indicator; int free_group; scalar_t__ node_group; int attached; scalar_t__ sport; } ;
typedef TYPE_2__ ocs_remote_node_t ;
struct TYPE_10__ {int os; int sli; TYPE_1__* rpi_ref; } ;
typedef TYPE_3__ ocs_hw_t ;
typedef scalar_t__ ocs_hw_rtn_e ;
struct TYPE_8__ {int rpi_count; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 size_t FUNC_0 (int *,int) ;
 int FUNC_1 (int ,int *,int ) ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (TYPE_3__*,int *,int ,int ,TYPE_2__*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ,char*,size_t) ;
 int * FUNC_6 (int ,int ,int ) ;
 scalar_t__ FUNC_7 (int *,int *,int ,int ,int ,size_t) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;

ocs_hw_rtn_e
FUNC_10(ocs_hw_t *VAR_12, ocs_remote_node_t *VAR_13)
{
 uint8_t *VAR_14 = ((void*)0);
 ocs_hw_rtn_e VAR_15 = VAR_5;
 uint32_t VAR_16 = VAR_10;

 if (!VAR_12 || !VAR_13) {
  FUNC_4(((void*)0), "bad parameter(s) hw=%p rnode=%p\n",
       VAR_12, VAR_13);
  return VAR_2;
 }




 if (FUNC_8(&VAR_12->sli) > 0) {
  FUNC_3(VAR_12->os, "Chip is in an error state - reset needed\n");
  return VAR_2;
 }

 VAR_16 = VAR_13->index;

 if (VAR_13->sport) {
  uint32_t VAR_17 = 0;
  uint32_t VAR_18;

  if (!VAR_13->attached) {
   return VAR_5;
  }

  VAR_14 = FUNC_6(VAR_12->os, VAR_7, VAR_6);
  if (!VAR_14) {
   FUNC_4(VAR_12->os, "no buffer for command\n");
   return VAR_3;
  }

  VAR_17 = FUNC_0(&VAR_12->rpi_ref[VAR_16].rpi_count, 1);

  if (VAR_17 <= 1) {


   VAR_18 = VAR_10;
   VAR_13->node_group = VAR_0;
   VAR_13->free_group = VAR_9;
  } else {
   if (FUNC_9(&VAR_12->sli) == VAR_0) {
    FUNC_5(VAR_12->os, "Invalid count with HLM disabled, count=%d\n",
      VAR_17);
   }
   VAR_18 = VAR_13->fc_id & 0x00ffffff;
  }

  VAR_15 = VAR_2;

  if (FUNC_7(&VAR_12->sli, VAR_14, VAR_7, VAR_13->indicator,
     VAR_8, VAR_18)) {
   VAR_15 = FUNC_2(VAR_12, VAR_14, VAR_1, VAR_11, VAR_13);
  }

  if (VAR_15 != VAR_4) {
   FUNC_4(VAR_12->os, "UNREG_RPI failed\n");
   FUNC_1(VAR_12->os, VAR_14, VAR_7);
   VAR_15 = VAR_2;
  }
 }

 return VAR_15;
}
