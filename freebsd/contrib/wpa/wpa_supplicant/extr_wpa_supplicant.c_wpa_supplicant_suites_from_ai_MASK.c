
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int wpa; } ;
struct wpa_ssid {int group_cipher; int pairwise_cipher; int key_mgmt; } ;
struct wpa_ie_data {int group_cipher; int pairwise_cipher; int key_mgmt; int capabilities; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wpa_supplicant*,int ,char*) ;
 int FUNC_1 (struct wpa_supplicant*,int ,char*,...) ;
 int FUNC_2 (int ,struct wpa_ie_data*) ;
 scalar_t__ FUNC_3 (struct wpa_supplicant*,struct wpa_ssid*) ;

__attribute__((used)) static int FUNC_4(struct wpa_supplicant *VAR_4,
      struct wpa_ssid *VAR_5,
      struct wpa_ie_data *VAR_6)
{
 int VAR_7 = FUNC_2(VAR_4->wpa, VAR_6);
 if (VAR_7) {
  if (VAR_7 == -2) {
   FUNC_1(VAR_4, VAR_2, "WPA: Failed to parse WPA IE "
    "from association info");
  }
  return -1;
 }

 FUNC_0(VAR_4, VAR_1, "WPA: Using WPA IE from AssocReq to set "
  "cipher suites");
 if (!(VAR_6->group_cipher & VAR_5->group_cipher)) {
  FUNC_1(VAR_4, VAR_2, "WPA: Driver used disabled group "
   "cipher 0x%x (mask 0x%x) - reject",
   VAR_6->group_cipher, VAR_5->group_cipher);
  return -1;
 }
 if (!(VAR_6->pairwise_cipher & VAR_5->pairwise_cipher)) {
  FUNC_1(VAR_4, VAR_2, "WPA: Driver used disabled pairwise "
   "cipher 0x%x (mask 0x%x) - reject",
   VAR_6->pairwise_cipher, VAR_5->pairwise_cipher);
  return -1;
 }
 if (!(VAR_6->key_mgmt & VAR_5->key_mgmt)) {
  FUNC_1(VAR_4, VAR_2, "WPA: Driver used disabled key "
   "management 0x%x (mask 0x%x) - reject",
   VAR_6->key_mgmt, VAR_5->key_mgmt);
  return -1;
 }
 return 0;
}
