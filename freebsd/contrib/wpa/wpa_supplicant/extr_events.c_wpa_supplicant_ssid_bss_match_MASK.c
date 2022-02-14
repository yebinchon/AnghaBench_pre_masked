
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wpa_supplicant {int owe_transition_search; scalar_t__ owe_transition_select; } ;
struct wpa_ssid {int key_mgmt; scalar_t__* wep_key_len; size_t wep_tx_keyidx; int proto; int pairwise_cipher; int group_cipher; int group_mgmt_cipher; scalar_t__ owe_transition_bss_select_count; scalar_t__ owe_only; } ;
struct wpa_ie_data {int pairwise_cipher; int group_cipher; int proto; int mgmt_group_cipher; int key_mgmt; int capabilities; int has_group; int has_pairwise; } ;
struct wpa_bss {int freq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__* FUNC_0 (struct wpa_bss*,int ) ;
 scalar_t__* FUNC_1 (struct wpa_bss*,int ) ;
 int FUNC_2 (struct wpa_supplicant*,int ,char*,...) ;
 void* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (scalar_t__ const*,scalar_t__ const,struct wpa_ie_data*) ;
 scalar_t__ FUNC_6 (struct wpa_supplicant*,struct wpa_ssid*) ;
 scalar_t__ FUNC_7 (struct wpa_bss*,int ) ;
 int FUNC_8 (struct wpa_supplicant*,struct wpa_ssid*,struct wpa_bss*) ;

__attribute__((used)) static int FUNC_9(struct wpa_supplicant *VAR_20,
      struct wpa_ssid *VAR_21,
      struct wpa_bss *VAR_22, int VAR_23)
{
 struct wpa_ie_data VAR_24;
 int VAR_25 = 0;
 const u8 *VAR_26, *VAR_27;
 int VAR_28;
 int VAR_29;

 VAR_28 = FUNC_8(VAR_20, VAR_21, VAR_22);
 if (VAR_28 >= 0)
  return VAR_28;


 VAR_29 = !FUNC_4(VAR_21->key_mgmt) &&
  (((VAR_21->key_mgmt & VAR_14) &&
    VAR_21->wep_key_len[VAR_21->wep_tx_keyidx] > 0) ||
   (VAR_21->key_mgmt & VAR_13));

 VAR_26 = FUNC_0(VAR_22, VAR_7);
 while ((VAR_21->proto & (VAR_18 | VAR_17)) && VAR_26) {
  VAR_25++;

  if (FUNC_5(VAR_26, 2 + VAR_26[1], &VAR_24)) {
   if (VAR_23)
    FUNC_2(VAR_20, VAR_3,
     "   skip RSN IE - parse failed");
   break;
  }
  if (!VAR_24.has_pairwise)
   VAR_24.pairwise_cipher = FUNC_3(VAR_22->freq);
  if (!VAR_24.has_group)
   VAR_24.group_cipher = FUNC_3(VAR_22->freq);

  if (VAR_29 &&
      (VAR_24.group_cipher & (VAR_11 | VAR_10)))
  {
   if (VAR_23)
    FUNC_2(VAR_20, VAR_3,
     "   selected based on TSN in RSN IE");
   return 1;
  }

  if (!(VAR_24.proto & VAR_21->proto) &&
      !(VAR_21->proto & VAR_17)) {
   if (VAR_23)
    FUNC_2(VAR_20, VAR_3,
     "   skip RSN IE - proto mismatch");
   break;
  }

  if (!(VAR_24.pairwise_cipher & VAR_21->pairwise_cipher)) {
   if (VAR_23)
    FUNC_2(VAR_20, VAR_3,
     "   skip RSN IE - PTK cipher mismatch");
   break;
  }

  if (!(VAR_24.group_cipher & VAR_21->group_cipher)) {
   if (VAR_23)
    FUNC_2(VAR_20, VAR_3,
     "   skip RSN IE - GTK cipher mismatch");
   break;
  }

  if (VAR_21->group_mgmt_cipher &&
      !(VAR_24.mgmt_group_cipher & VAR_21->group_mgmt_cipher)) {
   if (VAR_23)
    FUNC_2(VAR_20, VAR_3,
     "   skip RSN IE - group mgmt cipher mismatch");
   break;
  }

  if (!(VAR_24.key_mgmt & VAR_21->key_mgmt)) {
   if (VAR_23)
    FUNC_2(VAR_20, VAR_3,
     "   skip RSN IE - key mgmt mismatch");
   break;
  }
  if ((VAR_24.capabilities & VAR_9) &&
      FUNC_6(VAR_20, VAR_21) ==
      VAR_4) {
   if (VAR_23)
    FUNC_2(VAR_20, VAR_3,
     "   skip RSN IE - no mgmt frame protection enabled but AP requires it");
   break;
  }
  if (VAR_23)
   FUNC_2(VAR_20, VAR_3,
    "   selected based on RSN IE");
  return 1;
 }
 VAR_27 = FUNC_1(VAR_22, VAR_12);
 while ((VAR_21->proto & VAR_19) && VAR_27) {
  VAR_25++;

  if (FUNC_5(VAR_27, 2 + VAR_27[1], &VAR_24)) {
   if (VAR_23)
    FUNC_2(VAR_20, VAR_3,
     "   skip WPA IE - parse failed");
   break;
  }

  if (VAR_29 &&
      (VAR_24.group_cipher & (VAR_11 | VAR_10)))
  {
   if (VAR_23)
    FUNC_2(VAR_20, VAR_3,
     "   selected based on TSN in WPA IE");
   return 1;
  }

  if (!(VAR_24.proto & VAR_21->proto)) {
   if (VAR_23)
    FUNC_2(VAR_20, VAR_3,
     "   skip WPA IE - proto mismatch");
   break;
  }

  if (!(VAR_24.pairwise_cipher & VAR_21->pairwise_cipher)) {
   if (VAR_23)
    FUNC_2(VAR_20, VAR_3,
     "   skip WPA IE - PTK cipher mismatch");
   break;
  }

  if (!(VAR_24.group_cipher & VAR_21->group_cipher)) {
   if (VAR_23)
    FUNC_2(VAR_20, VAR_3,
     "   skip WPA IE - GTK cipher mismatch");
   break;
  }

  if (!(VAR_24.key_mgmt & VAR_21->key_mgmt)) {
   if (VAR_23)
    FUNC_2(VAR_20, VAR_3,
     "   skip WPA IE - key mgmt mismatch");
   break;
  }

  if (VAR_23)
   FUNC_2(VAR_20, VAR_3,
    "   selected based on WPA IE");
  return 1;
 }

 if ((VAR_21->key_mgmt & VAR_13) && !VAR_27 &&
     !VAR_26) {
  if (VAR_23)
   FUNC_2(VAR_20, VAR_3,
    "   allow for non-WPA IEEE 802.1X");
  return 1;
 }
 if ((VAR_21->proto & (VAR_19 | VAR_18)) &&
     FUNC_4(VAR_21->key_mgmt) && VAR_25 == 0) {
  if (VAR_23)
   FUNC_2(VAR_20, VAR_3,
    "   skip - no WPA/RSN proto match");
  return 0;
 }

 if ((VAR_21->key_mgmt & VAR_15) &&
     FUNC_1(VAR_22, VAR_5)) {
  if (VAR_23)
   FUNC_2(VAR_20, VAR_3, "   allow in OSEN");
  return 1;
 }

 if (!FUNC_4(VAR_21->key_mgmt)) {
  if (VAR_23)
   FUNC_2(VAR_20, VAR_3, "   allow in non-WPA/WPA2");
  return 1;
 }

 if (VAR_23)
  FUNC_2(VAR_20, VAR_3,
   "   reject due to mismatch with WPA/WPA2");

 return 0;
}
