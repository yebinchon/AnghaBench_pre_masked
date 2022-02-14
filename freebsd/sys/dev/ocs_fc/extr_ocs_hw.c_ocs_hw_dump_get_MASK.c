
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_24__ {struct TYPE_24__* mbox_cmd; void* arg; int cb; } ;
typedef TYPE_2__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_23__ {int virt; } ;
struct TYPE_26__ {TYPE_1__ bmbx; } ;
struct TYPE_25__ {scalar_t__ state; int os; TYPE_5__ sli; } ;
typedef TYPE_3__ ocs_hw_t ;
typedef scalar_t__ ocs_hw_rtn_e ;
typedef int ocs_hw_dump_get_cb_t ;
typedef TYPE_2__ ocs_hw_dump_get_cb_arg_t ;
typedef int ocs_dma_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int ,TYPE_2__*,int) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int ,TYPE_2__*,TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,TYPE_2__*,scalar_t__,scalar_t__ (*) (TYPE_3__*,int ,TYPE_2__*,TYPE_2__*),TYPE_2__*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*) ;
 TYPE_2__* FUNC_5 (int ,int,int) ;
 int FUNC_6 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_7 (TYPE_5__*,TYPE_2__*,int,scalar_t__,scalar_t__,char*,int *) ;
 int FUNC_8 (TYPE_5__*) ;
 scalar_t__ FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (TYPE_5__*) ;

ocs_hw_rtn_e
FUNC_11(ocs_hw_t *VAR_10, ocs_dma_t *VAR_11, uint32_t VAR_12, uint32_t VAR_13, ocs_hw_dump_get_cb_t VAR_14, void *VAR_15)
{
 ocs_hw_rtn_e VAR_16 = VAR_2;
 uint8_t *VAR_17;
 ocs_hw_dump_get_cb_arg_t *VAR_18;
 uint32_t VAR_19 = (VAR_10->state == VAR_5 ? VAR_0 : VAR_1);

 if (VAR_9 != FUNC_9(&VAR_10->sli)) {
  FUNC_4(VAR_10->os, "Function only supported for I/F type 2\n");
  return VAR_2;
 }

 if (1 != FUNC_8(&VAR_10->sli)) {
  FUNC_4(VAR_10->os, "No dump is present\n");
  return VAR_2;
 }

 if (1 == FUNC_10(&VAR_10->sli)) {
  FUNC_4(VAR_10->os, "device reset required\n");
  return VAR_2;
 }

 VAR_17 = FUNC_5(VAR_10->os, VAR_8, VAR_7 | VAR_6);
 if (VAR_17 == ((void*)0)) {
  FUNC_3(VAR_10->os, "failed to malloc mbox\n");
  return VAR_3;
 }

 VAR_18 = FUNC_5(VAR_10->os, sizeof(ocs_hw_dump_get_cb_arg_t), VAR_6);
 if (VAR_18 == ((void*)0)) {
  FUNC_3(VAR_10->os, "failed to malloc cb_arg\n");
  FUNC_0(VAR_10->os, VAR_17, VAR_8);
  return VAR_3;
 }

 VAR_18->cb = VAR_14;
 VAR_18->arg = VAR_15;
 VAR_18->mbox_cmd = VAR_17;

 if (FUNC_7(&VAR_10->sli, VAR_17, VAR_8,
   VAR_12, VAR_13, "/dbg/dump.bin", VAR_11)) {
  VAR_16 = FUNC_2(VAR_10, VAR_17, VAR_19, FUNC_1, VAR_18);
  if (VAR_16 == 0 && VAR_19 == VAR_1) {
   FUNC_6(VAR_17, VAR_10->sli.bmbx.virt, VAR_8);
   VAR_16 = FUNC_1(VAR_10, 0, VAR_17, VAR_18);
  }
 }

 if (VAR_16 != VAR_4) {
  FUNC_4(VAR_10->os, "COMMON_READ_OBJECT failed\n");
  FUNC_0(VAR_10->os, VAR_17, VAR_8);
  FUNC_0(VAR_10->os, VAR_18, sizeof(ocs_hw_dump_get_cb_arg_t));
 }

 return VAR_16;
}
