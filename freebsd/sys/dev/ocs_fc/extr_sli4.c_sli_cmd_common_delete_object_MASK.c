
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
struct TYPE_6__ {int request_length; scalar_t__ version; scalar_t__ timeout; int subsystem; int opcode; } ;
struct TYPE_8__ {int object_name; TYPE_1__ hdr; } ;
typedef TYPE_3__ sli4_req_common_delete_object_t ;
typedef int int32_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (TYPE_2__*,void*,size_t,int,int *) ;

int32_t
FUNC_2(sli4_t *VAR_3, void *VAR_4, size_t VAR_5,
  char *VAR_6)
{
 sli4_req_common_delete_object_t *VAR_7 = ((void*)0);
 uint32_t VAR_8 = 0;

 if (VAR_1 == VAR_3->port_type) {
  VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_5,
    sizeof (sli4_req_common_delete_object_t),
    ((void*)0));
 }

 VAR_7 = (sli4_req_common_delete_object_t *)((uint8_t *)VAR_4 + VAR_8);

 VAR_7->hdr.opcode = VAR_0;
 VAR_7->hdr.subsystem = VAR_2;
 VAR_7->hdr.request_length = sizeof(*VAR_7);
 VAR_7->hdr.timeout = 0;
 VAR_7->hdr.version = 0;

 FUNC_0(VAR_7->object_name, VAR_6, sizeof(VAR_7->object_name));
 return(VAR_8 + sizeof(sli4_req_common_delete_object_t));
}
