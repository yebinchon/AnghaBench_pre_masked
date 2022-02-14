
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* conf; } ;
struct wpa_ssid {scalar_t__ mode; int key_mgmt; int ssid_len; int ssid; struct wpa_ssid* pnext; } ;
struct TYPE_2__ {int num_prio; struct wpa_ssid** pssid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct wpa_supplicant*,int ,char*,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct wpa_supplicant*,struct wpa_ssid*) ;

__attribute__((used)) static struct wpa_ssid *
FUNC_3(struct wpa_supplicant *VAR_6)
{
 int VAR_7;
 struct wpa_ssid *VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_6->conf->num_prio; VAR_7++) {
  for (VAR_8 = VAR_6->conf->pssid[VAR_7]; VAR_8; VAR_8 = VAR_8->pnext)
  {
   if (FUNC_2(VAR_6, VAR_8))
    continue;

   if (VAR_8->mode == VAR_2 &&
       !(VAR_8->key_mgmt & (VAR_4 |
      VAR_5))) {
    FUNC_0(VAR_6, VAR_0,
     "IBSS RSN not supported in the build - cannot use the profile for SSID '%s'",
     FUNC_1(VAR_8->ssid,
           VAR_8->ssid_len));
    continue;
   }

   if (VAR_8->mode == VAR_2 ||
       VAR_8->mode == VAR_1 ||
       VAR_8->mode == VAR_3)
    return VAR_8;
  }
 }
 return ((void*)0);
}
