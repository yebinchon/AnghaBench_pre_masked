
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_5__ {scalar_t__ port_type; } ;
typedef TYPE_1__ sli4_t ;
typedef int sli4_res_common_get_sli4_parameters_t ;
struct TYPE_6__ {int request_length; int subsystem; int opcode; } ;
typedef TYPE_2__ sli4_req_hdr_t ;
typedef int int32_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,void*,size_t,int,int *) ;

int32_t
FUNC_1(sli4_t *VAR_3, void *VAR_4, size_t VAR_5)
{
 sli4_req_hdr_t *VAR_6 = ((void*)0);
 uint32_t VAR_7 = 0;

 if (VAR_1 == VAR_3->port_type) {
  VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_5,
    sizeof(sli4_res_common_get_sli4_parameters_t),
    ((void*)0));
 }

 VAR_6 = (sli4_req_hdr_t *)((uint8_t *)VAR_4 + VAR_7);

 VAR_6->opcode = VAR_0;
 VAR_6->subsystem = VAR_2;
 VAR_6->request_length = 0x50;

 return(VAR_7 + sizeof(sli4_req_hdr_t));
}
