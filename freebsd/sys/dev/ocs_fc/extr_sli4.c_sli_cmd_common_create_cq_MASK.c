
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef void* uint16_t ;
struct TYPE_16__ {int if_type; scalar_t__ port_type; int os; } ;
typedef TYPE_5__ sli4_t ;
typedef int sli4_res_common_create_queue_t ;
typedef int sli4_req_hdr_t ;
struct TYPE_14__ {int version; int request_length; void* subsystem; void* opcode; } ;
struct TYPE_17__ {int page_size; int num_pages; int cqe_count; TYPE_4__* page_physical_address; void* eq_id; void* arm; void* valid; void* evt; void* cqecnt; TYPE_3__ hdr; } ;
typedef TYPE_6__ sli4_req_common_create_cq_v2_t ;
struct TYPE_12__ {int request_length; int version; void* subsystem; void* opcode; } ;
struct TYPE_18__ {int num_pages; TYPE_2__* page_physical_address; void* eq_id; void* arm; void* valid; void* evt; void* cqecnt; TYPE_1__ hdr; } ;
typedef TYPE_7__ sli4_req_common_create_cq_v0_t ;
struct TYPE_19__ {int size; uintptr_t phys; } ;
typedef TYPE_8__ ocs_dma_t ;
typedef int int32_t ;
struct TYPE_15__ {void* high; void* low; } ;
struct TYPE_13__ {void* high; void* low; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;


 void* VAR_7 ;
 scalar_t__ VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 int FUNC_0 (size_t,int) ;
 void* FUNC_1 (uintptr_t) ;
 void* FUNC_2 (uintptr_t) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (TYPE_5__*,void*,size_t,int,int *) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int32_t
FUNC_6(sli4_t *VAR_12, void *VAR_13, size_t VAR_14,
  ocs_dma_t *VAR_15, uint16_t VAR_16, uint16_t VAR_17)
{
 sli4_req_common_create_cq_v0_t *VAR_18 = ((void*)0);
 sli4_req_common_create_cq_v2_t *VAR_19 = ((void*)0);
 uint32_t VAR_20 = 0;
 uint32_t VAR_21;
 uintptr_t VAR_22;
 uint32_t VAR_23 = VAR_12->if_type;
 uint32_t VAR_24 = 0;
 uint32_t VAR_25 = 0;
 uint32_t VAR_26 = 0;
 uint32_t VAR_27 = 0;
 uint32_t VAR_28 = 0;


 switch (VAR_23)
 {
 case 129:
  VAR_24 = VAR_10;
  VAR_25 = FUNC_5(VAR_15->size, VAR_24);
  VAR_26 = sizeof(sli4_req_common_create_cq_v0_t) + (8 * VAR_25);
  break;
 case 128:
  VAR_28 = VAR_15->size / VAR_2;
  switch (VAR_28) {
  case 256:
  case 512:
  case 1024:
  case 2048:
   VAR_27 = 1;
   break;
  case 4096:
   VAR_27 = 2;
   break;
  default:
   return 0;
  }
  VAR_24 = VAR_27 * VAR_10;
  VAR_25 = FUNC_5(VAR_15->size, VAR_24);
  VAR_26 = sizeof(sli4_req_common_create_cq_v2_t) + (8 * VAR_25);
  break;
 default:
  FUNC_3(VAR_12->os, "unsupported IF_TYPE %d\n", VAR_23);
  return -1;
 }



 if (VAR_8 == VAR_12->port_type) {
  uint32_t VAR_29;


  VAR_29 = FUNC_0((size_t)VAR_26, sizeof(sli4_res_common_create_queue_t));

  VAR_20 = FUNC_4(VAR_12, VAR_13, VAR_14, VAR_29,
    ((void*)0));
 }

 switch (VAR_23)
 {
 case 129:
  VAR_18 = (sli4_req_common_create_cq_v0_t *)((uint8_t *)VAR_13 + VAR_20);
  VAR_18->hdr.opcode = VAR_7;
  VAR_18->hdr.subsystem = VAR_9;
  VAR_18->hdr.version = 0;
  VAR_18->hdr.request_length = VAR_26 - sizeof(sli4_req_hdr_t);


  VAR_18->num_pages = VAR_25;
  switch (VAR_18->num_pages) {
  case 1:
   VAR_18->cqecnt = VAR_4;
   break;
  case 2:
   VAR_18->cqecnt = VAR_5;
   break;
  case 4:
   VAR_18->cqecnt = VAR_3;
   break;
  default:
   FUNC_3(VAR_12->os, "num_pages %d not valid\n", VAR_18->num_pages);
   return -1;
  }
  VAR_18->evt = VAR_11;
  VAR_18->valid = VAR_11;


  VAR_18->arm = VAR_0;
  VAR_18->eq_id = VAR_16;

  for (VAR_21 = 0, VAR_22 = VAR_15->phys;
    VAR_21 < VAR_18->num_pages;
    VAR_21++, VAR_22 += VAR_24) {
   VAR_18->page_physical_address[VAR_21].low = FUNC_2(VAR_22);
   VAR_18->page_physical_address[VAR_21].high = FUNC_1(VAR_22);
  }

  break;
 case 128:
 {
  VAR_19 = (sli4_req_common_create_cq_v2_t *)((uint8_t *)VAR_13 + VAR_20);
  VAR_19->hdr.opcode = VAR_7;
  VAR_19->hdr.subsystem = VAR_9;
  VAR_19->hdr.version = 2;
  VAR_19->hdr.request_length = VAR_26 - sizeof(sli4_req_hdr_t);

  VAR_19->page_size = VAR_27;


  VAR_19->num_pages = VAR_25;
  if (!VAR_19->num_pages || (VAR_19->num_pages > VAR_1)) {
   return 0;
  }

  switch (VAR_19->num_pages) {
  case 1:
   VAR_19->cqecnt = VAR_4;
   break;
  case 2:
   VAR_19->cqecnt = VAR_5;
   break;
  case 4:
   VAR_19->cqecnt = VAR_3;
   break;
  case 8:
   VAR_19->cqecnt = VAR_6;
   VAR_19->cqe_count = VAR_28;
   break;
  default:
   FUNC_3(VAR_12->os, "num_pages %d not valid\n", VAR_19->num_pages);
   return -1;
  }

  VAR_19->evt = VAR_11;
  VAR_19->valid = VAR_11;


  VAR_19->arm = VAR_0;
  VAR_19->eq_id = VAR_16;

  for (VAR_21 = 0, VAR_22 = VAR_15->phys;
    VAR_21 < VAR_19->num_pages;
    VAR_21++, VAR_22 += VAR_24) {
   VAR_19->page_physical_address[VAR_21].low = FUNC_2(VAR_22);
   VAR_19->page_physical_address[VAR_21].high = FUNC_1(VAR_22);
  }
 }
  break;
 }

 return (VAR_20 + VAR_26);
}
