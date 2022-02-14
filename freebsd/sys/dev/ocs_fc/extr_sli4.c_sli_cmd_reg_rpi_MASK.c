
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint32_t ;
typedef void* uint16_t ;
typedef int sli4_t ;
struct TYPE_9__ {int buffer_address_high; int buffer_address_low; } ;
struct TYPE_10__ {TYPE_2__ data; } ;
struct TYPE_11__ {TYPE_3__ u; int buffer_length; int bde_type; } ;
struct TYPE_8__ {int command; } ;
struct TYPE_12__ {void* vpi; TYPE_4__ bde_64; void* etow; void* upd; int remote_n_port_id; void* rpi; TYPE_1__ hdr; } ;
typedef TYPE_5__ sli4_cmd_reg_rpi_t ;
struct TYPE_13__ {int phys; } ;
typedef TYPE_6__ ocs_dma_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*,int ,size_t) ;

int32_t
FUNC_3(sli4_t *VAR_3, void *VAR_4, size_t VAR_5, uint32_t VAR_6, uint16_t VAR_7,
   uint16_t VAR_8, ocs_dma_t *VAR_9, uint8_t VAR_10, uint8_t VAR_11)
{
 sli4_cmd_reg_rpi_t *VAR_12 = VAR_4;

 FUNC_2(VAR_4, 0, VAR_5);

 VAR_12->hdr.command = VAR_1;

 VAR_12->rpi = VAR_7;
 VAR_12->remote_n_port_id = VAR_6;
 VAR_12->upd = VAR_10;
 VAR_12->etow = VAR_11;

 VAR_12->bde_64.bde_type = VAR_0;
 VAR_12->bde_64.buffer_length = VAR_2;
 VAR_12->bde_64.u.data.buffer_address_low = FUNC_1(VAR_9->phys);
 VAR_12->bde_64.u.data.buffer_address_high = FUNC_0(VAR_9->phys);

 VAR_12->vpi = VAR_8;

 return sizeof(sli4_cmd_reg_rpi_t);
}
