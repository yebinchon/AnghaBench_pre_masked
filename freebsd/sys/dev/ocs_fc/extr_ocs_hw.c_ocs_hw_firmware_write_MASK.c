
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {scalar_t__ if_type; } ;
struct TYPE_6__ {TYPE_1__ sli; } ;
typedef TYPE_2__ ocs_hw_t ;
typedef int ocs_hw_rtn_e ;
typedef int ocs_hw_fw_cb_t ;
typedef int ocs_dma_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *,int ,int ,int,int ,void*) ;

ocs_hw_rtn_e
FUNC_1(ocs_hw_t *VAR_1, ocs_dma_t *VAR_2, uint32_t VAR_3, uint32_t VAR_4, int VAR_5, ocs_hw_fw_cb_t VAR_6, void *VAR_7)
{
 if (VAR_1->sli.if_type == VAR_0) {
  return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 } else {

  return -1;
 }
}
