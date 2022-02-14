
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {int addr_family; int dhcp_enabled; scalar_t__ adapter_id; scalar_t__ dns_addr; scalar_t__ gate_way; scalar_t__ sub_net; scalar_t__ ip_addr; } ;
struct TYPE_6__ {TYPE_2__ kvp_ip_val; } ;
struct hv_kvp_msg {TYPE_3__ body; } ;
struct TYPE_4__ {int addr_family; int dhcp_enabled; scalar_t__ adapter_id; scalar_t__ dns_addr; scalar_t__ gate_way; scalar_t__ sub_net; scalar_t__ ip_addr; } ;
struct hv_kvp_ip_msg {TYPE_1__ kvp_ip_val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ,char*,int ,int,int*) ;

__attribute__((used)) static int
FUNC_2(struct hv_kvp_msg *VAR_3,
        struct hv_kvp_ip_msg *VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 int VAR_10 = 1;

 FUNC_1((uint16_t *)VAR_4->kvp_ip_val.ip_addr,
     VAR_2,
     (char *)VAR_3->body.kvp_ip_val.ip_addr,
     FUNC_0((char *)VAR_3->body.kvp_ip_val.ip_addr),
     VAR_10,
     &VAR_5);
 FUNC_1((uint16_t *)VAR_4->kvp_ip_val.sub_net,
     VAR_2,
     (char *)VAR_3->body.kvp_ip_val.sub_net,
     FUNC_0((char *)VAR_3->body.kvp_ip_val.sub_net),
     VAR_10,
     &VAR_6);
 FUNC_1((uint16_t *)VAR_4->kvp_ip_val.gate_way,
     VAR_1,
     (char *)VAR_3->body.kvp_ip_val.gate_way,
     FUNC_0((char *)VAR_3->body.kvp_ip_val.gate_way),
     VAR_10,
     &VAR_7);
 FUNC_1((uint16_t *)VAR_4->kvp_ip_val.dns_addr,
     VAR_2,
     (char *)VAR_3->body.kvp_ip_val.dns_addr,
     FUNC_0((char *)VAR_3->body.kvp_ip_val.dns_addr),
     VAR_10,
     &VAR_8);
 FUNC_1((uint16_t *)VAR_4->kvp_ip_val.adapter_id,
     VAR_0,
     (char *)VAR_3->body.kvp_ip_val.adapter_id,
     FUNC_0((char *)VAR_3->body.kvp_ip_val.adapter_id),
     VAR_10,
     &VAR_9);

 VAR_4->kvp_ip_val.dhcp_enabled = VAR_3->body.kvp_ip_val.dhcp_enabled;
 VAR_4->kvp_ip_val.addr_family = VAR_3->body.kvp_ip_val.addr_family;

 return (VAR_5 | VAR_6 | VAR_7 | VAR_8 | VAR_9);
}
