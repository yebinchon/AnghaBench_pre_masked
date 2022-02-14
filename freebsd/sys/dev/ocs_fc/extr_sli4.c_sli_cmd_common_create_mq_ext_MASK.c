
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
struct TYPE_10__ {scalar_t__ mq_create_version; } ;
struct TYPE_13__ {scalar_t__ port_type; TYPE_1__ config; int os; } ;
typedef TYPE_4__ sli4_t ;
typedef int sli4_res_common_create_queue_t ;
typedef int sli4_req_hdr_t ;
struct TYPE_11__ {int request_length; int version; int subsystem; int opcode; } ;
struct TYPE_14__ {uintptr_t num_pages; TYPE_3__* page_physical_address; int val; void* cq_id_v0; TYPE_2__ hdr; void* cq_id_v1; int async_event_bitmap; int ring_size; } ;
typedef TYPE_5__ sli4_req_common_create_mq_ext_t ;
struct TYPE_15__ {uintptr_t size; uintptr_t phys; } ;
typedef TYPE_6__ ocs_dma_t ;
typedef int int32_t ;
struct TYPE_12__ {int high; int low; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 uintptr_t VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (uintptr_t) ;
 int FUNC_2 (uintptr_t) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (TYPE_4__*,void*,size_t,int,int *) ;

__attribute__((used)) static int32_t
FUNC_5(sli4_t *VAR_10, void *VAR_11, size_t VAR_12,
        ocs_dma_t *VAR_13, uint16_t VAR_14, uint16_t VAR_15)
{
 sli4_req_common_create_mq_ext_t *VAR_16 = ((void*)0);
 uint32_t VAR_17 = 0;
 uint32_t VAR_18;
 uintptr_t VAR_19;

 if (VAR_6 == VAR_10->port_type) {
  uint32_t VAR_20;


  VAR_20 = FUNC_0(sizeof(sli4_req_common_create_mq_ext_t),
    sizeof(sli4_res_common_create_queue_t));

  VAR_17 = FUNC_4(VAR_10, VAR_11, VAR_12, VAR_20,
    ((void*)0));
 }
 VAR_16 = (sli4_req_common_create_mq_ext_t *)((uint8_t *)VAR_11 + VAR_17);

 VAR_16->hdr.opcode = VAR_5;
 VAR_16->hdr.subsystem = VAR_7;
 VAR_16->hdr.request_length = sizeof(sli4_req_common_create_mq_ext_t) -
     sizeof(sli4_req_hdr_t);

 VAR_16->num_pages = VAR_13->size / VAR_8;
 switch (VAR_16->num_pages) {
 case 1:
  VAR_16->ring_size = VAR_2;
  break;
 case 2:
  VAR_16->ring_size = VAR_3;
  break;
 case 4:
  VAR_16->ring_size = VAR_4;
  break;
 case 8:
  VAR_16->ring_size = VAR_1;
  break;
 default:
  FUNC_3(VAR_10->os, "num_pages %d not valid\n", VAR_16->num_pages);
  return -1;
 }


 VAR_16->async_event_bitmap = VAR_0;

 if (VAR_10->config.mq_create_version) {
  VAR_16->cq_id_v1 = VAR_14;
  VAR_16->hdr.version = 1;
 }
 else {
  VAR_16->cq_id_v0 = VAR_14;
 }
 VAR_16->val = VAR_9;

 for (VAR_18 = 0, VAR_19 = VAR_13->phys;
   VAR_18 < VAR_16->num_pages;
   VAR_18++, VAR_19 += VAR_8) {
  VAR_16->page_physical_address[VAR_18].low = FUNC_2(VAR_19);
  VAR_16->page_physical_address[VAR_18].high = FUNC_1(VAR_19);
 }

 return(VAR_17 + sizeof(sli4_req_common_create_mq_ext_t));
}
