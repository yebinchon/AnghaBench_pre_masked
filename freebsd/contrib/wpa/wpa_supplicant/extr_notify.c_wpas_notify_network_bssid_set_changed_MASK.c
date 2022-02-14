
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {struct wpa_ssid* current_ssid; } ;
struct wpa_ssid {int * bssid; scalar_t__ bssid_set; } ;


 int VAR_0 ;
 int FUNC_0 (struct wpa_supplicant*,int ,char*,char*) ;
 int FUNC_1 (struct wpa_supplicant*,int,int *) ;

void FUNC_2(struct wpa_supplicant *VAR_1,
        struct wpa_ssid *VAR_2)
{
 if (VAR_1->current_ssid != VAR_2)
  return;

 FUNC_0(VAR_1, VAR_0,
  "Network bssid config changed for the current network - within-ESS roaming %s",
  VAR_2->bssid_set ? "disabled" : "enabled");

 FUNC_1(VAR_1, !VAR_2->bssid_set,
   VAR_2->bssid_set ? VAR_2->bssid : ((void*)0));
}
