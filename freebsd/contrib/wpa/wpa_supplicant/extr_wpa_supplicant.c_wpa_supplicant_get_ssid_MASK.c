
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {int drv_flags; TYPE_1__* conf; } ;
struct wpa_ssid {size_t ssid_len; int key_mgmt; struct wpa_ssid* next; int * bssid; scalar_t__ bssid_set; int * ssid; } ;
struct TYPE_2__ {scalar_t__ ap_scan; struct wpa_ssid* ssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *,int *,int) ;
 scalar_t__ FUNC_1 (struct wpa_supplicant*,int *,int *,size_t) ;
 scalar_t__ FUNC_2 (struct wpa_supplicant*,int *) ;
 int FUNC_3 (struct wpa_supplicant*,int *) ;
 int FUNC_4 (struct wpa_supplicant*,int ,char*) ;
 int FUNC_5 (struct wpa_supplicant*,struct wpa_ssid*) ;

struct wpa_ssid * FUNC_6(struct wpa_supplicant *VAR_5)
{
 struct wpa_ssid *VAR_6;
 u8 VAR_7[VAR_2];
 int VAR_8;
 size_t VAR_9;
 u8 VAR_10[VAR_0];
 int VAR_11;

 VAR_8 = FUNC_3(VAR_5, VAR_7);
 if (VAR_8 < 0) {
  FUNC_4(VAR_5, VAR_1, "Could not read SSID from "
   "driver");
  return ((void*)0);
 }
 VAR_9 = VAR_8;

 if (FUNC_2(VAR_5, VAR_10) < 0) {
  FUNC_4(VAR_5, VAR_1, "Could not read BSSID from "
   "driver");
  return ((void*)0);
 }

 VAR_11 = VAR_5->conf->ap_scan == 0 &&
  (VAR_5->drv_flags & VAR_3);

 VAR_6 = VAR_5->conf->ssid;
 while (VAR_6) {
  if (!FUNC_5(VAR_5, VAR_6) &&
      ((VAR_9 == VAR_6->ssid_len &&
        (!VAR_6->ssid ||
         FUNC_0(VAR_7, VAR_6->ssid, VAR_9) == 0)) ||
       VAR_11) &&
      (!VAR_6->bssid_set ||
       FUNC_0(VAR_10, VAR_6->bssid, VAR_0) == 0))
   return VAR_6;
  if (!FUNC_5(VAR_5, VAR_6) && VAR_6->bssid_set &&
      VAR_6->ssid_len == 0 &&
      FUNC_0(VAR_10, VAR_6->bssid, VAR_0) == 0)
   return VAR_6;

  VAR_6 = VAR_6->next;
 }

 return ((void*)0);
}
