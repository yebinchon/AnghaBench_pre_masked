
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_7__ {int if_type; scalar_t__ port_type; int os; } ;
typedef TYPE_2__ sli4_t ;
typedef int sli4_res_common_get_port_name_t ;
typedef int sli4_req_hdr_t ;
struct TYPE_6__ {int request_length; int version; int subsystem; int opcode; } ;
struct TYPE_8__ {int pt; TYPE_1__ hdr; } ;
typedef TYPE_3__ sli4_req_common_get_port_name_t ;
typedef int int32_t ;






 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (TYPE_2__*,void*,size_t,int,int *) ;

__attribute__((used)) static int32_t
FUNC_3(sli4_t *VAR_3, void *VAR_4, size_t VAR_5)
{
 sli4_req_common_get_port_name_t *VAR_6;
 uint32_t VAR_7 = 0;
 uint32_t VAR_8;
 uint8_t VAR_9 = 0;
 uint8_t VAR_10 = 0;


 switch (VAR_3->if_type) {
 case 131:
 case 130:
  VAR_9 = 0;
  break;
 case 129:
 case 128:
  VAR_9 = 1;
  break;
 default:
  FUNC_1(VAR_3->os, "unsupported IF_TYPE %d\n", VAR_3->if_type);
  return 0;
 }


 VAR_8 = FUNC_0(sizeof(sli4_req_common_get_port_name_t),
      sizeof(sli4_res_common_get_port_name_t));

 if (VAR_1 == VAR_3->port_type) {
  VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_5,
    VAR_8,
    ((void*)0));

  VAR_10 = 1;
 }

 VAR_6 = (sli4_req_common_get_port_name_t *)((uint8_t *)VAR_4 + VAR_7);

 VAR_6->hdr.opcode = VAR_0;
 VAR_6->hdr.subsystem = VAR_2;
 VAR_6->hdr.request_length = sizeof(sli4_req_hdr_t) + (VAR_9 * sizeof(uint32_t));
 VAR_6->hdr.version = VAR_9;


 if (VAR_9 == 1) {
  VAR_6->pt = VAR_10;
 }

 return VAR_7 + VAR_6->hdr.request_length;
}
