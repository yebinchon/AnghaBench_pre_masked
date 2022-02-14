
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef scalar_t__ u64 ;
typedef int u32 ;
struct ieee802_11_elems {size_t const* ie_start; size_t total_len; int parse_error; size_t const* ssid; size_t ssid_len; size_t const* supp_rates; size_t supp_rates_len; size_t const* ds_params; size_t tim_len; size_t const* challenge; size_t challenge_len; size_t const* wmm_info; size_t wmm_info_len; size_t const* wmm_param; size_t wmm_param_len; size_t const* rsn; size_t rsn_len; size_t const* erp_info; size_t const* ext_supp_rates; size_t ext_supp_rates_len; size_t const* opmode_notif; size_t const* mesh_id; size_t mesh_id_len; size_t const* peering; size_t peering_len; size_t const* preq; size_t preq_len; size_t const* prep; size_t prep_len; size_t const* perr; size_t perr_len; size_t const* country_elem; size_t country_elem_len; size_t const* pwr_constr_elem; void* timeout_int; void* wide_bw_chansw_ie; void* sec_chan_offs; void* ext_chansw_ie; void* ch_switch_ie; void* rann; void* awake_window; void* mesh_config; void* vht_operation; void* vht_cap_elem; void* ht_operation; void* ht_cap_elem; void* tim; } ;
struct ieee80211_vht_operation {int dummy; } ;
struct ieee80211_vht_cap {int dummy; } ;
struct ieee80211_timeout_interval_ie {int dummy; } ;
struct ieee80211_tim_ie {int dummy; } ;
struct ieee80211_sec_chan_offs_ie {int dummy; } ;
struct ieee80211_rann_ie {int dummy; } ;
struct ieee80211_meshconf_ie {int dummy; } ;
struct ieee80211_ht_operation {int dummy; } ;
struct ieee80211_ht_cap {int dummy; } ;
struct ieee80211_ext_chansw_ie {int dummy; } ;
struct ieee80211_channel_sw_ie {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (size_t,int ) ;
 int FUNC_2 (int ,int) ;
 size_t* FUNC_3 (int const,size_t const*,size_t) ;
 int FUNC_4 (int ,size_t const*,size_t) ;
 int FUNC_5 (struct ieee802_11_elems*,int ,int) ;
 int VAR_0 ;
 int FUNC_6 (size_t,int ) ;

u32 FUNC_7(const u8 *VAR_1, size_t VAR_2, bool VAR_3,
          struct ieee802_11_elems *VAR_4,
          u64 VAR_5, u32 VAR_6)
{
 size_t VAR_7 = VAR_2;
 const u8 *VAR_8 = VAR_1;
 bool VAR_9 = VAR_5 != 0;
 FUNC_0(VAR_0, 256);
 const u8 *VAR_10;

 FUNC_2(VAR_0, 256);
 FUNC_5(VAR_4, 0, sizeof(*VAR_4));
 VAR_4->ie_start = VAR_1;
 VAR_4->total_len = VAR_2;

 while (VAR_7 >= 2) {
  u8 VAR_11, VAR_12;
  bool VAR_13;

  VAR_11 = *VAR_8++;
  VAR_12 = *VAR_8++;
  VAR_7 -= 2;

  if (VAR_12 > VAR_7) {
   VAR_4->parse_error = 1;
   break;
  }

  switch (VAR_11) {
  case 135:
  case 134:
  case 151:
  case 155:
  case 160:
  case 133:
  case 148:
  case 159:
  case 137:
  case 154:
  case 152:
  case 150:
  case 149:
  case 130:
  case 129:
  case 145:
  case 146:
  case 143:
  case 140:
  case 141:
  case 142:
  case 138:
  case 158:
  case 153:
  case 156:
  case 139:
  case 132:
  case 136:
  case 128:




   if (FUNC_6(VAR_11, VAR_0)) {
    VAR_4->parse_error = 1;
    VAR_7 -= VAR_12;
    VAR_8 += VAR_12;
    continue;
   }
   break;
  }

  if (VAR_9 && VAR_11 < 64 && (VAR_5 & (1ULL << VAR_11)))
   VAR_6 = FUNC_4(VAR_6, VAR_8 - 2, VAR_12 + 2);

  VAR_13 = 0;

  switch (VAR_11) {
  case 135:
   VAR_4->ssid = VAR_8;
   VAR_4->ssid_len = VAR_12;
   break;
  case 134:
   VAR_4->supp_rates = VAR_8;
   VAR_4->supp_rates_len = VAR_12;
   break;
  case 155:
   if (VAR_12 >= 1)
    VAR_4->ds_params = VAR_8;
   else
    VAR_13 = 1;
   break;
  case 133:
   if (VAR_12 >= sizeof(struct ieee80211_tim_ie)) {
    VAR_4->tim = (void *)VAR_8;
    VAR_4->tim_len = VAR_12;
   } else
    VAR_13 = 1;
   break;
  case 159:
   VAR_4->challenge = VAR_8;
   VAR_4->challenge_len = VAR_12;
   break;
  case 131:
   if (VAR_12 >= 4 && VAR_8[0] == 0x00 && VAR_8[1] == 0x50 &&
       VAR_8[2] == 0xf2) {


    if (VAR_9)
     VAR_6 = FUNC_4(VAR_6, VAR_8 - 2, VAR_12 + 2);

    if (VAR_12 >= 5 && VAR_8[3] == 2) {

     if (VAR_8[4] == 0) {
      VAR_4->wmm_info = VAR_8;
      VAR_4->wmm_info_len = VAR_12;
     } else if (VAR_8[4] == 1) {
      VAR_4->wmm_param = VAR_8;
      VAR_4->wmm_param_len = VAR_12;
     }
    }
   }
   break;
  case 137:
   VAR_4->rsn = VAR_8;
   VAR_4->rsn_len = VAR_12;
   break;
  case 154:
   if (VAR_12 >= 1)
    VAR_4->erp_info = VAR_8;
   else
    VAR_13 = 1;
   break;
  case 152:
   VAR_4->ext_supp_rates = VAR_8;
   VAR_4->ext_supp_rates_len = VAR_12;
   break;
  case 150:
   if (VAR_12 >= sizeof(struct ieee80211_ht_cap))
    VAR_4->ht_cap_elem = (void *)VAR_8;
   else
    VAR_13 = 1;
   break;
  case 149:
   if (VAR_12 >= sizeof(struct ieee80211_ht_operation))
    VAR_4->ht_operation = (void *)VAR_8;
   else
    VAR_13 = 1;
   break;
  case 130:
   if (VAR_12 >= sizeof(struct ieee80211_vht_cap))
    VAR_4->vht_cap_elem = (void *)VAR_8;
   else
    VAR_13 = 1;
   break;
  case 129:
   if (VAR_12 >= sizeof(struct ieee80211_vht_operation))
    VAR_4->vht_operation = (void *)VAR_8;
   else
    VAR_13 = 1;
   break;
  case 144:
   if (VAR_12 > 0)
    VAR_4->opmode_notif = VAR_8;
   else
    VAR_13 = 1;
   break;
  case 145:
   VAR_4->mesh_id = VAR_8;
   VAR_4->mesh_id_len = VAR_12;
   break;
  case 146:
   if (VAR_12 >= sizeof(struct ieee80211_meshconf_ie))
    VAR_4->mesh_config = (void *)VAR_8;
   else
    VAR_13 = 1;
   break;
  case 143:
   VAR_4->peering = VAR_8;
   VAR_4->peering_len = VAR_12;
   break;
  case 147:
   if (VAR_12 >= 2)
    VAR_4->awake_window = (void *)VAR_8;
   break;
  case 140:
   VAR_4->preq = VAR_8;
   VAR_4->preq_len = VAR_12;
   break;
  case 141:
   VAR_4->prep = VAR_8;
   VAR_4->prep_len = VAR_12;
   break;
  case 142:
   VAR_4->perr = VAR_8;
   VAR_4->perr_len = VAR_12;
   break;
  case 138:
   if (VAR_12 >= sizeof(struct ieee80211_rann_ie))
    VAR_4->rann = (void *)VAR_8;
   else
    VAR_13 = 1;
   break;
  case 158:
   if (VAR_12 != sizeof(struct ieee80211_channel_sw_ie)) {
    VAR_13 = 1;
    break;
   }
   VAR_4->ch_switch_ie = (void *)VAR_8;
   break;
  case 153:
   if (VAR_12 != sizeof(struct ieee80211_ext_chansw_ie)) {
    VAR_13 = 1;
    break;
   }
   VAR_4->ext_chansw_ie = (void *)VAR_8;
   break;
  case 136:
   if (VAR_12 != sizeof(struct ieee80211_sec_chan_offs_ie)) {
    VAR_13 = 1;
    break;
   }
   VAR_4->sec_chan_offs = (void *)VAR_8;
   break;
  case 128:
   if (!VAR_3 ||
       VAR_12 != sizeof(*VAR_4->wide_bw_chansw_ie)) {
    VAR_13 = 1;
    break;
   }
   VAR_4->wide_bw_chansw_ie = (void *)VAR_8;
   break;
  case 157:
   if (VAR_3) {
    VAR_13 = 1;
    break;
   }





   VAR_10 = FUNC_3(128,
           VAR_8, VAR_12);
   if (VAR_10) {
    if (VAR_10[1] == sizeof(*VAR_4->wide_bw_chansw_ie))
     VAR_4->wide_bw_chansw_ie =
      (void *)(VAR_10 + 2);
    else
     VAR_13 = 1;
   }
   break;
  case 156:
   VAR_4->country_elem = VAR_8;
   VAR_4->country_elem_len = VAR_12;
   break;
  case 139:
   if (VAR_12 != 1) {
    VAR_13 = 1;
    break;
   }
   VAR_4->pwr_constr_elem = VAR_8;
   break;
  case 132:
   if (VAR_12 >= sizeof(struct ieee80211_timeout_interval_ie))
    VAR_4->timeout_int = (void *)VAR_8;
   else
    VAR_13 = 1;
   break;
  default:
   break;
  }

  if (VAR_13)
   VAR_4->parse_error = 1;
  else
   FUNC_1(VAR_11, VAR_0);

  VAR_7 -= VAR_12;
  VAR_8 += VAR_12;
 }

 if (VAR_7 != 0)
  VAR_4->parse_error = 1;

 return VAR_6;
}
