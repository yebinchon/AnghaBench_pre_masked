
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
struct TYPE_11__ {scalar_t__ dual_ulp_capable; } ;
struct TYPE_13__ {scalar_t__ port_type; TYPE_2__ config; int os; } ;
typedef TYPE_4__ sli4_t ;
typedef int sli4_res_common_create_queue_t ;
typedef int sli4_req_hdr_t ;
struct TYPE_10__ {int request_length; int subsystem; int opcode; } ;
struct TYPE_14__ {scalar_t__ num_pages; int dua; int bqu; TYPE_3__* page_physical_address; scalar_t__ ulp; scalar_t__ cq_id; scalar_t__ buffer_size; int rqe_count; TYPE_1__ hdr; } ;
typedef TYPE_5__ sli4_req_fcoe_rq_create_t ;
struct TYPE_15__ {int size; uintptr_t phys; } ;
typedef TYPE_6__ ocs_dma_t ;
typedef int int32_t ;
struct TYPE_12__ {int high; int low; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (uintptr_t) ;
 int FUNC_2 (uintptr_t) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (int ,char*,scalar_t__) ;
 int FUNC_6 (TYPE_4__*,void*,size_t,int,int *) ;
 scalar_t__ FUNC_7 (int,scalar_t__) ;

int32_t
FUNC_8(sli4_t *VAR_8, void *VAR_9, size_t VAR_10,
  ocs_dma_t *VAR_11, uint16_t VAR_12, uint16_t VAR_13, uint16_t VAR_14)
{
 sli4_req_fcoe_rq_create_t *VAR_15 = ((void*)0);
 uint32_t VAR_16 = 0;
 uint32_t VAR_17;
 uintptr_t VAR_18;

 if (VAR_5 == VAR_8->port_type) {
  uint32_t VAR_19;


  VAR_19 = FUNC_0(sizeof(sli4_req_fcoe_rq_create_t),
    sizeof(sli4_res_common_create_queue_t));

  VAR_16 = FUNC_6(VAR_8, VAR_9, VAR_10, VAR_19,
    ((void*)0));
 }
 VAR_15 = (sli4_req_fcoe_rq_create_t *)((uint8_t *)VAR_9 + VAR_16);

 VAR_15->hdr.opcode = VAR_4;
 VAR_15->hdr.subsystem = VAR_6;
 VAR_15->hdr.request_length = sizeof(sli4_req_fcoe_rq_create_t) -
     sizeof(sli4_req_hdr_t);

 VAR_15->num_pages = FUNC_7(VAR_11->size, VAR_7);
 if (!VAR_15->num_pages || (VAR_15->num_pages > VAR_2)) {
  FUNC_5(VAR_8->os, "num_pages %d not valid\n", VAR_15->num_pages);
  return 0;
 }




 VAR_15->rqe_count = FUNC_3(VAR_11->size / VAR_0);

 if ((VAR_14 < VAR_3) ||
   (VAR_14 > VAR_1)) {
  FUNC_4(VAR_8->os, "buffer_size %d out of range (%d-%d)\n",
    VAR_14,
    VAR_3,
    VAR_1);
  return -1;
 }
 VAR_15->buffer_size = VAR_14;

 VAR_15->cq_id = VAR_12;

 if (VAR_8->config.dual_ulp_capable) {
  VAR_15->dua = 1;
  VAR_15->bqu = 1;
  VAR_15->ulp = VAR_13;
 }

 for (VAR_17 = 0, VAR_18 = VAR_11->phys;
   VAR_17 < VAR_15->num_pages;
   VAR_17++, VAR_18 += VAR_7) {
  VAR_15->page_physical_address[VAR_17].low = FUNC_2(VAR_18);
  VAR_15->page_physical_address[VAR_17].high = FUNC_1(VAR_18);
 }

 return(VAR_16 + sizeof(sli4_req_fcoe_rq_create_t));
}
