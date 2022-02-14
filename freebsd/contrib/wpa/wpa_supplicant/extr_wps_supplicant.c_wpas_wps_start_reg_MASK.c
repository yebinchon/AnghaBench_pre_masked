
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int val ;
typedef int u8 ;
struct wps_new_ap_settings {int key_hex; int encr; int auth; int ssid_hex; } ;
struct wpa_supplicant {scalar_t__ wps_fragment_size; scalar_t__ ap_iface; } ;
struct TYPE_2__ {scalar_t__ fragment_size; } ;
struct wpa_ssid {int temporary; TYPE_1__ eap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,struct wpa_supplicant*,int *) ;
 int FUNC_1 (char*,int,char*,...) ;
 scalar_t__ FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (struct wpa_ssid*,char*,char*,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct wpa_supplicant*) ;
 struct wpa_ssid* FUNC_6 (struct wpa_supplicant*,int,int *,int const*) ;
 int FUNC_7 (struct wpa_supplicant*,struct wpa_ssid*,int const*,int ) ;
 int VAR_2 ;

int FUNC_8(struct wpa_supplicant *VAR_3, const u8 *VAR_4,
         const char *VAR_5, struct wps_new_ap_settings *VAR_6)
{
 struct wpa_ssid *VAR_7;
 char VAR_8[200];
 char *VAR_9, *VAR_10;
 int VAR_11;
 if (!VAR_5)
  return -1;
 FUNC_5(VAR_3);
 VAR_7 = FUNC_6(VAR_3, 1, ((void*)0), VAR_4);
 if (VAR_7 == ((void*)0))
  return -1;
 VAR_7->temporary = 1;
 VAR_9 = VAR_8;
 VAR_10 = VAR_9 + sizeof(VAR_8);
 VAR_11 = FUNC_1(VAR_9, VAR_10 - VAR_9, "\"pin=%s", VAR_5);
 if (FUNC_2(VAR_10 - VAR_9, VAR_11))
  return -1;
 VAR_9 += VAR_11;
 if (VAR_6) {
  VAR_11 = FUNC_1(VAR_9, VAR_10 - VAR_9, " new_ssid=%s new_auth=%s "
      "new_encr=%s new_key=%s",
      VAR_6->ssid_hex, VAR_6->auth,
      VAR_6->encr, VAR_6->key_hex);
  if (FUNC_2(VAR_10 - VAR_9, VAR_11))
   return -1;
  VAR_9 += VAR_11;
 }
 VAR_11 = FUNC_1(VAR_9, VAR_10 - VAR_9, "\"");
 if (FUNC_2(VAR_10 - VAR_9, VAR_11))
  return -1;
 if (FUNC_3(VAR_7, "phase1", VAR_8, 0) < 0)
  return -1;
 if (VAR_3->wps_fragment_size)
  VAR_7->eap.fragment_size = VAR_3->wps_fragment_size;
 FUNC_0(VAR_1, 0, VAR_2,
          VAR_3, ((void*)0));
 FUNC_7(VAR_3, VAR_7, VAR_4, 0);
 return 0;
}
