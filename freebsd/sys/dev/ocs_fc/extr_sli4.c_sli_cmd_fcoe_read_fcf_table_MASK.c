
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_11__ {scalar_t__ port_type; int os; } ;
typedef TYPE_2__ sli4_t ;
struct TYPE_10__ {scalar_t__ request_length; int subsystem; int opcode; } ;
struct TYPE_12__ {int fcf_index; TYPE_1__ hdr; } ;
typedef TYPE_3__ sli4_req_fcoe_read_fcf_table_t ;
struct TYPE_13__ {scalar_t__ size; TYPE_3__* virt; } ;
typedef TYPE_4__ ocs_dma_t ;
typedef int int32_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 int FUNC_2 (TYPE_2__*,void*,size_t,int ,TYPE_4__*) ;

int32_t
FUNC_3(sli4_t *VAR_3, void *VAR_4, size_t VAR_5, ocs_dma_t *VAR_6, uint16_t VAR_7)
{
 sli4_req_fcoe_read_fcf_table_t *VAR_8 = ((void*)0);

 if (VAR_1 != VAR_3->port_type) {
  FUNC_0(VAR_3->os, "FCOE_READ_FCF_TABLE only supported on FC\n");
  return -1;
 }

 VAR_8 = VAR_6->virt;

 FUNC_1(VAR_8, 0, sizeof(sli4_req_fcoe_read_fcf_table_t));

 VAR_8->hdr.opcode = VAR_0;
 VAR_8->hdr.subsystem = VAR_2;
 VAR_8->hdr.request_length = VAR_6->size -
  sizeof(sli4_req_fcoe_read_fcf_table_t);
 VAR_8->fcf_index = VAR_7;

 return FUNC_2(VAR_3, VAR_4, VAR_5, 0, VAR_6);
}
