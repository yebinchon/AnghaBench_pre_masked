
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int os; int sli; } ;
typedef TYPE_1__ ocs_hw_t ;
typedef int ocs_hw_rtn_e ;
struct TYPE_6__ {int * ovfl_io; int ovfl_sgl_count; int * ovfl_sgl; } ;
typedef TYPE_2__ ocs_hw_io_t ;
typedef int ocs_dma_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int *) ;

ocs_hw_rtn_e
FUNC_2(ocs_hw_t *VAR_2, ocs_hw_io_t *VAR_3, ocs_dma_t *VAR_4, uint32_t VAR_5)
{
 if (FUNC_1(&VAR_2->sli)) {
  FUNC_0(VAR_2->os, "can't use temporary SGL with pre-registered SGLs\n");
  return VAR_0;
 }
 VAR_3->ovfl_sgl = VAR_4;
 VAR_3->ovfl_sgl_count = VAR_5;
 VAR_3->ovfl_io = ((void*)0);

 return VAR_1;
}
