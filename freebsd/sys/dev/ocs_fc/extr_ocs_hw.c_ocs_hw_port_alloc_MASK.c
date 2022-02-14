
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int * ocs_sm_function_t ;
struct TYPE_8__ {TYPE_1__* app; } ;
struct TYPE_6__ {int indicator; TYPE_3__ ctx; int sli_wwpn; scalar_t__ sm_free_req_pending; TYPE_2__* hw; } ;
typedef TYPE_1__ ocs_sli_port_t ;
struct TYPE_7__ {int sli; int os; } ;
typedef TYPE_2__ ocs_hw_t ;
typedef scalar_t__ ocs_hw_rtn_e ;
typedef int ocs_domain_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 int * FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (TYPE_3__*,int *,int *) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int ,int *,int *) ;
 int FUNC_9 (int *,int ,int ) ;

ocs_hw_rtn_e
FUNC_10(ocs_hw_t *VAR_11, ocs_sli_port_t *VAR_12, ocs_domain_t *VAR_13,
  uint8_t *VAR_14)
{
 uint8_t *VAR_15 = ((void*)0);
 ocs_hw_rtn_e VAR_16 = VAR_2;
 uint32_t VAR_17;

 VAR_12->indicator = VAR_7;
 VAR_12->hw = VAR_11;
 VAR_12->ctx.app = VAR_12;
 VAR_12->sm_free_req_pending = 0;




 if (FUNC_7(&VAR_11->sli) > 0) {
  FUNC_1(VAR_11->os, "Chip is in an error state - reset needed\n");
  return VAR_0;
 }

 if (VAR_14) {
  FUNC_5(&VAR_12->sli_wwpn, VAR_14, sizeof(VAR_12->sli_wwpn));
 }

 if (FUNC_8(&VAR_11->sli, VAR_6, &VAR_12->indicator, &VAR_17)) {
  FUNC_2(VAR_11->os, "FCOE_VPI allocation failure\n");
  return VAR_0;
 }

 if (VAR_13 != ((void*)0)) {
  ocs_sm_function_t VAR_18 = ((void*)0);

  VAR_15 = FUNC_4(VAR_11->os, VAR_5, VAR_4 | VAR_3);
  if (!VAR_15) {
   FUNC_2(VAR_11->os, "command memory allocation failed\n");
   VAR_16 = VAR_1;
   goto ocs_hw_port_alloc_out;
  }




  if (!VAR_14) {
   VAR_18 = VAR_10;
  } else {
   VAR_18 = VAR_9;
  }

  FUNC_6(&VAR_12->ctx, VAR_18, VAR_15);
 } else if (!VAR_14) {

  FUNC_3(VAR_11->os, "need WWN for physical port\n");
  VAR_16 = VAR_0;
 } else {

  FUNC_6(&VAR_12->ctx, VAR_8, ((void*)0));
 }

ocs_hw_port_alloc_out:
 if (VAR_16 != VAR_2) {
  FUNC_0(VAR_11->os, VAR_15, VAR_5);

  FUNC_9(&VAR_11->sli, VAR_6, VAR_12->indicator);
 }

 return VAR_16;
}
