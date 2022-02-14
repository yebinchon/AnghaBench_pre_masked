
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wpabuf {int dummy; } ;
struct wpa_supplicant {int dummy; } ;
struct wpa_bss {int bssid; int freq; } ;
struct ieee80211_vht_operation {int vht_op_info_chwidth; } ;
struct ieee80211_ht_operation {int ht_param; } ;
typedef enum phy_type { ____Placeholder_phy_type } phy_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int ,int,int,int*,int*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct wpabuf**,int ,int ,int,int,int,int) ;
 int FUNC_3 (struct wpa_supplicant*,struct wpa_bss*) ;
 int* FUNC_4 (struct wpa_bss*,int ) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(struct wpa_supplicant *VAR_10,
          struct wpa_bss *VAR_11, struct wpabuf **VAR_12,
          u8 VAR_13)
{
 const u8 *VAR_14;
 u8 VAR_15, VAR_16;
 int VAR_17 = 0, VAR_18 = 0;
 enum phy_type VAR_19;
 u32 VAR_20;
 struct ieee80211_ht_operation *VAR_21 = ((void*)0);
 struct ieee80211_vht_operation *VAR_22 = ((void*)0);

 VAR_14 = FUNC_4(VAR_11, VAR_8);
 if (VAR_14 && VAR_14[1] >= 2) {
  VAR_21 = (struct ieee80211_ht_operation *) (VAR_14 + 2);

  if (VAR_21->ht_param & VAR_3)
   VAR_17 = 1;
  else if (VAR_21->ht_param &
    VAR_4)
   VAR_17 = -1;
 }

 VAR_14 = FUNC_4(VAR_11, VAR_9);
 if (VAR_14 && VAR_14[1] >= 1) {
  VAR_22 = (struct ieee80211_vht_operation *) (VAR_14 + 2);

  if (VAR_22->vht_op_info_chwidth == VAR_1 ||
      VAR_22->vht_op_info_chwidth == VAR_0 ||
      VAR_22->vht_op_info_chwidth == VAR_2)
   VAR_18 = VAR_22->vht_op_info_chwidth;
 }

 if (FUNC_0(VAR_11->freq, VAR_17, VAR_18, &VAR_15,
       &VAR_16) == VAR_6) {
  FUNC_5(VAR_5,
      "WNM: Cannot determine operating class and channel");
  return -2;
 }

 VAR_19 = FUNC_1(VAR_11->freq, (VAR_21 != ((void*)0)),
       (VAR_22 != ((void*)0)));
 if (VAR_19 == VAR_7) {
  FUNC_5(VAR_5,
      "WNM: Cannot determine BSS phy type for Neighbor Report");
  return -2;
 }

 VAR_20 = FUNC_3(VAR_10, VAR_11);

 return FUNC_2(VAR_12, VAR_11->bssid, VAR_20, VAR_15, VAR_16, VAR_19,
          VAR_13);
}
