
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint8_t ;
typedef void* uint32_t ;
struct TYPE_4__ {void* version; void* request_length; void* timeout; void* domain; void* port_number; void* subsystem; void* opcode; } ;
struct TYPE_3__ {TYPE_2__ req; } ;
struct mbx_hdr {TYPE_1__ u0; } ;



void
FUNC_0(struct mbx_hdr *VAR_0,
   uint8_t VAR_1, uint8_t VAR_2,
   uint8_t VAR_3, uint8_t VAR_4,
   uint32_t VAR_5, uint32_t VAR_6,
   uint8_t VAR_7)
{
 VAR_0->u0.req.opcode = VAR_4;
 VAR_0->u0.req.subsystem = VAR_3;
 VAR_0->u0.req.port_number = VAR_2;
 VAR_0->u0.req.domain = VAR_1;

 VAR_0->u0.req.timeout = VAR_5;
 VAR_0->u0.req.request_length = VAR_6 - sizeof(struct mbx_hdr);
 VAR_0->u0.req.version = VAR_7;
}
