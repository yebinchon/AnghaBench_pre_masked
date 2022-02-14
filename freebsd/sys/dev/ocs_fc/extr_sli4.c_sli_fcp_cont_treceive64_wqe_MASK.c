
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int sli4_t ;
struct TYPE_3__ {int sec_xri_tag; } ;
struct TYPE_4__ {TYPE_1__ dword5; int command; } ;
typedef TYPE_2__ sli4_fcp_treceive64_wqe_t ;
typedef int ocs_remote_node_t ;
typedef int ocs_dma_t ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,void*,size_t,int *,int ,int ,int ,int ,int ,int ,int ,int ,int *,int ,int ,int ,int ,int ) ;

int32_t
FUNC_1(sli4_t *VAR_1, void *VAR_2, size_t VAR_3, ocs_dma_t *VAR_4, uint32_t VAR_5,
   uint32_t VAR_6, uint32_t VAR_7, uint16_t VAR_8, uint16_t VAR_9, uint16_t VAR_10,
   uint16_t VAR_11, uint16_t VAR_12, uint32_t VAR_13, ocs_remote_node_t *VAR_14, uint32_t VAR_15,
   uint8_t VAR_16, uint8_t VAR_17, uint8_t VAR_18, uint32_t VAR_19)
{
 int32_t VAR_20;

 VAR_20 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_10,
   VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19);
 if (VAR_20 == 0) {
  sli4_fcp_treceive64_wqe_t *VAR_21 = VAR_2;

  VAR_21->command = VAR_0;
  VAR_21->dword5.sec_xri_tag = VAR_9;
 }
 return VAR_20;
}
