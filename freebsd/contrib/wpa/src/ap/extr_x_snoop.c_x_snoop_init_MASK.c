
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_data {struct hostapd_bss_config* conf; } ;
struct hostapd_bss_config {char* bridge; int isolate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct hostapd_data*,int ,int) ;
 scalar_t__ FUNC_1 (struct hostapd_data*,int ,int) ;
 int FUNC_2 (int ,char*) ;

int FUNC_3(struct hostapd_data *VAR_5)
{
 struct hostapd_bss_config *VAR_6 = VAR_5->conf;

 if (!VAR_6->isolate) {
  FUNC_2(VAR_4,
      "x_snoop: ap_isolate must be enabled for x_snoop");
  return -1;
 }

 if (VAR_6->bridge[0] == '\0') {
  FUNC_2(VAR_4,
      "x_snoop: Bridge must be configured for x_snoop");
  return -1;
 }

 if (FUNC_0(VAR_5, VAR_2,
      1)) {
  FUNC_2(VAR_4,
      "x_snoop: Failed to enable hairpin_mode on the bridge port");
  return -1;
 }

 if (FUNC_0(VAR_5, VAR_3, 1)) {
  FUNC_2(VAR_4,
      "x_snoop: Failed to enable proxyarp on the bridge port");
  return -1;
 }

 if (FUNC_1(VAR_5, VAR_1,
      1)) {
  FUNC_2(VAR_4,
      "x_snoop: Failed to enable accepting gratuitous ARP on the bridge");
  return -1;
 }
 return 0;
}
