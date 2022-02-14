
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_supplicant {size_t disallow_aps_ssid_count; struct wpa_ssid_value* disallow_aps_ssid; } ;
struct wpa_ssid_value {size_t ssid_len; int ssid; } ;


 scalar_t__ FUNC_0 (int const*,int ,size_t) ;

int FUNC_1(struct wpa_supplicant *VAR_0, const u8 *VAR_1,
      size_t VAR_2)
{
 size_t VAR_3;

 if (VAR_0->disallow_aps_ssid == ((void*)0) || VAR_1 == ((void*)0))
  return 0;

 for (VAR_3 = 0; VAR_3 < VAR_0->disallow_aps_ssid_count; VAR_3++) {
  struct wpa_ssid_value *VAR_4 = &VAR_0->disallow_aps_ssid[VAR_3];
  if (VAR_2 == VAR_4->ssid_len &&
      FUNC_0(VAR_1, VAR_4->ssid, VAR_2) == 0)
   return 1;
 }

 return 0;
}
