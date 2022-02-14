
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_15__ {scalar_t__ port_type; } ;
typedef TYPE_3__ sli4_t ;
typedef int sli4_res_hdr_t ;
struct TYPE_13__ {int request_length; int subsystem; int opcode; } ;
struct TYPE_16__ {int xri_count; TYPE_2__* page_set; int xri_start; TYPE_1__ hdr; } ;
typedef TYPE_4__ sli4_req_fcoe_post_sgl_pages_t ;
struct TYPE_17__ {int phys; int size; TYPE_4__* virt; } ;
typedef TYPE_5__ ocs_dma_t ;
typedef int int32_t ;
struct TYPE_14__ {void* page1_high; void* page1_low; void* page0_high; void* page0_low; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*,int ,int ) ;
 int FUNC_4 (TYPE_3__*,void*,size_t,int,TYPE_5__*) ;

int32_t
FUNC_5(sli4_t *VAR_3, void *VAR_4, size_t VAR_5,
  uint16_t VAR_6, uint32_t VAR_7, ocs_dma_t *VAR_8[], ocs_dma_t *VAR_9[], ocs_dma_t *VAR_10)
{
 sli4_req_fcoe_post_sgl_pages_t *VAR_11 = ((void*)0);
 uint32_t VAR_12 = 0;
 uint32_t VAR_13;

 if (VAR_1 == VAR_3->port_type) {
  uint32_t VAR_14;


  VAR_14 = FUNC_0(sizeof(sli4_req_fcoe_post_sgl_pages_t),
    sizeof(sli4_res_hdr_t));

  VAR_12 = FUNC_4(VAR_3, VAR_4, VAR_5, VAR_14,
    VAR_10);
 }
 if (VAR_10) {
  VAR_11 = VAR_10->virt;
  FUNC_3(VAR_11, 0, VAR_10->size);
 } else {
  VAR_11 = (sli4_req_fcoe_post_sgl_pages_t *)((uint8_t *)VAR_4 + VAR_12);
 }

 VAR_11->hdr.opcode = VAR_0;
 VAR_11->hdr.subsystem = VAR_2;






 VAR_11->hdr.request_length = 4 + (VAR_7 * (sizeof(uint64_t) * 2));

 VAR_11->xri_start = VAR_6;
 VAR_11->xri_count = VAR_7;

 for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++) {
  VAR_11->page_set[VAR_13].page0_low = FUNC_2(VAR_8[VAR_13]->phys);
  VAR_11->page_set[VAR_13].page0_high = FUNC_1(VAR_8[VAR_13]->phys);
 }

 if (VAR_9) {
  for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++) {
   VAR_11->page_set[VAR_13].page1_low = FUNC_2(VAR_9[VAR_13]->phys);
   VAR_11->page_set[VAR_13].page1_high = FUNC_1(VAR_9[VAR_13]->phys);
  }
 }

 return VAR_10 ? VAR_12 : (VAR_12 + sizeof(sli4_req_fcoe_post_sgl_pages_t));
}
