
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_supplicant {int own_addr; int pending_interface_addr; } ;
struct wpa_ssid {size_t ssid_len; scalar_t__ mode; int bssid; int ssid; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,size_t) ;
 int FUNC_1 (int *,int ,size_t) ;
 scalar_t__ FUNC_2 (struct wpa_supplicant*,int ) ;
 scalar_t__ FUNC_3 (struct wpa_supplicant*) ;
 struct wpa_ssid* FUNC_4 (struct wpa_supplicant*,int const*,int const*,size_t) ;

__attribute__((used)) static int FUNC_5(void *VAR_3, const u8 *VAR_4, const u8 *VAR_5,
         size_t VAR_6, u8 *VAR_7,
         u8 *VAR_8, size_t *VAR_9,
         u8 *VAR_10)
{
 struct wpa_supplicant *VAR_11 = VAR_3;
 struct wpa_ssid *VAR_12;

 VAR_12 = FUNC_4(VAR_11, VAR_4, VAR_5, VAR_6);
 if (VAR_12) {
  FUNC_0(VAR_8, VAR_12->ssid, VAR_12->ssid_len);
  *VAR_9 = VAR_12->ssid_len;
  FUNC_0(VAR_7, VAR_12->bssid, VAR_0);

  if (VAR_12->mode != VAR_1) {
   FUNC_1(VAR_10, 0, VAR_0);
  } else if (FUNC_3(VAR_11)) {
   if (FUNC_2(VAR_11, VAR_2))
    return 0;

   FUNC_0(VAR_10,
      VAR_11->pending_interface_addr, VAR_0);
  } else {
   FUNC_0(VAR_10, VAR_11->own_addr,
      VAR_0);
  }
  return 1;
 }

 return 0;
}
