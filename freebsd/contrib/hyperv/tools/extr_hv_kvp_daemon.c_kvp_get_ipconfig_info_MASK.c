
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hv_kvp_ipaddr_value {int dhcp_enabled; scalar_t__ dns_addr; scalar_t__ gate_way; } ;
typedef int dhcp_info ;
typedef int cmd ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (char*,int,int *) ;
 int FUNC_1 (char*,char*,int,int ,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,int,char*,char*,...) ;
 int FUNC_5 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_6(char *VAR_4, struct hv_kvp_ipaddr_value *VAR_5)
{
 char VAR_6[512];
 char VAR_7[128];
 char *VAR_8;
 FILE *VAR_9;




 FUNC_4(VAR_6, sizeof(VAR_6), "netstat -rn | grep %s | awk '/default/ {print $2 }'", VAR_4);




 FUNC_1(VAR_6, (char *)VAR_5->gate_way,
     (VAR_2 * 2), VAR_1, 0);



 FUNC_4(VAR_6, sizeof(VAR_6), "netstat -rn inet6 | grep %s | awk '/default/ {print $2 }'", VAR_4);




 FUNC_1(VAR_6, (char *)VAR_5->gate_way,
     (VAR_2 * 2), VAR_0, 1);
 FUNC_4(VAR_6, sizeof(VAR_6), "%s", "sh /usr/libexec/hyperv/hv_get_dns_info");




 FUNC_1(VAR_6, (char *)VAR_5->dns_addr,
     (VAR_3 * 2), VAR_1, 0);
 FUNC_4(VAR_6, sizeof(VAR_6), "%s %s",
     "sh /usr/libexec/hyperv/hv_get_dhcp_info", VAR_4);

 VAR_9 = FUNC_3(VAR_6, "r");
 if (VAR_9 == ((void*)0)) {
  return;
 }

 VAR_8 = FUNC_0(VAR_7, sizeof(VAR_7), VAR_9);
 if (VAR_8 == ((void*)0)) {
  FUNC_2(VAR_9);
  return;
 }

 if (!FUNC_5(VAR_8, "Enabled", 7)) {
  VAR_5->dhcp_enabled = 1;
 } else{
  VAR_5->dhcp_enabled = 0;
 }

 FUNC_2(VAR_9);
}
