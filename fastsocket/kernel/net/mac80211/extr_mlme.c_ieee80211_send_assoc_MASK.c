
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct ieee80211_vht_cap {int dummy; } ;
struct ieee80211_supported_band {int n_bitrates; int n_channels; scalar_t__ band; TYPE_8__* channels; TYPE_7__* bitrates; } ;
struct TYPE_15__ {scalar_t__ addr; int chanctx_conf; } ;
struct ieee80211_if_managed {int flags; int uapsd_queues; int uapsd_max_sp_len; int mtx; struct ieee80211_mgd_assoc_data* assoc_data; } ;
struct TYPE_14__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {int smps_mode; TYPE_11__ vif; TYPE_10__ u; struct ieee80211_local* local; } ;
struct TYPE_21__ {void* listen_interval; void* capab_info; } ;
struct TYPE_20__ {int* current_ap; void* listen_interval; void* capab_info; } ;
struct TYPE_22__ {TYPE_4__ assoc_req; TYPE_3__ reassoc_req; } ;
struct ieee80211_mgmt {int* da; int* sa; int* bssid; TYPE_5__ u; void* frame_control; } ;
struct ieee80211_mgd_assoc_data {int ssid_len; size_t ie_len; int capability; scalar_t__ ie; scalar_t__ uapsd; scalar_t__ wmm; int ap_vht_cap; int ap_ht_param; scalar_t__ ssid; scalar_t__ prev_bssid; TYPE_2__* bss; scalar_t__ supp_rates_len; int supp_rates; } ;
struct TYPE_23__ {int listen_interval; } ;
struct TYPE_26__ {int flags; TYPE_6__ conf; scalar_t__ extra_tx_headroom; TYPE_1__* wiphy; } ;
struct ieee80211_local {TYPE_9__ hw; } ;
struct ieee80211_ht_cap {int dummy; } ;
struct ieee80211_channel {size_t band; int max_power; } ;
struct TYPE_16__ {struct ieee80211_channel* chan; } ;
struct ieee80211_chanctx_conf {TYPE_12__ def; } ;
struct TYPE_25__ {int center_freq; } ;
struct TYPE_24__ {int bitrate; } ;
struct TYPE_19__ {scalar_t__ bssid; } ;
struct TYPE_18__ {struct ieee80211_supported_band** bands; } ;
struct TYPE_17__ {int flags; } ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_13__* FUNC_2 (struct sk_buff*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 struct sk_buff* FUNC_5 (scalar_t__,int ) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (struct ieee80211_local*,struct ieee80211_sub_if_data*) ;
 int FUNC_8 (struct ieee80211_sub_if_data*,struct sk_buff*,int ,struct ieee80211_supported_band*,struct ieee80211_channel*,int ) ;
 int FUNC_9 (struct ieee80211_sub_if_data*,struct sk_buff*,struct ieee80211_supported_band*,int *) ;
 int FUNC_10 (int ,scalar_t__,struct ieee80211_supported_band*,int*) ;
 int FUNC_11 (int ) ;
 size_t FUNC_12 (scalar_t__,size_t,int const*,int ,size_t) ;
 size_t FUNC_13 (scalar_t__,size_t,size_t) ;
 int FUNC_14 (struct ieee80211_sub_if_data*,struct sk_buff*) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int*,scalar_t__,size_t) ;
 int FUNC_18 (struct ieee80211_mgmt*,int ,int) ;
 struct ieee80211_chanctx_conf* FUNC_19 (int ) ;
 int FUNC_20 () ;
 int FUNC_21 () ;
 int* FUNC_22 (struct sk_buff*,size_t) ;
 int FUNC_23 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static void FUNC_24(struct ieee80211_sub_if_data *VAR_22)
{
 struct ieee80211_local *VAR_23 = VAR_22->local;
 struct ieee80211_if_managed *VAR_24 = &VAR_22->u.mgd;
 struct ieee80211_mgd_assoc_data *VAR_25 = VAR_24->assoc_data;
 struct sk_buff *VAR_26;
 struct ieee80211_mgmt *VAR_27;
 u8 *VAR_28, VAR_29;
 size_t VAR_30 = 0, VAR_31;
 int VAR_32, VAR_33, VAR_34, VAR_35;
 u16 VAR_36;
 struct ieee80211_supported_band *VAR_37;
 struct ieee80211_chanctx_conf *VAR_38;
 struct ieee80211_channel *VAR_39;
 u32 VAR_40 = 0;

 FUNC_16(&VAR_24->mtx);

 FUNC_20();
 VAR_38 = FUNC_19(VAR_22->vif.chanctx_conf);
 if (FUNC_3(!VAR_38)) {
  FUNC_21();
  return;
 }
 VAR_39 = VAR_38->def.chan;
 FUNC_21();
 VAR_37 = VAR_23->hw.wiphy->bands[VAR_39->band];

 if (VAR_25->supp_rates_len) {






  VAR_34 = FUNC_10(VAR_25->supp_rates,
             VAR_25->supp_rates_len,
             VAR_37, &VAR_40);
 } else {





  VAR_40 = ~0;
  VAR_34 = VAR_37->n_bitrates;
 }

 VAR_26 = FUNC_5(VAR_23->hw.extra_tx_headroom +
   sizeof(*VAR_27) +
   2 + VAR_25->ssid_len +
   4 + VAR_34 +
   4 +
   2 + 2 * VAR_37->n_channels +
   2 + sizeof(struct ieee80211_ht_cap) +
   2 + sizeof(struct ieee80211_vht_cap) +
   VAR_25->ie_len +
   9,
   VAR_1);
 if (!VAR_26)
  return;

 FUNC_23(VAR_26, VAR_23->hw.extra_tx_headroom);

 VAR_36 = VAR_16;

 if (VAR_37->band == VAR_2) {
  if (!(VAR_23->hw.flags & VAR_5))
   VAR_36 |= VAR_19;
  if (!(VAR_23->hw.flags & VAR_4))
   VAR_36 |= VAR_18;
 }

 if (VAR_25->capability & VAR_17)
  VAR_36 |= VAR_17;

 if ((VAR_25->capability & VAR_20) &&
     (VAR_23->hw.flags & VAR_7))
  VAR_36 |= VAR_20;

 VAR_27 = (struct ieee80211_mgmt *) FUNC_22(VAR_26, 24);
 FUNC_18(VAR_27, 0, 24);
 FUNC_17(VAR_27->da, VAR_25->bss->bssid, VAR_0);
 FUNC_17(VAR_27->sa, VAR_22->vif.addr, VAR_0);
 FUNC_17(VAR_27->bssid, VAR_25->bss->bssid, VAR_0);

 if (!FUNC_15(VAR_25->prev_bssid)) {
  FUNC_22(VAR_26, 10);
  VAR_27->frame_control = FUNC_6(VAR_3 |
        VAR_11);
  VAR_27->u.reassoc_req.capab_info = FUNC_6(VAR_36);
  VAR_27->u.reassoc_req.listen_interval =
    FUNC_6(VAR_23->hw.conf.listen_interval);
  FUNC_17(VAR_27->u.reassoc_req.current_ap, VAR_25->prev_bssid,
         VAR_0);
 } else {
  FUNC_22(VAR_26, 4);
  VAR_27->frame_control = FUNC_6(VAR_3 |
        VAR_10);
  VAR_27->u.assoc_req.capab_info = FUNC_6(VAR_36);
  VAR_27->u.assoc_req.listen_interval =
    FUNC_6(VAR_23->hw.conf.listen_interval);
 }


 VAR_28 = FUNC_22(VAR_26, 2 + VAR_25->ssid_len);
 *VAR_28++ = 131;
 *VAR_28++ = VAR_25->ssid_len;
 FUNC_17(VAR_28, VAR_25->ssid, VAR_25->ssid_len);


 VAR_35 = VAR_34;
 if (VAR_35 > 8)
  VAR_35 = 8;

 VAR_28 = FUNC_22(VAR_26, VAR_35 + 2);
 *VAR_28++ = 128;
 *VAR_28++ = VAR_35;

 VAR_33 = 0;
 for (VAR_32 = 0; VAR_32 < VAR_37->n_bitrates; VAR_32++) {
  if (FUNC_1(VAR_32) & VAR_40) {
   int VAR_41 = VAR_37->bitrates[VAR_32].bitrate;
   *VAR_28++ = (u8) (VAR_41 / 5);
   if (++VAR_33 == 8)
    break;
  }
 }

 if (VAR_34 > VAR_33) {
  VAR_28 = FUNC_22(VAR_26, VAR_34 - VAR_33 + 2);
  *VAR_28++ = 137;
  *VAR_28++ = VAR_34 - VAR_33;

  for (VAR_32++; VAR_32 < VAR_37->n_bitrates; VAR_32++) {
   if (FUNC_1(VAR_32) & VAR_40) {
    int VAR_42 = VAR_37->bitrates[VAR_32].bitrate;
    *VAR_28++ = (u8) (VAR_42 / 5);
   }
  }
 }

 if (VAR_36 & VAR_20) {

  VAR_28 = FUNC_22(VAR_26, 4);
  *VAR_28++ = 135;
  *VAR_28++ = 2;
  *VAR_28++ = 0;
  *VAR_28++ = VAR_39->max_power;



  VAR_28 = FUNC_22(VAR_26, 2 * VAR_37->n_channels + 2);
  *VAR_28++ = 130;
  *VAR_28++ = 2 * VAR_37->n_channels;
  for (VAR_32 = 0; VAR_32 < VAR_37->n_channels; VAR_32++) {
   *VAR_28++ = FUNC_11(
     VAR_37->channels[VAR_32].center_freq);
   *VAR_28++ = 1;
  }
 }


 if (VAR_25->ie_len && VAR_25->ie) {
  static const u8 VAR_43[] = {
   131,
   128,
   137,
   135,
   130,
   132,
   134,
   133,
   136,
   129,
  };
  VAR_31 = FUNC_12(VAR_25->ie, VAR_25->ie_len,
          VAR_43, FUNC_0(VAR_43),
          VAR_30);
  VAR_28 = FUNC_22(VAR_26, VAR_31 - VAR_30);
  FUNC_17(VAR_28, VAR_25->ie + VAR_30, VAR_31 - VAR_30);
  VAR_30 = VAR_31;
 }

 if (FUNC_4((VAR_24->flags & VAR_8) &&
    !(VAR_24->flags & VAR_9)))
  VAR_24->flags |= VAR_9;

 if (!(VAR_24->flags & VAR_8))
  FUNC_8(VAR_22, VAR_26, VAR_25->ap_ht_param,
        VAR_37, VAR_39, VAR_22->smps_mode);

 if (!(VAR_24->flags & VAR_9))
  FUNC_9(VAR_22, VAR_26, VAR_37,
         &VAR_25->ap_vht_cap);


 if (VAR_25->ie_len && VAR_25->ie) {
  VAR_31 = FUNC_13(VAR_25->ie,
          VAR_25->ie_len,
          VAR_30);
  VAR_28 = FUNC_22(VAR_26, VAR_31 - VAR_30);
  FUNC_17(VAR_28, VAR_25->ie + VAR_30, VAR_31 - VAR_30);
  VAR_30 = VAR_31;
 }

 if (VAR_25->wmm) {
  if (VAR_25->uapsd) {
   VAR_29 = VAR_24->uapsd_queues;
   VAR_29 |= (VAR_24->uapsd_max_sp_len <<
         VAR_15);
  } else {
   VAR_29 = 0;
  }

  VAR_28 = FUNC_22(VAR_26, 9);
  *VAR_28++ = VAR_21;
  *VAR_28++ = 7;
  *VAR_28++ = 0x00;
  *VAR_28++ = 0x50;
  *VAR_28++ = 0xf2;
  *VAR_28++ = 2;
  *VAR_28++ = 0;
  *VAR_28++ = 1;
  *VAR_28++ = VAR_29;
 }


 if (VAR_25->ie_len && VAR_25->ie) {
  VAR_31 = VAR_25->ie_len;
  VAR_28 = FUNC_22(VAR_26, VAR_31 - VAR_30);
  FUNC_17(VAR_28, VAR_25->ie + VAR_30, VAR_31 - VAR_30);
 }

 FUNC_7(VAR_23, VAR_22);

 FUNC_2(VAR_26)->flags |= VAR_13;
 if (VAR_23->hw.flags & VAR_6)
  FUNC_2(VAR_26)->flags |= VAR_12 |
      VAR_14;
 FUNC_14(VAR_22, VAR_26);
}
