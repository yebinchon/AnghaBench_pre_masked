
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_supplicant {unsigned int assoc_freq; int own_addr; struct wpa_ssid* current_ssid; } ;
struct wpa_ssid {size_t ssid_len; int ssid; int bssid; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *,int ,size_t) ;
 int FUNC_1 (struct wpa_supplicant*) ;
 struct wpa_supplicant* FUNC_2 (struct wpa_supplicant*) ;
 struct wpa_ssid* FUNC_3 (struct wpa_supplicant*) ;

__attribute__((used)) static int FUNC_4(void *VAR_1, u8 *VAR_2,
       u8 *VAR_3, size_t *VAR_4, int *VAR_5,
       unsigned int *VAR_6)
{
 struct wpa_supplicant *VAR_7 = VAR_1;
 struct wpa_supplicant *VAR_8;
 struct wpa_ssid *VAR_9;
 *VAR_5 = 0;

 if (VAR_6)
  *VAR_6 = 0;

 VAR_8 = FUNC_2(VAR_7);
 if (!VAR_8) {
  VAR_9 = FUNC_3(VAR_7);
  *VAR_5 = FUNC_1(VAR_7);
  if (VAR_9)
   FUNC_0(VAR_2, VAR_9->bssid, VAR_0);
  else
   return 0;
 } else {
  VAR_9 = VAR_8->current_ssid;
  FUNC_0(VAR_2, VAR_8->own_addr, VAR_0);
  if (VAR_6)
   *VAR_6 = VAR_8->assoc_freq;
 }

 FUNC_0(VAR_3, VAR_9->ssid, VAR_9->ssid_len);
 *VAR_4 = VAR_9->ssid_len;

 return 1;
}
