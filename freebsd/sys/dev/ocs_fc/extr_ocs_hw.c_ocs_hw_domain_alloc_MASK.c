
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* uint32_t ;
struct TYPE_6__ {int os; int sli; int domain_dmem; } ;
typedef TYPE_1__ ocs_hw_t ;
typedef int ocs_hw_rtn_e ;
struct TYPE_8__ {TYPE_2__* app; } ;
struct TYPE_7__ {TYPE_3__ sm; void* indicator; void* vlan_id; void* fcf_indicator; void* fcf; TYPE_1__* hw; int dma; int * sport; } ;
typedef TYPE_2__ ocs_domain_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,...) ;
 int * FUNC_3 (int ,int ,int) ;
 int FUNC_4 (TYPE_3__*,int ,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int ,void**,void**) ;

ocs_hw_rtn_e
FUNC_7(ocs_hw_t *VAR_9, ocs_domain_t *VAR_10, uint32_t VAR_11, uint32_t VAR_12)
{
 uint8_t *VAR_13 = ((void*)0);
 uint32_t VAR_14;

 if (!VAR_9 || !VAR_10 || !VAR_10->sport) {
  FUNC_2(((void*)0), "bad parameter(s) hw=%p domain=%p sport=%p\n",
    VAR_9, VAR_10, VAR_10 ? VAR_10->sport : ((void*)0));
  return VAR_0;
 }




 if (FUNC_5(&VAR_9->sli) > 0) {
  FUNC_1(VAR_9->os, "Chip is in an error state - reset needed\n");
  return VAR_0;
 }

 VAR_13 = FUNC_3(VAR_9->os, VAR_5, VAR_4 | VAR_3);
 if (!VAR_13) {
  FUNC_2(VAR_9->os, "command memory allocation failed\n");
  return VAR_1;
 }

 VAR_10->dma = VAR_9->domain_dmem;

 VAR_10->hw = VAR_9;
 VAR_10->sm.app = VAR_10;
 VAR_10->fcf = VAR_11;
 VAR_10->fcf_indicator = VAR_7;
 VAR_10->vlan_id = VAR_12;
 VAR_10->indicator = VAR_7;

 if (FUNC_6(&VAR_9->sli, VAR_6, &VAR_10->indicator, &VAR_14)) {
  FUNC_2(VAR_9->os, "FCOE_VFI allocation failure\n");

  FUNC_0(VAR_9->os, VAR_13, VAR_5);

  return VAR_0;
 }

 FUNC_4(&VAR_10->sm, VAR_8, VAR_13);
 return VAR_2;
}
