
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef void* uint16_t ;
struct TYPE_14__ {scalar_t__ port_type; } ;
typedef TYPE_4__ sli4_t ;
struct TYPE_11__ {int request_length; scalar_t__ version; scalar_t__ timeout; int subsystem; int opcode; } ;
struct TYPE_15__ {int desired_write_length; int write_offset; int host_buffer_descriptor_count; scalar_t__ host_buffer_descriptor; int object_name; void* eof; void* noc; TYPE_1__ hdr; } ;
typedef TYPE_5__ sli4_req_common_write_object_t ;
struct TYPE_12__ {int buffer_address_high; int buffer_address_low; } ;
struct TYPE_13__ {TYPE_2__ data; } ;
struct TYPE_16__ {int buffer_length; TYPE_3__ u; int bde_type; } ;
typedef TYPE_6__ sli4_bde_t ;
struct TYPE_17__ {int phys; } ;
typedef TYPE_7__ ocs_dma_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (TYPE_4__*,void*,size_t,int,int *) ;

int32_t
FUNC_4(sli4_t *VAR_4, void *VAR_5, size_t VAR_6,
  uint16_t VAR_7, uint16_t VAR_8, uint32_t VAR_9,
  uint32_t VAR_10,
  char *VAR_11,
  ocs_dma_t *VAR_12)
{
 sli4_req_common_write_object_t *VAR_13 = ((void*)0);
 uint32_t VAR_14 = 0;
 sli4_bde_t *VAR_15;

 if (VAR_2 == VAR_4->port_type) {
  VAR_14 = FUNC_3(VAR_4, VAR_5, VAR_6,
    sizeof (sli4_req_common_write_object_t) + sizeof (sli4_bde_t),
    ((void*)0));
 }

 VAR_13 = (sli4_req_common_write_object_t *)((uint8_t *)VAR_5 + VAR_14);

 VAR_13->hdr.opcode = VAR_1;
 VAR_13->hdr.subsystem = VAR_3;
 VAR_13->hdr.request_length = sizeof(*VAR_13) - 4*sizeof(uint32_t) + sizeof(sli4_bde_t);
 VAR_13->hdr.timeout = 0;
 VAR_13->hdr.version = 0;

 VAR_13->noc = VAR_7;
 VAR_13->eof = VAR_8;
 VAR_13->desired_write_length = VAR_9;
 VAR_13->write_offset = VAR_10;
 FUNC_2(VAR_13->object_name, VAR_11, sizeof(VAR_13->object_name));
 VAR_13->host_buffer_descriptor_count = 1;

 VAR_15 = (sli4_bde_t *)VAR_13->host_buffer_descriptor;


 VAR_15->bde_type = VAR_0;
 VAR_15->buffer_length = VAR_9;
 VAR_15->u.data.buffer_address_low = FUNC_1(VAR_12->phys);
 VAR_15->u.data.buffer_address_high = FUNC_0(VAR_12->phys);


 return(VAR_14 + sizeof(sli4_req_common_write_object_t) + sizeof (sli4_bde_t));
}
