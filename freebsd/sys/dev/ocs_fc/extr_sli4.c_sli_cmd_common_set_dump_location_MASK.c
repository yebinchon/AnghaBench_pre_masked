
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint32_t ;
struct TYPE_9__ {scalar_t__ port_type; } ;
typedef TYPE_2__ sli4_t ;
typedef int sli4_req_hdr_t ;
struct TYPE_8__ {int request_length; scalar_t__ version; scalar_t__ timeout; int subsystem; int opcode; } ;
struct TYPE_10__ {scalar_t__ buffer_length; scalar_t__ buf_addr_high; scalar_t__ buf_addr_low; void* fdb; void* qry; void* blp; TYPE_1__ hdr; } ;
typedef TYPE_3__ sli4_req_common_set_dump_location_t ;
struct TYPE_11__ {scalar_t__ len; int phys; } ;
typedef TYPE_4__ ocs_dma_t ;
typedef int int32_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,void*,size_t,int,int *) ;

int32_t
FUNC_3(sli4_t *VAR_3, void *VAR_4, size_t VAR_5,
     uint8_t VAR_6, uint8_t VAR_7,
     ocs_dma_t *VAR_8, uint8_t VAR_9)
{
 sli4_req_common_set_dump_location_t *VAR_10 = ((void*)0);
 uint32_t VAR_11 = 0;

 if (VAR_1 == VAR_3->port_type) {
  VAR_11 = FUNC_2(VAR_3, VAR_4, VAR_5,
    sizeof (sli4_req_common_set_dump_location_t),
    ((void*)0));
 }

 VAR_10 = (sli4_req_common_set_dump_location_t *)((uint8_t *)VAR_4 + VAR_11);

 VAR_10->hdr.opcode = VAR_0;
 VAR_10->hdr.subsystem = VAR_2;
 VAR_10->hdr.request_length = sizeof(sli4_req_common_set_dump_location_t) - sizeof(sli4_req_hdr_t);
 VAR_10->hdr.timeout = 0;
 VAR_10->hdr.version = 0;

 VAR_10->blp = VAR_7;
 VAR_10->qry = VAR_6;
 VAR_10->fdb = VAR_9;

 if (VAR_8) {
  VAR_10->buf_addr_low = FUNC_1(VAR_8->phys);
  VAR_10->buf_addr_high = FUNC_0(VAR_8->phys);
  VAR_10->buffer_length = VAR_8->len;
 } else {
  VAR_10->buf_addr_low = 0;
  VAR_10->buf_addr_high = 0;
  VAR_10->buffer_length = 0;
 }

 return(VAR_11 + sizeof(sli4_req_common_set_dump_location_t));
}
