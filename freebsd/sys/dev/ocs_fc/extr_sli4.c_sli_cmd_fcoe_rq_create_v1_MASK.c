
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
typedef scalar_t__ uint16_t ;
struct TYPE_11__ {scalar_t__ rq_min_buf_size; scalar_t__ rq_max_buf_size; } ;
struct TYPE_13__ {scalar_t__ port_type; TYPE_2__ config; int os; } ;
typedef TYPE_4__ sli4_t ;
typedef int sli4_res_common_create_queue_t ;
typedef int sli4_req_hdr_t ;
struct TYPE_10__ {int request_length; int version; int subsystem; int opcode; } ;
struct TYPE_14__ {scalar_t__ num_pages; int rqe_count; TYPE_3__* page_physical_address; scalar_t__ cq_id; scalar_t__ buffer_size; int page_size; int rqe_size; int dnb; TYPE_1__ hdr; } ;
typedef TYPE_5__ sli4_req_fcoe_rq_create_v1_t ;
struct TYPE_15__ {int size; uintptr_t phys; } ;
typedef TYPE_6__ ocs_dma_t ;
typedef int int32_t ;
struct TYPE_12__ {int high; int low; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (uintptr_t) ;
 int FUNC_2 (uintptr_t) ;
 int FUNC_3 (int ,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_5 (TYPE_4__*,void*,size_t,int,int *) ;
 scalar_t__ FUNC_6 (int,scalar_t__) ;

int32_t
FUNC_7(sli4_t *VAR_9, void *VAR_10, size_t VAR_11,
     ocs_dma_t *VAR_12, uint16_t VAR_13, uint16_t VAR_14,
     uint16_t VAR_15)
{
 sli4_req_fcoe_rq_create_v1_t *VAR_16 = ((void*)0);
 uint32_t VAR_17 = 0;
 uint32_t VAR_18;
 uintptr_t VAR_19;

 if (VAR_5 == VAR_9->port_type) {
  uint32_t VAR_20;


  VAR_20 = FUNC_0(sizeof(sli4_req_fcoe_rq_create_v1_t),
    sizeof(sli4_res_common_create_queue_t));

  VAR_17 = FUNC_5(VAR_9, VAR_10, VAR_11, VAR_20,
    ((void*)0));
 }
 VAR_16 = (sli4_req_fcoe_rq_create_v1_t *)((uint8_t *)VAR_10 + VAR_17);

 VAR_16->hdr.opcode = VAR_4;
 VAR_16->hdr.subsystem = VAR_6;
 VAR_16->hdr.request_length = sizeof(sli4_req_fcoe_rq_create_v1_t) -
     sizeof(sli4_req_hdr_t);
 VAR_16->hdr.version = 1;


 VAR_16->dnb = VAR_8;


 VAR_16->num_pages = FUNC_6(VAR_12->size, VAR_7);
 if (!VAR_16->num_pages || (VAR_16->num_pages > VAR_2)) {
  FUNC_4(VAR_9->os, "num_pages %d not valid, max %d\n",
                VAR_16->num_pages, VAR_2);
  return 0;
 }




 VAR_16->rqe_count = VAR_12->size / VAR_0;

 VAR_16->rqe_size = VAR_1;

 VAR_16->page_size = VAR_3;

 if ((VAR_15 < VAR_9->config.rq_min_buf_size) ||
     (VAR_15 > VAR_9->config.rq_max_buf_size)) {
  FUNC_3(VAR_9->os, "buffer_size %d out of range (%d-%d)\n",
    VAR_15,
    VAR_9->config.rq_min_buf_size,
    VAR_9->config.rq_max_buf_size);
  return -1;
 }
 VAR_16->buffer_size = VAR_15;

 VAR_16->cq_id = VAR_13;

 for (VAR_18 = 0, VAR_19 = VAR_12->phys;
   VAR_18 < VAR_16->num_pages;
   VAR_18++, VAR_19 += VAR_7) {
  VAR_16->page_physical_address[VAR_18].low = FUNC_2(VAR_19);
  VAR_16->page_physical_address[VAR_18].high = FUNC_1(VAR_19);
 }

 return(VAR_17 + sizeof(sli4_req_fcoe_rq_create_v1_t));
}
