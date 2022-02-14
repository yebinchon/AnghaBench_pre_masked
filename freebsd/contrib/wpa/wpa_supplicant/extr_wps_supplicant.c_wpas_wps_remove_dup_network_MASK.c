
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* conf; struct wpa_ssid* current_ssid; } ;
struct wpa_ssid {scalar_t__ bssid_set; scalar_t__ ssid_len; scalar_t__ auth_alg; scalar_t__ key_mgmt; int group_cipher; scalar_t__ wps_run; int id; int pairwise_cipher; int proto; scalar_t__ passphrase; scalar_t__ psk; scalar_t__ psk_set; scalar_t__ ssid; scalar_t__ bssid; struct wpa_ssid* next; } ;
struct TYPE_2__ {struct wpa_ssid* ssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct wpa_supplicant*,struct wpa_ssid*) ;

__attribute__((used)) static void FUNC_6(struct wpa_supplicant *VAR_3,
     struct wpa_ssid *VAR_4)
{
 struct wpa_ssid *VAR_5, *VAR_6;

 for (VAR_5 = VAR_3->conf->ssid, VAR_6 = VAR_5 ? VAR_5->next : ((void*)0); VAR_5;
      VAR_5 = VAR_6, VAR_6 = VAR_5 ? VAR_5->next : ((void*)0)) {




  if (VAR_5 == VAR_4)
   continue;

  if (VAR_5->bssid_set || VAR_4->bssid_set) {
   if (VAR_5->bssid_set != VAR_4->bssid_set)
    continue;
   if (FUNC_0(VAR_5->bssid, VAR_4->bssid, VAR_0) !=
       0)
    continue;
  }


  if (VAR_5->ssid_len == 0 || VAR_5->ssid_len != VAR_4->ssid_len)
   continue;

  if (VAR_5->ssid && VAR_4->ssid) {
   if (FUNC_0(VAR_5->ssid, VAR_4->ssid,
          VAR_5->ssid_len) != 0)
    continue;
  } else if (VAR_5->ssid || VAR_4->ssid)
   continue;


  if (VAR_5->auth_alg != VAR_4->auth_alg ||
      VAR_5->key_mgmt != VAR_4->key_mgmt ||
      (VAR_5->group_cipher != VAR_4->group_cipher &&
       !(VAR_5->group_cipher & VAR_4->group_cipher &
         VAR_2)))
   continue;







  if (VAR_5->wps_run && VAR_5->wps_run == VAR_4->wps_run &&
      FUNC_3(VAR_5->key_mgmt)) {
   if (VAR_4->passphrase && VAR_5->passphrase &&
       FUNC_1(VAR_4->passphrase, VAR_5->passphrase) !=
       0) {
    FUNC_4(VAR_1,
        "WPS: M8 Creds with different passphrase - do not merge");
    continue;
   }

   if (VAR_4->psk_set &&
       (!VAR_5->psk_set ||
        FUNC_0(VAR_4->psk, VAR_5->psk, 32) != 0)) {
    FUNC_4(VAR_1,
        "WPS: M8 Creds with different PSK - do not merge");
    continue;
   }

   if ((VAR_4->passphrase && !VAR_5->passphrase) ||
       (!VAR_4->passphrase && VAR_5->passphrase)) {
    FUNC_4(VAR_1,
        "WPS: M8 Creds with different passphrase/PSK type - do not merge");
    continue;
   }

   FUNC_4(VAR_1,
       "WPS: Workaround - merge likely WPA/WPA2-mixed mode creds in same M8 message");
   VAR_4->proto |= VAR_5->proto;
   VAR_4->pairwise_cipher |= VAR_5->pairwise_cipher;
  } else {




   if (VAR_5->proto != VAR_4->proto ||
       VAR_5->pairwise_cipher != VAR_4->pairwise_cipher)
    continue;
  }


  FUNC_4(VAR_1, "Remove duplicate network %d", VAR_5->id);
  FUNC_5(VAR_3, VAR_5);
  if (VAR_3->current_ssid == VAR_5)
   VAR_3->current_ssid = ((void*)0);
  FUNC_2(VAR_3->conf, VAR_5->id);
 }
}
