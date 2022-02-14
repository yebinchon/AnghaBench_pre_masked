
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u16 ;
struct wpa_supplicant {int bssid; scalar_t__ wnmsleep_used; int wpa; } ;
struct wpa_channel_info {int seg1_idx; int chanwidth; } ;
struct wnm_sleep_element {int const action_type; scalar_t__ status; size_t intval; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int const VAR_9 ;
 int const VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 size_t FUNC_0 (int const*) ;
 int FUNC_1 (int ) ;
 int VAR_13 ;
 scalar_t__ FUNC_2 (int const*,int,struct wpa_channel_info*,int ,int ) ;
 int FUNC_3 (struct wpa_supplicant*,int const*,int const*) ;
 int FUNC_4 (struct wpa_supplicant*,int const*,size_t) ;
 scalar_t__ FUNC_5 (struct wpa_supplicant*,struct wpa_channel_info*) ;
 int FUNC_6 (struct wpa_supplicant*,int ,int ,int *,int *) ;
 int FUNC_7 (int ,char*,int const*,int) ;
 int FUNC_8 (struct wpa_supplicant*,int ,char*,...) ;
 int FUNC_9 (int ,char*,...) ;
 scalar_t__ FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(struct wpa_supplicant *VAR_14,
     const u8 *VAR_15, int VAR_16)
{




 const u8 *VAR_17 = VAR_15;
 u16 VAR_18;
 struct wnm_sleep_element *VAR_19 = ((void*)0);

 const u8 *VAR_20 = ((void*)0);
 const u8 *VAR_21 = ((void*)0);




 size_t VAR_22;

 if (!VAR_14->wnmsleep_used) {
  FUNC_9(VAR_0,
      "WNM: Ignore WNM-Sleep Mode Response frame since WNM-Sleep Mode operation has not been requested");
  return;
 }

 if (VAR_16 < 3)
  return;
 VAR_18 = FUNC_0(VAR_15 + 1);

 FUNC_9(VAR_0, "WNM-Sleep Mode Response token=%u key_len_total=%d",
     VAR_15[0], VAR_18);
 VAR_22 = VAR_16 - 3;
 if (VAR_18 > VAR_22) {
  FUNC_9(VAR_1, "WNM: Too short frame for Key Data field");
  return;
 }
 VAR_17 += 3 + VAR_18;
 while (VAR_17 - VAR_15 + 1 < VAR_16) {
  u8 VAR_23 = *(VAR_17 + 1);
  if (2 + VAR_23 > VAR_15 + VAR_16 - VAR_17) {
   FUNC_9(VAR_1, "WNM: Invalid IE len %u", VAR_23);
   break;
  }
  FUNC_7(VAR_0, "WNM: Element", VAR_17, 2 + VAR_23);
  if (*VAR_17 == VAR_6 && VAR_23 >= 4)
   VAR_19 = (struct wnm_sleep_element *) VAR_17;
  else if (*VAR_17 == VAR_5) {
   if (!VAR_20)
    VAR_20 = VAR_17;
   VAR_21 = VAR_17;






  } else
   FUNC_9(VAR_0, "EID %d not recognized", *VAR_17);
  VAR_17 += VAR_23 + 2;
 }

 if (!VAR_19) {
  FUNC_9(VAR_0, "No WNM-Sleep IE found");
  return;
 }
 VAR_14->wnmsleep_used = 0;

 if (VAR_19->status == VAR_11 ||
     VAR_19->status == VAR_12) {
  FUNC_9(VAR_0, "Successfully recv WNM-Sleep Response "
      "frame (action=%d, intval=%d)",
      VAR_19->action_type, VAR_19->intval);
  if (VAR_19->action_type == VAR_9) {
   FUNC_3(VAR_14, VAR_20,
           VAR_21);
  } else if (VAR_19->action_type == VAR_10) {
   FUNC_4(VAR_14, VAR_15, VAR_18);
  }
 } else {
  FUNC_9(VAR_0, "Reject recv WNM-Sleep Response frame "
      "(action=%d, intval=%d)",
      VAR_19->action_type, VAR_19->intval);
  if (VAR_19->action_type == VAR_9)
   FUNC_6(VAR_14, VAR_7,
      VAR_14->bssid, ((void*)0), ((void*)0));
  else if (VAR_19->action_type == VAR_10)
   FUNC_6(VAR_14, VAR_8,
      VAR_14->bssid, ((void*)0), ((void*)0));
 }
}
