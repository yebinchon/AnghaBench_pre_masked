
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int conf; int eapol; struct wpa_ssid* current_ssid; int wpa; } ;
struct wpa_ssid {scalar_t__ passphrase; scalar_t__ ssid_len; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (struct wpa_ssid*,char*,char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct wpa_ssid*) ;
 int FUNC_5 (int ,char*,char*) ;
 int FUNC_6 (int ,struct wpa_ssid*) ;

__attribute__((used)) static int FUNC_7(
 struct wpa_supplicant *VAR_1, struct wpa_ssid *VAR_2,
 char *VAR_3, char *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4, 0);
 if (VAR_5 < 0) {
  FUNC_5(VAR_0, "CTRL_IFACE: Failed to set network "
      "variable '%s'", VAR_3);
  return -1;
 }
 if (VAR_5 == 1)
  return 0;

 if (FUNC_1(VAR_3, "bssid") != 0 &&
     FUNC_1(VAR_3, "bssid_hint") != 0 &&
     FUNC_1(VAR_3, "priority") != 0) {
  FUNC_6(VAR_1->wpa, VAR_2);

  if (VAR_1->current_ssid == VAR_2 ||
      VAR_1->current_ssid == ((void*)0)) {




   FUNC_0(VAR_1->eapol);
  }
 }

 if ((FUNC_1(VAR_3, "psk") == 0 &&
      VAR_4[0] == '"' && VAR_2->ssid_len) ||
     (FUNC_1(VAR_3, "ssid") == 0 && VAR_2->passphrase))
  FUNC_4(VAR_2);
 else if (FUNC_1(VAR_3, "priority") == 0)
  FUNC_3(VAR_1->conf);

 return 0;
}
