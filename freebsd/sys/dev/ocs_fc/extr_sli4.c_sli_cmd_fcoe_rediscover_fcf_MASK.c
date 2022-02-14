
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int sli4_t ;
typedef int sli4_req_hdr_t ;
struct TYPE_3__ {int request_length; int subsystem; int opcode; } ;
struct TYPE_4__ {int fcf_count; scalar_t__* fcf_index; TYPE_1__ hdr; } ;
typedef TYPE_2__ sli4_req_fcoe_rediscover_fcf_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,void*,size_t,int,int *) ;

int32_t
FUNC_1(sli4_t *VAR_3, void *VAR_4, size_t VAR_5, uint16_t VAR_6)
{
 sli4_req_fcoe_rediscover_fcf_t *VAR_7 = ((void*)0);
 uint32_t VAR_8 = 0;

 VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_5,
   sizeof(sli4_req_fcoe_rediscover_fcf_t),
   ((void*)0));

 VAR_7 = (sli4_req_fcoe_rediscover_fcf_t *)((uint8_t *)VAR_4 + VAR_8);

 VAR_7->hdr.opcode = VAR_0;
 VAR_7->hdr.subsystem = VAR_1;
 VAR_7->hdr.request_length = sizeof(sli4_req_fcoe_rediscover_fcf_t) -
     sizeof(sli4_req_hdr_t);

 if (VAR_6 == VAR_2) {
  VAR_7->fcf_count = 0;
 } else {
  VAR_7->fcf_count = 1;
  VAR_7->fcf_index[0] = VAR_6;
 }

 return(VAR_8 + sizeof(sli4_req_fcoe_rediscover_fcf_t));
}
