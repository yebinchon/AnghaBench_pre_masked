
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ usec; scalar_t__ sec; } ;
struct wpa_supplicant {int* select_network_scan_freqs; TYPE_1__ scan_min_time; int conf; } ;
struct wpa_ssid {int disabled; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int* FUNC_1 (struct wpa_supplicant*,char*) ;
 int FUNC_2 (int*) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 char* FUNC_4 (char*,char*) ;
 struct wpa_ssid* FUNC_5 (int ,int) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (struct wpa_supplicant*,struct wpa_ssid*) ;

__attribute__((used)) static int FUNC_8(
 struct wpa_supplicant *VAR_1, char *VAR_2)
{
 int VAR_3;
 struct wpa_ssid *VAR_4;
 char *VAR_5;


 if (FUNC_3(VAR_2, "any", 3) == 0) {
  FUNC_6(VAR_0, "CTRL_IFACE: SELECT_NETWORK any");
  VAR_4 = ((void*)0);
 } else {
  VAR_3 = FUNC_0(VAR_2);
  FUNC_6(VAR_0, "CTRL_IFACE: SELECT_NETWORK id=%d", VAR_3);

  VAR_4 = FUNC_5(VAR_1->conf, VAR_3);
  if (VAR_4 == ((void*)0)) {
   FUNC_6(VAR_0, "CTRL_IFACE: Could not find "
       "network id=%d", VAR_3);
   return -1;
  }
  if (VAR_4->disabled == 2) {
   FUNC_6(VAR_0, "CTRL_IFACE: Cannot use "
       "SELECT_NETWORK with persistent P2P group");
   return -1;
  }
 }

 VAR_5 = FUNC_4(VAR_2, " freq=");
 if (VAR_5) {
  int *VAR_6 = FUNC_1(VAR_1, VAR_5 + 6);
  if (VAR_6) {
   FUNC_2(VAR_1->select_network_scan_freqs);
   VAR_1->select_network_scan_freqs = VAR_6;
  }
 }

 VAR_1->scan_min_time.sec = 0;
 VAR_1->scan_min_time.usec = 0;
 FUNC_7(VAR_1, VAR_4);

 return 0;
}
