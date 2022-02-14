
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* conf; } ;
struct wpa_ssid {int dummy; } ;
struct wpa_driver_capa {int key_mgmt; } ;
struct TYPE_2__ {scalar_t__ pmf; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct wpa_ssid*,char*,char const*,int ) ;
 int FUNC_1 (struct wpa_supplicant*,struct wpa_driver_capa*) ;

__attribute__((used)) static int FUNC_2(struct wpa_supplicant *VAR_2,
     struct wpa_ssid *VAR_3)
{
 const char *VAR_4 = ((void*)0);
 if (!VAR_4)
  VAR_4 = VAR_2->conf->pmf != VAR_0 ?
   "WPA-EAP WPA-EAP-SHA256" : "WPA-EAP";
 if (FUNC_0(VAR_3, "key_mgmt", VAR_4, 0) < 0 ||
     FUNC_0(VAR_3, "proto", "RSN", 0) < 0 ||
     FUNC_0(VAR_3, "ieee80211w", "1", 0) < 0 ||
     FUNC_0(VAR_3, "pairwise", "CCMP", 0) < 0)
  return -1;
 return 0;
}
