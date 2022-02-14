
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_ssid {int wpa_psk_file; TYPE_1__* wpa_psk; int * wpa_passphrase; } ;
struct hostapd_bss_config {struct hostapd_ssid ssid; } ;
struct TYPE_2__ {int group; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct hostapd_ssid*) ;
 scalar_t__ FUNC_1 (struct hostapd_ssid*) ;
 int FUNC_2 (int ,char*) ;

int FUNC_3(struct hostapd_bss_config *VAR_1)
{
 struct hostapd_ssid *VAR_2 = &VAR_1->ssid;

 if (VAR_2->wpa_passphrase != ((void*)0)) {
  if (VAR_2->wpa_psk != ((void*)0)) {
   FUNC_2(VAR_0, "Using pre-configured WPA PSK "
       "instead of passphrase");
  } else {
   FUNC_2(VAR_0, "Deriving WPA PSK based on "
       "passphrase");
   if (FUNC_1(VAR_2) < 0)
    return -1;
  }
  VAR_2->wpa_psk->group = 1;
 }

 return FUNC_0(VAR_2->wpa_psk_file, &VAR_1->ssid);
}
