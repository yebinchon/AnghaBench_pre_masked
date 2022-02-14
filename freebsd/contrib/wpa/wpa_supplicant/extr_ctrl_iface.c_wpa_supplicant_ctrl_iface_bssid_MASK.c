
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_supplicant {int conf; } ;
struct wpa_ssid {int bssid_set; int bssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *,int) ;
 char* FUNC_4 (char*,char) ;
 struct wpa_ssid* FUNC_5 (int ,int) ;
 int FUNC_6 (int ,char*,...) ;

__attribute__((used)) static int FUNC_7(struct wpa_supplicant *VAR_2,
        char *VAR_3)
{
 char *VAR_4;
 int VAR_5;
 struct wpa_ssid *VAR_6;
 u8 VAR_7[VAR_0];


 VAR_4 = FUNC_4(VAR_3, ' ');
 if (VAR_4 == ((void*)0))
  return -1;
 *VAR_4++ = '\0';
 VAR_5 = FUNC_0(VAR_3);
 FUNC_6(VAR_1, "CTRL_IFACE: id=%d bssid='%s'", VAR_5, VAR_4);
 if (FUNC_1(VAR_4, VAR_7)) {
  FUNC_6(VAR_1 ,"CTRL_IFACE: invalid BSSID '%s'", VAR_4);
  return -1;
 }

 VAR_6 = FUNC_5(VAR_2->conf, VAR_5);
 if (VAR_6 == ((void*)0)) {
  FUNC_6(VAR_1, "CTRL_IFACE: Could not find SSID id=%d "
      "to update", VAR_5);
  return -1;
 }

 FUNC_3(VAR_6->bssid, VAR_7, VAR_0);
 VAR_6->bssid_set = !FUNC_2(VAR_7);

 return 0;
}
