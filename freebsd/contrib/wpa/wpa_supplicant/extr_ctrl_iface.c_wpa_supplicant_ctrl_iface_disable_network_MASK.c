
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int conf; } ;
struct wpa_ssid {int disabled; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 struct wpa_ssid* FUNC_2 (int ,int) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct wpa_supplicant*,struct wpa_ssid*) ;

__attribute__((used)) static int FUNC_5(
 struct wpa_supplicant *VAR_1, char *VAR_2)
{
 int VAR_3;
 struct wpa_ssid *VAR_4;


 if (FUNC_1(VAR_2, "all") == 0) {
  FUNC_3(VAR_0, "CTRL_IFACE: DISABLE_NETWORK all");
  VAR_4 = ((void*)0);
 } else {
  VAR_3 = FUNC_0(VAR_2);
  FUNC_3(VAR_0, "CTRL_IFACE: DISABLE_NETWORK id=%d", VAR_3);

  VAR_4 = FUNC_2(VAR_1->conf, VAR_3);
  if (VAR_4 == ((void*)0)) {
   FUNC_3(VAR_0, "CTRL_IFACE: Could not find "
       "network id=%d", VAR_3);
   return -1;
  }
  if (VAR_4->disabled == 2) {
   FUNC_3(VAR_0, "CTRL_IFACE: Cannot use "
       "DISABLE_NETWORK with persistent P2P "
       "group");
   return -1;
  }
 }
 FUNC_4(VAR_1, VAR_4);

 return 0;
}
