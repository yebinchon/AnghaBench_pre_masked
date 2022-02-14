
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hv_kvp_ipaddr_value {scalar_t__ dhcp_enabled; scalar_t__ dns_addr; scalar_t__ gate_way; scalar_t__ sub_net; scalar_t__ ip_addr; } ;
typedef int if_file ;
typedef int cmd ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (int *,char*,char*,char*) ;
 int FUNC_6 (char*,int,char*,char*,char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int
FUNC_8(char *VAR_3, struct hv_kvp_ipaddr_value *VAR_4)
{
 int VAR_5 = 0;
 char VAR_6[128];
 FILE *VAR_7;
 char VAR_8[512];
 char *VAR_9;




 FUNC_6(VAR_6, sizeof(VAR_6), "%s%s", "/var/db/hyperv",
     "hv_set_ip_data");
 VAR_7 = FUNC_2(VAR_6, "w");

 if (VAR_7 == ((void*)0)) {
  FUNC_0(VAR_1, "FreeBSD Failed to open config file\n");
  return (VAR_2);
 }





 VAR_9 = FUNC_4(VAR_3);
 if (VAR_9 == ((void*)0)) {
  VAR_5 = VAR_0;
  goto kvp_set_ip_info_error;
 }

 VAR_5 = FUNC_5(VAR_7, "HWADDR", "", VAR_9);
 if (VAR_5) {
  goto kvp_set_ip_info_error;
 }


 VAR_5 = FUNC_5(VAR_7, "IF_NAME", "", VAR_3);
 if (VAR_5) {
  goto kvp_set_ip_info_error;
 }


 VAR_5 = FUNC_5(VAR_7, "IP_ADDR", "",
     (char *)VAR_4->ip_addr);
 if (VAR_5) {
  goto kvp_set_ip_info_error;
 }


 VAR_5 = FUNC_5(VAR_7, "SUBNET", "",
     (char *)VAR_4->sub_net);
 if (VAR_5) {
  goto kvp_set_ip_info_error;
 }



 VAR_5 = FUNC_5(VAR_7, "GATEWAY", "",
     (char *)VAR_4->gate_way);
 if (VAR_5) {
  goto kvp_set_ip_info_error;
 }


 VAR_5 = FUNC_5(VAR_7, "DNS", "", (char *)VAR_4->dns_addr);
 if (VAR_5) {
  goto kvp_set_ip_info_error;
 }


 if (VAR_4->dhcp_enabled) {
  VAR_5 = FUNC_5(VAR_7, "DHCP", "", "1");
 } else{
  VAR_5 = FUNC_5(VAR_7, "DHCP", "", "0");
 }

 if (VAR_5) {
  goto kvp_set_ip_info_error;
 }

 FUNC_3(VAR_9);
 FUNC_1(VAR_7);






 FUNC_6(VAR_8, sizeof(VAR_8), "%s %s",
     "sh /usr/libexec/hyperv/hv_set_ifconfig", VAR_6);
 FUNC_7(VAR_8);
 return (0);

kvp_set_ip_info_error:
 FUNC_0(VAR_1, "Failed to write config file\n");
 FUNC_3(VAR_9);
 FUNC_1(VAR_7);
 return (VAR_5);
}
