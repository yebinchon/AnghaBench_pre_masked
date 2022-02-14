
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_supplicant {struct wpa_ssid* current_ssid; } ;
struct wpa_ssid {scalar_t__ ssid_len; int ssid; } ;
struct wpa_bss {int dummy; } ;


 struct wpa_bss* FUNC_0 (struct wpa_supplicant*,int const*,int ,scalar_t__) ;
 struct wpa_bss* FUNC_1 (struct wpa_supplicant*,int const*) ;

__attribute__((used)) static struct wpa_bss * FUNC_2(
 struct wpa_supplicant *VAR_0, const u8 *VAR_1)
{
 struct wpa_bss *VAR_2 = ((void*)0);
 struct wpa_ssid *VAR_3 = VAR_0->current_ssid;

 if (VAR_3->ssid_len > 0)
  VAR_2 = FUNC_0(VAR_0, VAR_1, VAR_3->ssid, VAR_3->ssid_len);
 if (!VAR_2)
  VAR_2 = FUNC_1(VAR_0, VAR_1);

 return VAR_2;
}
