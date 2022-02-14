
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int u8 ;
struct ieee80211_vht_cap {int dummy; } ;
struct ieee80211_tim_ie {int dtim_count; scalar_t__ dtim_period; } ;
struct TYPE_20__ {int vht_supported; } ;
struct TYPE_19__ {int ht_supported; } ;
struct ieee80211_supported_band {TYPE_6__ vht_cap; TYPE_5__ ht_cap; } ;
struct TYPE_23__ {int sync_dtim_count; int sync_device_ts; int sync_tsf; } ;
struct TYPE_13__ {TYPE_9__ bss_conf; } ;
struct ieee80211_if_managed {char* bssid; int beacon_crc_valid; scalar_t__ req_smps; int mtx; struct ieee80211_mgd_assoc_data* assoc_data; scalar_t__ dtim_period; int flags; int mfp; scalar_t__ powersave; int vht_capa_mask; int vht_capa; int ht_capa_mask; int ht_capa; TYPE_2__* auth_data; scalar_t__ associated; } ;
struct TYPE_15__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {scalar_t__ smps_mode; int wmm_acm; TYPE_10__ vif; struct ieee80211_local* local; int control_port_no_encrypt; int control_port_protocol; int dev; TYPE_1__ u; } ;
struct ieee80211_mgd_assoc_data {int ssid_len; int ie_len; int wmm; int uapsd; int timeout_started; int need_beacon; int have_beacon; void* timeout; int * prev_bssid; int ap_vht_cap; int ap_ht_param; int supp_rates_len; int supp_rates; int capability; TYPE_11__* bss; int * ie; int * ssid; } ;
struct TYPE_22__ {scalar_t__ queues; int flags; TYPE_3__* wiphy; } ;
struct ieee80211_local {TYPE_8__ hw; } ;
struct ieee80211_ht_operation {int ht_param; } ;
struct ieee80211_bss {int corrupt_data; int device_ts_beacon; scalar_t__ uapsd_supported; scalar_t__ wmm_used; int supp_rates_len; int supp_rates; } ;
struct cfg80211_bss_ies {int tsf; int len; int data; } ;
struct TYPE_21__ {int n_ciphers_pairwise; scalar_t__* ciphers_pairwise; int control_port_no_encrypt; int control_port_ethertype; scalar_t__ control_port; } ;
struct cfg80211_assoc_request {int ie_len; int flags; int const ht_capa; int const ht_capa_mask; int const vht_capa; int const vht_capa_mask; int const* ie; int const* prev_bssid; TYPE_11__* bss; TYPE_7__ crypto; scalar_t__ use_mfp; } ;
typedef int frame_buf ;
struct TYPE_18__ {size_t band; } ;
struct TYPE_17__ {struct ieee80211_supported_band** bands; } ;
struct TYPE_16__ {int done; } ;
struct TYPE_14__ {int beacon_interval; int beacon_ies; int capability; TYPE_4__* channel; int bssid; scalar_t__ priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
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
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 void* FUNC_0 (int ) ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_1 (int ,int*,int) ;
 int* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (char*,int ) ;
 int* FUNC_4 (TYPE_11__*,int ) ;
 int FUNC_5 (struct ieee80211_sub_if_data*,int ) ;
 int FUNC_6 (struct ieee80211_sub_if_data*,int) ;
 int FUNC_7 (struct ieee80211_sub_if_data*,TYPE_11__*,int) ;
 int FUNC_8 (struct ieee80211_sub_if_data*,int ,int ,int,int*) ;
 void* VAR_34 ;
 int FUNC_9 (struct ieee80211_mgd_assoc_data*) ;
 struct ieee80211_mgd_assoc_data* FUNC_10 (int,int ) ;
 int FUNC_11 (int *,int const*,int const) ;
 int FUNC_12 (char*,int ,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,char*) ;
 struct cfg80211_bss_ies* FUNC_16 (int ) ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 (struct ieee80211_if_managed*,void*) ;
 int FUNC_20 (struct ieee80211_sub_if_data*,char*,char*) ;

int FUNC_21(struct ieee80211_sub_if_data *VAR_35,
   struct cfg80211_assoc_request *VAR_36)
{
 struct ieee80211_local *VAR_37 = VAR_35->local;
 struct ieee80211_if_managed *VAR_38 = &VAR_35->u.mgd;
 struct ieee80211_bss *VAR_39 = (void *)VAR_36->bss->priv;
 struct ieee80211_mgd_assoc_data *VAR_40;
 const struct cfg80211_bss_ies *VAR_41;
 struct ieee80211_supported_band *VAR_42;
 const u8 *VAR_43, *VAR_44, *VAR_45;
 int VAR_46, VAR_47;

 VAR_40 = FUNC_10(sizeof(*VAR_40) + VAR_36->ie_len, VAR_7);
 if (!VAR_40)
  return -VAR_5;

 FUNC_17();
 VAR_43 = FUNC_4(VAR_36->bss, VAR_30);
 if (!VAR_43) {
  FUNC_18();
  FUNC_9(VAR_40);
  return -VAR_4;
 }
 FUNC_11(VAR_40->ssid, VAR_43 + 2, VAR_43[1]);
 VAR_40->ssid_len = VAR_43[1];
 FUNC_18();

 FUNC_13(&VAR_38->mtx);

 if (VAR_38->associated) {
  u8 VAR_48[VAR_10];

  FUNC_8(VAR_35, VAR_25,
           VAR_33,
           0, VAR_48);

  FUNC_1(VAR_35->dev, VAR_48,
           sizeof(VAR_48));
 }

 if (VAR_38->auth_data && !VAR_38->auth_data->done) {
  VAR_47 = -VAR_3;
  goto err_free;
 }

 if (VAR_38->assoc_data) {
  VAR_47 = -VAR_3;
  goto err_free;
 }

 if (VAR_38->auth_data) {
  bool VAR_49;


  VAR_49 = FUNC_3(VAR_38->bssid, VAR_36->bss->bssid);
  FUNC_6(VAR_35, VAR_49);
 }



 VAR_38->beacon_crc_valid = 0;
 for (VAR_46 = 0; VAR_46 < VAR_36->crypto.n_ciphers_pairwise; VAR_46++) {
  if (VAR_36->crypto.ciphers_pairwise[VAR_46] == VAR_28 ||
      VAR_36->crypto.ciphers_pairwise[VAR_46] == VAR_26 ||
      VAR_36->crypto.ciphers_pairwise[VAR_46] == VAR_27) {
   VAR_38->flags |= VAR_21;
   VAR_38->flags |= VAR_22;
   FUNC_15(VAR_35->dev,
        "disabling HT/VHT due to WEP/TKIP use\n");
  }
 }

 if (VAR_36->flags & VAR_0) {
  VAR_38->flags |= VAR_21;
  VAR_38->flags |= VAR_22;
 }

 if (VAR_36->flags & VAR_1)
  VAR_38->flags |= VAR_22;


 VAR_42 = VAR_37->hw.wiphy->bands[VAR_36->bss->channel->band];
 if (!VAR_42->ht_cap.ht_supported ||
     VAR_37->hw.queues < VAR_16 || !VAR_39->wmm_used) {
  VAR_38->flags |= VAR_21;
  if (!VAR_39->wmm_used)
   FUNC_15(VAR_35->dev,
        "disabling HT as WMM/QoS is not supported by the AP\n");
 }


 if (!VAR_42->vht_cap.vht_supported ||
     VAR_37->hw.queues < VAR_16 || !VAR_39->wmm_used) {
  VAR_38->flags |= VAR_22;
  if (!VAR_39->wmm_used)
   FUNC_15(VAR_35->dev,
        "disabling VHT as WMM/QoS is not supported by the AP\n");
 }

 FUNC_11(&VAR_38->ht_capa, &VAR_36->ht_capa, sizeof(VAR_38->ht_capa));
 FUNC_11(&VAR_38->ht_capa_mask, &VAR_36->ht_capa_mask,
        sizeof(VAR_38->ht_capa_mask));

 FUNC_11(&VAR_38->vht_capa, &VAR_36->vht_capa, sizeof(VAR_38->vht_capa));
 FUNC_11(&VAR_38->vht_capa_mask, &VAR_36->vht_capa_mask,
        sizeof(VAR_38->vht_capa_mask));

 if (VAR_36->ie && VAR_36->ie_len) {
  FUNC_11(VAR_40->ie, VAR_36->ie, VAR_36->ie_len);
  VAR_40->ie_len = VAR_36->ie_len;
 }

 VAR_40->bss = VAR_36->bss;

 if (VAR_38->req_smps == VAR_17) {
  if (VAR_38->powersave)
   VAR_35->smps_mode = VAR_18;
  else
   VAR_35->smps_mode = VAR_19;
 } else
  VAR_35->smps_mode = VAR_38->req_smps;

 VAR_40->capability = VAR_36->bss->capability;
 VAR_40->wmm = VAR_39->wmm_used &&
     (VAR_37->hw.queues >= VAR_16);
 VAR_40->supp_rates = VAR_39->supp_rates;
 VAR_40->supp_rates_len = VAR_39->supp_rates_len;

 FUNC_17();
 VAR_44 = FUNC_4(VAR_36->bss, VAR_29);
 if (VAR_44 && VAR_44[1] >= sizeof(struct ieee80211_ht_operation))
  VAR_40->ap_ht_param =
   ((struct ieee80211_ht_operation *)(VAR_44 + 2))->ht_param;
 else
  VAR_38->flags |= VAR_21;
 VAR_45 = FUNC_4(VAR_36->bss, VAR_32);
 if (VAR_45 && VAR_45[1] >= sizeof(struct ieee80211_vht_cap))
  FUNC_11(&VAR_40->ap_vht_cap, VAR_45 + 2,
         sizeof(struct ieee80211_vht_cap));
 else
  VAR_38->flags |= VAR_22;
 FUNC_18();

 if (VAR_39->wmm_used && VAR_39->uapsd_supported &&
     (VAR_35->local->hw.flags & VAR_12) &&
     VAR_35->wmm_acm != 0xff) {
  VAR_40->uapsd = 1;
  VAR_38->flags |= VAR_24;
 } else {
  VAR_40->uapsd = 0;
  VAR_38->flags &= ~VAR_24;
 }

 if (VAR_36->prev_bssid)
  FUNC_11(VAR_40->prev_bssid, VAR_36->prev_bssid, VAR_6);

 if (VAR_36->use_mfp) {
  VAR_38->mfp = VAR_15;
  VAR_38->flags |= VAR_23;
 } else {
  VAR_38->mfp = VAR_14;
  VAR_38->flags &= ~VAR_23;
 }

 if (VAR_36->crypto.control_port)
  VAR_38->flags |= VAR_20;
 else
  VAR_38->flags &= ~VAR_20;

 VAR_35->control_port_protocol = VAR_36->crypto.control_port_ethertype;
 VAR_35->control_port_no_encrypt = VAR_36->crypto.control_port_no_encrypt;



 VAR_38->assoc_data = VAR_40;
 VAR_38->dtim_period = 0;

 VAR_47 = FUNC_7(VAR_35, VAR_36->bss, 1);
 if (VAR_47)
  goto err_clear;

 FUNC_17();
 VAR_41 = FUNC_16(VAR_36->bss->beacon_ies);

 if (VAR_35->local->hw.flags & VAR_11 &&
     !VAR_41) {




  FUNC_20(VAR_35, "waiting for beacon from %pM\n",
      VAR_38->bssid);
  VAR_40->timeout = FUNC_0(VAR_36->bss->beacon_interval);
  VAR_40->timeout_started = 1;
  VAR_40->need_beacon = 1;
 } else if (VAR_41) {
  const u8 *VAR_50 = FUNC_2(VAR_31,
          VAR_41->data,
          VAR_41->len);
  u8 VAR_51 = 0;

  if (VAR_50 && VAR_50[1] >= sizeof(struct ieee80211_tim_ie)) {
   const struct ieee80211_tim_ie *VAR_52;
   VAR_52 = (void *)(VAR_50 + 2);
   VAR_38->dtim_period = VAR_52->dtim_period;
   VAR_51 = VAR_52->dtim_count;
  }
  VAR_40->have_beacon = 1;
  VAR_40->timeout = VAR_34;
  VAR_40->timeout_started = 1;

  if (VAR_37->hw.flags & VAR_13) {
   VAR_35->vif.bss_conf.sync_tsf = VAR_41->tsf;
   VAR_35->vif.bss_conf.sync_device_ts =
    VAR_39->device_ts_beacon;
   VAR_35->vif.bss_conf.sync_dtim_count = VAR_51;
  }
 } else {
  VAR_40->timeout = VAR_34;
  VAR_40->timeout_started = 1;
 }
 FUNC_18();

 FUNC_19(VAR_38, VAR_40->timeout);

 if (VAR_39->corrupt_data) {
  char *VAR_53 = "data";
  if (VAR_39->corrupt_data & VAR_8) {
   if (VAR_39->corrupt_data &
     VAR_9)
    VAR_53 = "beacon and probe response";
   else
    VAR_53 = "beacon";
  } else if (VAR_39->corrupt_data & VAR_9)
   VAR_53 = "probe response";
  FUNC_20(VAR_35, "associating with AP with corrupt %s\n",
      VAR_53);
 }

 VAR_47 = 0;
 goto out;
 err_clear:
 FUNC_12(VAR_38->bssid, 0, VAR_6);
 FUNC_5(VAR_35, VAR_2);
 VAR_38->assoc_data = ((void*)0);
 err_free:
 FUNC_9(VAR_40);
 out:
 FUNC_14(&VAR_38->mtx);

 return VAR_47;
}
