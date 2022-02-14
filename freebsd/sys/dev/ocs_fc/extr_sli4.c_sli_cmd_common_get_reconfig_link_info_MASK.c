
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_11__ {scalar_t__ port_type; } ;
typedef TYPE_2__ sli4_t ;
typedef int sli4_res_common_get_reconfig_link_info_t ;
typedef int sli4_req_hdr_t ;
struct TYPE_10__ {int request_length; scalar_t__ version; int subsystem; int opcode; } ;
struct TYPE_12__ {TYPE_1__ hdr; } ;
typedef TYPE_3__ sli4_req_common_get_reconfig_link_info_t ;
struct TYPE_13__ {int size; TYPE_3__* virt; } ;
typedef TYPE_4__ ocs_dma_t ;
typedef int int32_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 int FUNC_2 (TYPE_2__*,void*,size_t,int,TYPE_4__*) ;

int32_t
FUNC_3(sli4_t *VAR_3, void *VAR_4, size_t VAR_5, ocs_dma_t *VAR_6)
{
        sli4_req_common_get_reconfig_link_info_t *VAR_7 = ((void*)0);
        uint32_t VAR_8 = 0;
        uint32_t VAR_9;


        VAR_9 = FUNC_0(sizeof(sli4_req_common_get_reconfig_link_info_t),
                           sizeof(sli4_res_common_get_reconfig_link_info_t));

 if (VAR_1 == VAR_3->port_type) {
  VAR_8 = FUNC_2(VAR_3, VAR_4, VAR_5,
    VAR_9,
    VAR_6);
 }

 if (VAR_6 != ((void*)0)) {
  VAR_7 = VAR_6->virt;
  FUNC_1(VAR_7, 0, VAR_6->size);
  VAR_9 = VAR_6->size;
 } else {
  VAR_7 = (sli4_req_common_get_reconfig_link_info_t *)((uint8_t *)VAR_4 + VAR_8);
  VAR_9 = sizeof(sli4_req_common_get_reconfig_link_info_t);
 }

        VAR_7->hdr.opcode = VAR_0;
        VAR_7->hdr.subsystem = VAR_2;
        VAR_7->hdr.request_length = VAR_9 - sizeof(sli4_req_hdr_t);
        VAR_7->hdr.version = 0;

        return(VAR_8 + sizeof(sli4_req_common_get_reconfig_link_info_t));
}
