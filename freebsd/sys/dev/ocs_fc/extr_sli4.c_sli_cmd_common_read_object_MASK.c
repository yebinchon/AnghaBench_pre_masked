
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
struct TYPE_14__ {scalar_t__ port_type; } ;
typedef TYPE_4__ sli4_t ;
struct TYPE_11__ {int request_length; scalar_t__ version; scalar_t__ timeout; int subsystem; int opcode; } ;
struct TYPE_15__ {int desired_read_length; int read_offset; int host_buffer_descriptor_count; scalar_t__ host_buffer_descriptor; int object_name; TYPE_1__ hdr; } ;
typedef TYPE_5__ sli4_req_common_read_object_t ;
struct TYPE_12__ {scalar_t__ buffer_address_high; scalar_t__ buffer_address_low; } ;
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
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (TYPE_4__*,void*,size_t,int,int *) ;

int32_t
FUNC_4(sli4_t *VAR_4, void *VAR_5, size_t VAR_6,
  uint32_t VAR_7,
  uint32_t VAR_8,
  char *VAR_9,
  ocs_dma_t *VAR_10)
{
 sli4_req_common_read_object_t *VAR_11 = ((void*)0);
 uint32_t VAR_12 = 0;
 sli4_bde_t *VAR_13;

 if (VAR_2 == VAR_4->port_type) {
  VAR_12 = FUNC_3(VAR_4, VAR_5, VAR_6,
    sizeof (sli4_req_common_read_object_t) + sizeof (sli4_bde_t),
    ((void*)0));
 }

 VAR_11 = (sli4_req_common_read_object_t *)((uint8_t *)VAR_5 + VAR_12);

 VAR_11->hdr.opcode = VAR_1;
 VAR_11->hdr.subsystem = VAR_3;
 VAR_11->hdr.request_length = sizeof(*VAR_11) - 4*sizeof(uint32_t) + sizeof(sli4_bde_t);
 VAR_11->hdr.timeout = 0;
 VAR_11->hdr.version = 0;

 VAR_11->desired_read_length = VAR_7;
 VAR_11->read_offset = VAR_8;
 FUNC_2(VAR_11->object_name, VAR_9, sizeof(VAR_11->object_name));
 VAR_11->host_buffer_descriptor_count = 1;

 VAR_13 = (sli4_bde_t *)VAR_11->host_buffer_descriptor;


 VAR_13->bde_type = VAR_0;
 VAR_13->buffer_length = VAR_7;
 if (VAR_10 != ((void*)0)) {
  VAR_13->u.data.buffer_address_low = FUNC_1(VAR_10->phys);
  VAR_13->u.data.buffer_address_high = FUNC_0(VAR_10->phys);
 } else {
  VAR_13->u.data.buffer_address_low = 0;
  VAR_13->u.data.buffer_address_high = 0;
 }


 return(VAR_12 + sizeof(sli4_req_common_read_object_t) + sizeof (sli4_bde_t));
}
