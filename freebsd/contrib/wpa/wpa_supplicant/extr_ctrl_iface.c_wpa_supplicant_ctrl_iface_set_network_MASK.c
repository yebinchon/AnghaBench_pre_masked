
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_supplicant {int conf; } ;
struct wpa_ssid {int bssid_set; int disabled; int bssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int *,int ,int) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (char*) ;
 struct wpa_ssid* FUNC_5 (int ,int) ;
 int FUNC_6 (int ,char*,int *,int ) ;
 int FUNC_7 (int ,char*,int,...) ;
 int FUNC_8 (struct wpa_supplicant*,struct wpa_ssid*,char*,char*) ;
 int FUNC_9 (struct wpa_supplicant*,struct wpa_ssid*) ;
 int FUNC_10 (struct wpa_supplicant*,struct wpa_ssid*) ;

__attribute__((used)) static int FUNC_11(
 struct wpa_supplicant *VAR_2, char *VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7;
 struct wpa_ssid *VAR_8;
 char *VAR_9, *VAR_10;
 u8 VAR_11[VAR_0];


 VAR_9 = FUNC_3(VAR_3, ' ');
 if (VAR_9 == ((void*)0))
  return -1;
 *VAR_9++ = '\0';

 VAR_10 = FUNC_3(VAR_9, ' ');
 if (VAR_10 == ((void*)0))
  return -1;
 *VAR_10++ = '\0';

 VAR_4 = FUNC_0(VAR_3);
 FUNC_7(VAR_1, "CTRL_IFACE: SET_NETWORK id=%d name='%s'",
     VAR_4, VAR_9);
 FUNC_6(VAR_1, "CTRL_IFACE: value",
         (u8 *) VAR_10, FUNC_4(VAR_10));

 VAR_8 = FUNC_5(VAR_2->conf, VAR_4);
 if (VAR_8 == ((void*)0)) {
  FUNC_7(VAR_1, "CTRL_IFACE: Could not find network "
      "id=%d", VAR_4);
  return -1;
 }

 VAR_6 = VAR_8->bssid_set;
 VAR_7 = VAR_8->disabled;
 FUNC_2(VAR_11, VAR_8->bssid, VAR_0);
 VAR_5 = FUNC_8(VAR_2, VAR_8, VAR_9,
             VAR_10);
 if (VAR_5 == 0 &&
     (VAR_8->bssid_set != VAR_6 ||
      FUNC_1(VAR_8->bssid, VAR_11, VAR_0) != 0))
  FUNC_9(VAR_2, VAR_8);

 if (VAR_7 != VAR_8->disabled &&
     (VAR_7 == 2 || VAR_8->disabled == 2))
  FUNC_10(VAR_2, VAR_8);

 return VAR_5;
}
