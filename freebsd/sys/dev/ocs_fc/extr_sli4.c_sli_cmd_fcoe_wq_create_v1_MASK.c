
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
typedef int uint16_t ;
struct TYPE_11__ {int wqe_size; } ;
struct TYPE_13__ {scalar_t__ port_type; TYPE_2__ config; } ;
typedef TYPE_4__ sli4_t ;
typedef int sli4_res_common_create_queue_t ;
typedef int sli4_req_hdr_t ;
struct TYPE_10__ {int request_length; int version; int subsystem; int opcode; } ;
struct TYPE_14__ {scalar_t__ num_pages; int page_size; int wqe_count; TYPE_3__* page_physical_address; int wqe_size; int cq_id; TYPE_1__ hdr; } ;
typedef TYPE_5__ sli4_req_fcoe_wq_create_v1_t ;
struct TYPE_15__ {int size; uintptr_t phys; } ;
typedef TYPE_6__ ocs_dma_t ;
typedef int int32_t ;
struct TYPE_12__ {int high; int low; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (uintptr_t) ;
 int FUNC_2 (uintptr_t) ;
 int FUNC_3 (TYPE_4__*,void*,size_t,int,int *) ;
 scalar_t__ FUNC_4 (int,int) ;

int32_t
FUNC_5(sli4_t *VAR_8, void *VAR_9, size_t VAR_10, ocs_dma_t *VAR_11,
     uint16_t VAR_12, uint16_t VAR_13)
{
 sli4_req_fcoe_wq_create_v1_t *VAR_14 = ((void*)0);
 uint32_t VAR_15 = 0;
 uint32_t VAR_16;
 uintptr_t VAR_17;
 uint32_t VAR_18 = 0;
 uint32_t VAR_19 = 0;
 uint32_t VAR_20 = 0;

 if (VAR_2 == VAR_8->port_type) {
  uint32_t VAR_21;


  VAR_21 = FUNC_0(sizeof(sli4_req_fcoe_wq_create_v1_t),
    sizeof(sli4_res_common_create_queue_t));

  VAR_15 = FUNC_3(VAR_8, VAR_9, VAR_10, VAR_21,
    ((void*)0));
 }
 VAR_14 = (sli4_req_fcoe_wq_create_v1_t *)((uint8_t *)VAR_9 + VAR_15);

 VAR_14->hdr.opcode = VAR_1;
 VAR_14->hdr.subsystem = VAR_3;
 VAR_14->hdr.request_length = sizeof(sli4_req_fcoe_wq_create_v1_t) -
     sizeof(sli4_req_hdr_t);
 VAR_14->hdr.version = 1;

 VAR_20 = VAR_11->size / VAR_8->config.wqe_size;




 switch (VAR_11->size) {
 case 4096:
 case 8192:
 case 16384:
 case 32768:
  VAR_18 = 1;
  break;
 case 65536:
  VAR_18 = 2;
  break;
 case 131072:
  VAR_18 = 4;
  break;
 case 262144:
  VAR_18 = 8;
  break;
 case 524288:
  VAR_18 = 10;
  break;
 default:
  return 0;
 }
 VAR_19 = VAR_18 * VAR_7;


 VAR_14->num_pages = FUNC_4(VAR_11->size, VAR_19);
 if (!VAR_14->num_pages || (VAR_14->num_pages > VAR_0)) {
  return 0;
 }

 VAR_14->cq_id = VAR_12;

 VAR_14->page_size = VAR_18;

 if (VAR_8->config.wqe_size == VAR_4) {
  VAR_14->wqe_size = VAR_5;
 } else {
  VAR_14->wqe_size = VAR_6;
 }

 VAR_14->wqe_count = VAR_20;

 for (VAR_16 = 0, VAR_17 = VAR_11->phys;
   VAR_16 < VAR_14->num_pages;
   VAR_16++, VAR_17 += VAR_19) {
  VAR_14->page_physical_address[VAR_16].low = FUNC_2(VAR_17);
  VAR_14->page_physical_address[VAR_16].high = FUNC_1(VAR_17);
 }

 return(VAR_15 + sizeof(sli4_req_fcoe_wq_create_v1_t));
}
