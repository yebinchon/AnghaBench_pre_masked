
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int pending_bssid; int bssid; struct wpa_bss* current_bss; } ;
struct wpa_bss {scalar_t__ ssid_len; int bssid; int ssid; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct wpa_supplicant *VAR_1, struct wpa_bss *VAR_2)
{
 if (VAR_2 == VAR_1->current_bss)
  return 1;

 if (VAR_1->current_bss &&
     (VAR_2->ssid_len != VAR_1->current_bss->ssid_len ||
      FUNC_1(VAR_2->ssid, VAR_1->current_bss->ssid,
         VAR_2->ssid_len) != 0))
  return 0;

 return !FUNC_0(VAR_2->bssid) &&
  (FUNC_1(VAR_2->bssid, VAR_1->bssid, VAR_0) == 0 ||
   FUNC_1(VAR_2->bssid, VAR_1->pending_bssid, VAR_0) == 0);
}
