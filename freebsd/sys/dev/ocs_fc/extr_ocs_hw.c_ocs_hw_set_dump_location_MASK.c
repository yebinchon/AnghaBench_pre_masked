
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct TYPE_13__ {int last; int buffer_length; int buffer_address_low; int buffer_address_high; } ;
typedef TYPE_2__ sli4_sge_t ;
struct TYPE_15__ {int size; int len; int phys; TYPE_2__* virt; } ;
struct TYPE_12__ {scalar_t__ disable_dump_loc; } ;
struct TYPE_14__ {int os; int sli; TYPE_4__ dump_sges; TYPE_1__ workaround; } ;
typedef TYPE_3__ ocs_hw_t ;
typedef scalar_t__ ocs_hw_rtn_e ;
typedef TYPE_4__ ocs_dma_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,TYPE_4__*,int,int ) ;
 int FUNC_3 (int ,TYPE_4__*) ;
 int FUNC_4 (int ,scalar_t__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,scalar_t__*,int ,int *,int *) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_9 (int *,void*,int,int ,int ,TYPE_4__*,scalar_t__) ;

ocs_hw_rtn_e
FUNC_10(ocs_hw_t *VAR_8, uint32_t VAR_9, ocs_dma_t *VAR_10, uint8_t VAR_11)
{
 uint8_t VAR_12, VAR_13, VAR_14;
 ocs_hw_rtn_e VAR_15 = VAR_4;
 uint8_t VAR_16[VAR_6];





 if (VAR_8->workaround.disable_dump_loc) {
  FUNC_7(VAR_8->os, "FW version is too old for this feature\n");
  return VAR_2;
 }


 FUNC_4(VAR_8->os, &VAR_12, &VAR_13, &VAR_14);
 if (VAR_11 == 0 && VAR_14 != 0) {
  FUNC_7(VAR_8->os, "function only valid for pci function 0, %d passed\n",
        VAR_14);
  return VAR_2;
 }





 if (VAR_9 > 1) {
  uint32_t VAR_17 = VAR_9 * sizeof(sli4_sge_t);
  sli4_sge_t *VAR_18;
  uint32_t VAR_19;

  if (VAR_8->dump_sges.size < VAR_17) {
   FUNC_3(VAR_8->os, &VAR_8->dump_sges);
   if (FUNC_2(VAR_8->os, &VAR_8->dump_sges, VAR_17, VAR_5)) {
    FUNC_6(VAR_8->os, "SGE DMA allocation failed\n");
    return VAR_3;
   }
  }

  FUNC_8(VAR_8->dump_sges.virt, 0, VAR_8->dump_sges.size);
  VAR_8->dump_sges.len = VAR_17;
  VAR_18 = VAR_8->dump_sges.virt;
  for (VAR_19 = 0; VAR_19 < VAR_9; VAR_19++) {
   VAR_18[VAR_19].buffer_address_high = FUNC_0(VAR_10[VAR_19].phys);
   VAR_18[VAR_19].buffer_address_low = FUNC_1(VAR_10[VAR_19].phys);
   VAR_18[VAR_19].last = (VAR_19 == VAR_9 - 1 ? 1 : 0);
   VAR_18[VAR_19].buffer_length = VAR_10[VAR_19].size;
  }
  VAR_15 = FUNC_9(&VAR_8->sli, (void *)VAR_16,
            VAR_6, VAR_0, VAR_7,
            &VAR_8->dump_sges, VAR_11);
 } else {
  VAR_10->len = VAR_10->size;
  VAR_15 = FUNC_9(&VAR_8->sli, (void *)VAR_16,
            VAR_6, VAR_0, VAR_0,
            VAR_10, VAR_11);
 }

 if (VAR_15) {
  VAR_15 = FUNC_5(VAR_8, VAR_16, VAR_1,
         ((void*)0), ((void*)0));
  if (VAR_15) {
   FUNC_6(VAR_8->os, "ocs_hw_command returns %d\n",
    VAR_15);
  }
 } else {
  FUNC_6(VAR_8->os,
   "sli_cmd_common_set_dump_location failed\n");
  VAR_15 = VAR_2;
 }

 return VAR_15;
}
