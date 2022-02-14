
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef void* uint16_t ;
struct TYPE_11__ {scalar_t__ dual_ulp_capable; } ;
struct TYPE_13__ {scalar_t__ port_type; TYPE_2__ config; } ;
typedef TYPE_4__ sli4_t ;
typedef int sli4_res_common_create_queue_t ;
typedef int sli4_req_hdr_t ;
struct TYPE_10__ {int request_length; int subsystem; int opcode; } ;
struct TYPE_14__ {scalar_t__ num_pages; int dua; int bqu; TYPE_3__* page_physical_address; void* ulp; void* cq_id; TYPE_1__ hdr; } ;
typedef TYPE_5__ sli4_req_fcoe_wq_create_t ;
struct TYPE_15__ {uintptr_t phys; int size; } ;
typedef TYPE_6__ ocs_dma_t ;
typedef int int32_t ;
struct TYPE_12__ {int high; int low; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (uintptr_t) ;
 int FUNC_2 (uintptr_t) ;
 int FUNC_3 (TYPE_4__*,void*,size_t,int,int *) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;

int32_t
FUNC_5(sli4_t *VAR_5, void *VAR_6, size_t VAR_7,
         ocs_dma_t *VAR_8, uint16_t VAR_9, uint16_t VAR_10)
{
 sli4_req_fcoe_wq_create_t *VAR_11 = ((void*)0);
 uint32_t VAR_12 = 0;
 uint32_t VAR_13;
 uintptr_t VAR_14;

 if (VAR_2 == VAR_5->port_type) {
  uint32_t VAR_15;


  VAR_15 = FUNC_0(sizeof(sli4_req_fcoe_wq_create_t),
    sizeof(sli4_res_common_create_queue_t));

  VAR_12 = FUNC_3(VAR_5, VAR_6, VAR_7, VAR_15,
    ((void*)0));
 }
 VAR_11 = (sli4_req_fcoe_wq_create_t *)((uint8_t *)VAR_6 + VAR_12);

 VAR_11->hdr.opcode = VAR_1;
 VAR_11->hdr.subsystem = VAR_3;
 VAR_11->hdr.request_length = sizeof(sli4_req_fcoe_wq_create_t) -
     sizeof(sli4_req_hdr_t);

 VAR_11->num_pages = FUNC_4(VAR_8->size, VAR_4);
 if (!VAR_11->num_pages || (VAR_11->num_pages > VAR_0)) {
  return 0;
 }

 VAR_11->cq_id = VAR_9;

 if (VAR_5->config.dual_ulp_capable) {
  VAR_11->dua = 1;
  VAR_11->bqu = 1;
  VAR_11->ulp = VAR_10;
 }

 for (VAR_13 = 0, VAR_14 = VAR_8->phys;
   VAR_13 < VAR_11->num_pages;
   VAR_13++, VAR_14 += VAR_4) {
  VAR_11->page_physical_address[VAR_13].low = FUNC_2(VAR_14);
  VAR_11->page_physical_address[VAR_13].high = FUNC_1(VAR_14);
 }

 return(VAR_12 + sizeof(sli4_req_fcoe_wq_create_t));
}
