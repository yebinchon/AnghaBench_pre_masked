
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ usec; scalar_t__ sec; } ;
struct wpa_supplicant {TYPE_1__ scan_min_time; int conf; } ;
struct wpa_ssid {int disabled; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 struct wpa_ssid* FUNC_3 (int ,int) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct wpa_supplicant*,struct wpa_ssid*) ;

__attribute__((used)) static int FUNC_6(
 struct wpa_supplicant *VAR_1, char *VAR_2)
{
 int VAR_3;
 struct wpa_ssid *VAR_4;


 if (FUNC_1(VAR_2, "all") == 0) {
  FUNC_4(VAR_0, "CTRL_IFACE: ENABLE_NETWORK all");
  VAR_4 = ((void*)0);
 } else {
  VAR_3 = FUNC_0(VAR_2);
  FUNC_4(VAR_0, "CTRL_IFACE: ENABLE_NETWORK id=%d", VAR_3);

  VAR_4 = FUNC_3(VAR_1->conf, VAR_3);
  if (VAR_4 == ((void*)0)) {
   FUNC_4(VAR_0, "CTRL_IFACE: Could not find "
       "network id=%d", VAR_3);
   return -1;
  }
  if (VAR_4->disabled == 2) {
   FUNC_4(VAR_0, "CTRL_IFACE: Cannot use "
       "ENABLE_NETWORK with persistent P2P group");
   return -1;
  }

  if (FUNC_2(VAR_2, " no-connect")) {
   VAR_4->disabled = 0;
   return 0;
  }
 }
 VAR_1->scan_min_time.sec = 0;
 VAR_1->scan_min_time.usec = 0;
 FUNC_5(VAR_1, VAR_4);

 return 0;
}
