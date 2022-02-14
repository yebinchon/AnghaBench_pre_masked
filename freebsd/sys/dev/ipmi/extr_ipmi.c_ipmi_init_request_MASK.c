
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
struct ipmi_request {long ir_msgid; char* ir_request; size_t ir_requestlen; char* ir_reply; size_t ir_replybuflen; void* ir_command; void* ir_addr; struct ipmi_device* ir_owner; } ;
struct ipmi_device {int dummy; } ;



__attribute__((used)) static __inline void
FUNC_0(struct ipmi_request *VAR_0, struct ipmi_device *VAR_1, long VAR_2,
    uint8_t VAR_3, uint8_t VAR_4, size_t VAR_5, size_t VAR_6)
{

 VAR_0->ir_owner = VAR_1;
 VAR_0->ir_msgid = VAR_2;
 VAR_0->ir_addr = VAR_3;
 VAR_0->ir_command = VAR_4;
 if (VAR_5) {
  VAR_0->ir_request = (char *)&VAR_0[1];
  VAR_0->ir_requestlen = VAR_5;
 }
 if (VAR_6) {
  VAR_0->ir_reply = (char *)&VAR_0[1] + VAR_5;
  VAR_0->ir_replybuflen = VAR_6;
 }
}
