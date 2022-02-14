
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {int enabled_4addr_mode; TYPE_1__* current_ssid; } ;
struct ieee802_11_elems {int* multi_ap; int multi_ap_len; } ;
struct TYPE_2__ {int key_mgmt; int multi_ap_backhaul_sta; } ;


 int VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int* FUNC_0 (int const*,size_t,int ) ;
 scalar_t__ FUNC_1 (int const*,size_t,struct ieee802_11_elems*,int) ;
 scalar_t__ FUNC_2 (struct wpa_supplicant*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct wpa_supplicant*,int ) ;

__attribute__((used)) static void FUNC_5(struct wpa_supplicant *VAR_8,
     const u8 *VAR_9, size_t VAR_10)
{
 struct ieee802_11_elems VAR_11;
 const u8 *VAR_12, *VAR_13;
 size_t VAR_14;

 if (!VAR_8->current_ssid ||
     !VAR_8->current_ssid->multi_ap_backhaul_sta ||
     !VAR_9 ||
     FUNC_1(VAR_9, VAR_10, &VAR_11, 1) == VAR_5)
  return;

 if (!VAR_11.multi_ap || VAR_11.multi_ap_len < 7) {
  FUNC_3(VAR_1, "AP doesn't support Multi-AP protocol");
  goto fail;
 }

 VAR_13 = VAR_11.multi_ap + 4;
 VAR_14 = VAR_11.multi_ap_len - 4;

 VAR_12 = FUNC_0(VAR_13, VAR_14, VAR_4);
 if (!VAR_12 || VAR_12[1] < 1) {
  FUNC_3(VAR_1, "invalid Multi-AP sub elem type");
  goto fail;
 }

 if (!(VAR_12[2] & VAR_2)) {
  if ((VAR_12[2] & VAR_3) &&
      VAR_8->current_ssid->key_mgmt & VAR_7) {
   FUNC_3(VAR_1,
       "WPS active, accepting fronthaul-only BSS");

   return;
  }
  FUNC_3(VAR_1, "AP doesn't support backhaul BSS");
  goto fail;
 }

 if (FUNC_2(VAR_8, 1) < 0) {
  FUNC_3(VAR_0, "Failed to set 4addr mode");
  goto fail;
 }
 VAR_8->enabled_4addr_mode = 1;
 return;

fail:
 FUNC_4(VAR_8, VAR_6);
}
