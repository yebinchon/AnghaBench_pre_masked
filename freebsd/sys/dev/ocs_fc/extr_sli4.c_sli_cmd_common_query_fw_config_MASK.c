
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_7__ {scalar_t__ port_type; } ;
typedef TYPE_2__ sli4_t ;
typedef int sli4_res_common_query_fw_config_t ;
typedef int sli4_req_hdr_t ;
struct TYPE_6__ {int request_length; int subsystem; int opcode; } ;
struct TYPE_8__ {TYPE_1__ hdr; } ;
typedef TYPE_3__ sli4_req_common_query_fw_config_t ;
typedef int int32_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*,void*,size_t,int,int *) ;

__attribute__((used)) static int32_t
FUNC_2(sli4_t *VAR_3, void *VAR_4, size_t VAR_5)
{
 sli4_req_common_query_fw_config_t *VAR_6;
 uint32_t VAR_7 = 0;
 uint32_t VAR_8;


 VAR_8 = FUNC_0(sizeof(sli4_req_common_query_fw_config_t),
      sizeof(sli4_res_common_query_fw_config_t));

 if (VAR_1 == VAR_3->port_type) {
  VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5,
    VAR_8,
    ((void*)0));
 }

 VAR_6 = (sli4_req_common_query_fw_config_t*)((uint8_t*)VAR_4 + VAR_7);
 VAR_6->hdr.opcode = VAR_0;
 VAR_6->hdr.subsystem = VAR_2;
 VAR_6->hdr.request_length = VAR_8 - sizeof(sli4_req_hdr_t);
 return VAR_7 + sizeof(sli4_req_common_query_fw_config_t);
}
