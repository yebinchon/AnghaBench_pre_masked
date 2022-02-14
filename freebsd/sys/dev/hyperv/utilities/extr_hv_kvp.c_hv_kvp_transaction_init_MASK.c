
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct hv_vmbus_pipe_hdr {int dummy; } ;
struct hv_vmbus_icmsg_hdr {int dummy; } ;
struct hv_kvp_msg {int dummy; } ;
struct TYPE_3__ {int req_in_progress; struct hv_kvp_msg* host_kvp_msg; int * rcv_buf; int host_msg_id; int host_msg_len; } ;
typedef TYPE_1__ hv_kvp_sc ;



__attribute__((used)) static void
FUNC_0(hv_kvp_sc *VAR_0, uint32_t VAR_1,
   uint64_t VAR_2, uint8_t *VAR_3)
{



 VAR_0->req_in_progress = 1;
 VAR_0->host_msg_len = VAR_1;
 VAR_0->host_msg_id = VAR_2;
 VAR_0->rcv_buf = VAR_3;
 VAR_0->host_kvp_msg = (struct hv_kvp_msg *)&VAR_3[
     sizeof(struct hv_vmbus_pipe_hdr) +
     sizeof(struct hv_vmbus_icmsg_hdr)];
}
