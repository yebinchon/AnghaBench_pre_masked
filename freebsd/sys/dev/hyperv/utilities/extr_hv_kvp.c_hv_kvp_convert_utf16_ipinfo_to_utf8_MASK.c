
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct vmbus_channel {int dummy; } ;
struct TYPE_6__ {scalar_t__ dns_addr; scalar_t__ gate_way; scalar_t__ sub_net; int dhcp_enabled; int addr_family; scalar_t__ adapter_id; scalar_t__ ip_addr; } ;
struct TYPE_7__ {TYPE_2__ kvp_ip_val; } ;
struct TYPE_5__ {int operation; } ;
struct hv_kvp_msg {TYPE_3__ body; TYPE_1__ kvp_hdr; } ;
struct TYPE_8__ {scalar_t__ dns_addr; scalar_t__ gate_way; scalar_t__ sub_net; int dhcp_enabled; int addr_family; scalar_t__ adapter_id; scalar_t__ ip_addr; } ;
struct hv_kvp_ip_msg {TYPE_4__ kvp_ip_val; int operation; } ;
typedef int device_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int **,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (char*,int ,int ) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*,int ,int *,int ,int,int*) ;
 int FUNC_8 (struct vmbus_channel*) ;
 struct vmbus_channel* FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(struct hv_kvp_ip_msg *VAR_5,
        struct hv_kvp_msg *VAR_6)
{
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12 = 1;
 device_t *VAR_13;
 int VAR_14;


 FUNC_7((char *)VAR_6->body.kvp_ip_val.ip_addr,
     VAR_3,
     (uint16_t *)VAR_5->kvp_ip_val.ip_addr,
     VAR_3,
     VAR_12,
     &VAR_7);


 FUNC_7((char *)VAR_6->body.kvp_ip_val.adapter_id,
     VAR_1,
     (uint16_t *)VAR_5->kvp_ip_val.adapter_id,
     VAR_1,
     VAR_12,
     &VAR_11);

 if (FUNC_1(FUNC_0("hn"), &VAR_13, &VAR_14) == 0) {
  for (VAR_14 = VAR_14 - 1; VAR_14 >= 0; VAR_14--) {
   device_t VAR_15 = VAR_13[VAR_14];
   struct vmbus_channel *VAR_16;
   char VAR_17[VAR_0];
   int VAR_18;

   VAR_16 = FUNC_9(VAR_15);
   VAR_18 = FUNC_4(FUNC_8(VAR_16), VAR_17,
       sizeof(VAR_17));






   if (FUNC_6(VAR_17,
       ((char *)&VAR_6->body.kvp_ip_val.adapter_id) + 1,
       VAR_18) == 0) {
    FUNC_5((char *)VAR_6->body.kvp_ip_val.adapter_id,
        FUNC_2(VAR_15), VAR_1);
    break;
   }
  }
  FUNC_3(VAR_13, VAR_4);
 }


 VAR_6->kvp_hdr.operation = VAR_5->operation;
 VAR_6->body.kvp_ip_val.addr_family = VAR_5->kvp_ip_val.addr_family;
 VAR_6->body.kvp_ip_val.dhcp_enabled = VAR_5->kvp_ip_val.dhcp_enabled;
 FUNC_7((char *)VAR_6->body.kvp_ip_val.sub_net, VAR_3,
     (uint16_t *)VAR_5->kvp_ip_val.sub_net,
     VAR_3,
     VAR_12,
     &VAR_8);

 FUNC_7((char *)VAR_6->body.kvp_ip_val.gate_way, VAR_2,
     (uint16_t *)VAR_5->kvp_ip_val.gate_way,
     VAR_2,
     VAR_12,
     &VAR_9);

 FUNC_7((char *)VAR_6->body.kvp_ip_val.dns_addr, VAR_3,
     (uint16_t *)VAR_5->kvp_ip_val.dns_addr,
     VAR_3,
     VAR_12,
     &VAR_10);

 return (VAR_7 | VAR_8 | VAR_9 | VAR_10 | VAR_11);
}
