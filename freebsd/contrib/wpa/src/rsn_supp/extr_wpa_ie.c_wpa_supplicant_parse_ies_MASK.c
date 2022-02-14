
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_eapol_ie_parse {int const* rsn_ie; int rsn_ie_len; int const* mdie; int mdie_len; int const* ftie; int ftie_len; int const* reassoc_deadline; int const* key_lifetime; int const* lnkid; int lnkid_len; int const* ext_capab; int ext_capab_len; int const* supp_rates; int supp_rates_len; int const* ext_supp_rates; int ext_supp_rates_len; int const* ht_capabilities; int aid; int const* vht_capabilities; int qosinfo; int const* supp_channels; int supp_channels_len; int const* supp_oper_classes; int supp_oper_classes_len; } ;
struct rsn_mdie {int dummy; } ;
struct rsn_ftie {int dummy; } ;
struct ieee80211_vht_capabilities {int dummy; } ;
struct ieee80211_ht_capabilities {int dummy; } ;


 int VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;
 int const VAR_7 ;
 int const VAR_8 ;
 int const VAR_9 ;
 int const VAR_10 ;
 int const VAR_11 ;
 int const VAR_12 ;
 int const VAR_13 ;
 int const VAR_14 ;
 int const VAR_15 ;
 int const VAR_16 ;
 int const VAR_17 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (struct wpa_eapol_ie_parse*,int ,int) ;
 int FUNC_2 (int ,char*,int const*,int const) ;
 int FUNC_3 (int ,char*,int const*,size_t) ;
 int FUNC_4 (int const*,int const*,struct wpa_eapol_ie_parse*) ;
 int FUNC_5 (int const*,int const*,struct wpa_eapol_ie_parse*) ;
 int FUNC_6 (int ,char*,int const,int const,int) ;

int FUNC_7(const u8 *VAR_18, size_t VAR_19,
        struct wpa_eapol_ie_parse *VAR_20)
{
 const u8 *VAR_21, *VAR_22;
 int VAR_23 = 0;

 FUNC_1(VAR_20, 0, sizeof(*VAR_20));
 for (VAR_21 = VAR_18, VAR_22 = VAR_21 + VAR_19; VAR_22 - VAR_21 > 1; VAR_21 += 2 + VAR_21[1]) {
  if (VAR_21[0] == 0xdd &&
      ((VAR_21 == VAR_18 + VAR_19 - 1) || VAR_21[1] == 0)) {

   break;
  }
  if (2 + VAR_21[1] > VAR_22 - VAR_21) {
   FUNC_6(VAR_0, "WPA: EAPOL-Key Key Data "
       "underflow (ie=%d len=%d pos=%d)",
       VAR_21[0], VAR_21[1], (int) (VAR_21 - VAR_18));
   FUNC_3(VAR_0, "WPA: Key Data",
     VAR_18, VAR_19);
   VAR_23 = -1;
   break;
  }
  if (*VAR_21 == VAR_8) {
   VAR_20->rsn_ie = VAR_21;
   VAR_20->rsn_ie_len = VAR_21[1] + 2;
   FUNC_2(VAR_0, "WPA: RSN IE in EAPOL-Key",
        VAR_20->rsn_ie, VAR_20->rsn_ie_len);
  } else if (*VAR_21 == VAR_6 &&
      VAR_21[1] >= sizeof(struct rsn_mdie)) {
   VAR_20->mdie = VAR_21;
   VAR_20->mdie_len = VAR_21[1] + 2;
   FUNC_2(VAR_0, "WPA: MDIE in EAPOL-Key",
        VAR_20->mdie, VAR_20->mdie_len);
  } else if (*VAR_21 == VAR_3 &&
      VAR_21[1] >= sizeof(struct rsn_ftie)) {
   VAR_20->ftie = VAR_21;
   VAR_20->ftie_len = VAR_21[1] + 2;
   FUNC_2(VAR_0, "WPA: FTIE in EAPOL-Key",
        VAR_20->ftie, VAR_20->ftie_len);
  } else if (*VAR_21 == VAR_12 && VAR_21[1] >= 5) {
   if (VAR_21[2] == VAR_17) {
    VAR_20->reassoc_deadline = VAR_21;
    FUNC_2(VAR_0, "WPA: Reassoc Deadline "
         "in EAPOL-Key",
         VAR_20->reassoc_deadline, VAR_21[1] + 2);
   } else if (VAR_21[2] == VAR_16) {
    VAR_20->key_lifetime = VAR_21;
    FUNC_2(VAR_0, "WPA: KeyLifetime "
         "in EAPOL-Key",
         VAR_20->key_lifetime, VAR_21[1] + 2);
   } else {
    FUNC_2(VAR_0, "WPA: Unrecognized "
         "EAPOL-Key Key Data IE",
         VAR_21, 2 + VAR_21[1]);
   }
  } else if (*VAR_21 == VAR_5) {
   if (VAR_21[1] >= 18) {
    VAR_20->lnkid = VAR_21;
    VAR_20->lnkid_len = VAR_21[1] + 2;
   }
  } else if (*VAR_21 == VAR_1) {
   VAR_20->ext_capab = VAR_21;
   VAR_20->ext_capab_len = VAR_21[1] + 2;
  } else if (*VAR_21 == VAR_11) {
   VAR_20->supp_rates = VAR_21;
   VAR_20->supp_rates_len = VAR_21[1] + 2;
  } else if (*VAR_21 == VAR_2) {
   VAR_20->ext_supp_rates = VAR_21;
   VAR_20->ext_supp_rates_len = VAR_21[1] + 2;
  } else if (*VAR_21 == VAR_4 &&
      VAR_21[1] >= sizeof(struct ieee80211_ht_capabilities)) {
   VAR_20->ht_capabilities = VAR_21 + 2;
  } else if (*VAR_21 == VAR_14) {
   if (VAR_21[1] >= 2)
    VAR_20->aid = FUNC_0(VAR_21 + 2) & 0x3fff;
  } else if (*VAR_21 == VAR_15 &&
      VAR_21[1] >= sizeof(struct ieee80211_vht_capabilities))
  {
   VAR_20->vht_capabilities = VAR_21 + 2;
  } else if (*VAR_21 == VAR_7 && VAR_21[1] >= 1) {
   VAR_20->qosinfo = VAR_21[2];
  } else if (*VAR_21 == VAR_9) {
   VAR_20->supp_channels = VAR_21 + 2;
   VAR_20->supp_channels_len = VAR_21[1];
  } else if (*VAR_21 == VAR_10) {






   if (VAR_21[1] >= 2 && VAR_21[1] <= 253) {
    VAR_20->supp_oper_classes = VAR_21 + 2;
    VAR_20->supp_oper_classes_len = VAR_21[1];
   }
  } else if (*VAR_21 == VAR_13) {
   VAR_23 = FUNC_4(VAR_21, VAR_22, VAR_20);
   if (VAR_23 < 0)
    break;
   if (VAR_23 > 0) {
    VAR_23 = 0;
    break;
   }

   VAR_23 = FUNC_5(VAR_21, VAR_22, VAR_20);
   if (VAR_23 < 0)
    break;
   if (VAR_23 > 0) {
    VAR_23 = 0;
    break;
   }
  } else {
   FUNC_2(VAR_0, "WPA: Unrecognized EAPOL-Key "
        "Key Data IE", VAR_21, 2 + VAR_21[1]);
  }
 }

 return VAR_23;
}
