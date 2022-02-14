
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_21__ {scalar_t__ status; int opts; int * dma_resp; void* arg; int cb; } ;
typedef TYPE_2__ uint8_t ;
typedef int uint32_t ;
struct TYPE_20__ {int virt; } ;
struct TYPE_23__ {TYPE_1__ bmbx; } ;
struct TYPE_22__ {int os; TYPE_5__ sli; } ;
typedef TYPE_3__ ocs_hw_t ;
typedef scalar_t__ ocs_hw_rtn_e ;
typedef int ocs_hw_dmtf_clp_cb_t ;
typedef TYPE_2__ ocs_hw_clp_cb_arg_t ;
typedef int ocs_dma_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,TYPE_2__*,int) ;
 scalar_t__ FUNC_1 (TYPE_3__*,TYPE_2__*,int ,int (*) (TYPE_3__*,int ,TYPE_2__*,TYPE_2__*),TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*,int ,TYPE_2__*,TYPE_2__*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*) ;
 TYPE_2__* FUNC_5 (int ,int,int) ;
 int FUNC_6 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_7 (TYPE_5__*,TYPE_2__*,int,int *,int *) ;

__attribute__((used)) static ocs_hw_rtn_e
FUNC_8(ocs_hw_t *VAR_7, ocs_dma_t *VAR_8, ocs_dma_t *VAR_9, uint32_t VAR_10, ocs_hw_dmtf_clp_cb_t VAR_11, void *VAR_12)
{
 ocs_hw_rtn_e VAR_13 = VAR_1;
 ocs_hw_clp_cb_arg_t *VAR_14;
 uint8_t *VAR_15;


 VAR_15 = FUNC_5(VAR_7->os, VAR_6, VAR_5 | VAR_4);
 if (VAR_15 == ((void*)0)) {
  FUNC_3(VAR_7->os, "failed to malloc mbox\n");
  return VAR_2;
 }


 VAR_14 = FUNC_5(VAR_7->os, sizeof(*VAR_14), VAR_4);
 if (VAR_14 == ((void*)0)) {
  FUNC_3(VAR_7->os, "failed to malloc cb_arg");
  FUNC_0(VAR_7->os, VAR_15, VAR_6);
  return VAR_2;
 }

 VAR_14->cb = VAR_11;
 VAR_14->arg = VAR_12;
 VAR_14->dma_resp = VAR_9;
 VAR_14->opts = VAR_10;


 if (FUNC_7(&VAR_7->sli, VAR_15, VAR_6,
          VAR_8, VAR_9)) {
  VAR_13 = FUNC_1(VAR_7, VAR_15, VAR_10, FUNC_2, VAR_14);

  if (VAR_10 == VAR_0 && VAR_13 == VAR_3) {


   FUNC_6(VAR_15, VAR_7->sli.bmbx.virt, VAR_6);
   FUNC_2(VAR_7, 0, VAR_15, VAR_14);


   VAR_13 = VAR_14->status;
  }


  if (VAR_10 == VAR_0 || VAR_13 != VAR_3) {
   if (VAR_13 != VAR_3) {
    FUNC_4(VAR_7->os, "ocs_hw_command failed\n");
   }
   FUNC_0(VAR_7->os, VAR_15, VAR_6);
   FUNC_0(VAR_7->os, VAR_14, sizeof(*VAR_14));
  }
 } else {
  FUNC_4(VAR_7->os, "sli_cmd_dmtf_exec_clp_cmd failed\n");
  VAR_13 = VAR_1;
  FUNC_0(VAR_7->os, VAR_15, VAR_6);
  FUNC_0(VAR_7->os, VAR_14, sizeof(*VAR_14));
 }

 return VAR_13;
}
