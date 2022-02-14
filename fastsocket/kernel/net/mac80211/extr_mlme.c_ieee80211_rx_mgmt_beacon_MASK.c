
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct sta_info {int dummy; } ;
struct ieee802_11_elems {scalar_t__ pwr_constr_elem; int country_elem_len; scalar_t__ country_elem; int * opmode_notif; int vht_operation; int ht_operation; int * erp_info; TYPE_12__* tim; int wmm_param_len; int wmm_param; int tim_len; } ;
struct ieee80211_bss_conf {int cqm_rssi_thold; int cqm_rssi_hyst; int dtim_period; scalar_t__ sync_dtim_count; int sync_device_ts; void* sync_tsf; int p2p_noa_attr; } ;
struct TYPE_14__ {int driver_flags; struct ieee80211_bss_conf bss_conf; scalar_t__ p2p; int chanctx_conf; } ;
struct ieee80211_if_managed {int last_beacon_signal; int flags; int ave_beacon_signal; int last_cqm_event_signal; int count_beacon_signal; int last_ave_beacon_signal; scalar_t__ rssi_min_thold; scalar_t__ rssi_max_thold; scalar_t__ p2p_noa_index; int beacon_crc_valid; scalar_t__ beacon_crc; scalar_t__ powersave; int aid; TYPE_4__* associated; TYPE_3__* assoc_data; int mtx; } ;
struct TYPE_21__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {TYPE_11__ vif; TYPE_6__ u; struct ieee80211_local* local; } ;
struct ieee80211_rx_status {scalar_t__ freq; int signal; int band; int device_timestamp; } ;
struct ieee80211_p2p_noa_attr {scalar_t__ index; } ;
struct TYPE_24__ {int capab_info; } ;
struct TYPE_23__ {int capab_info; int timestamp; scalar_t__ variable; int beacon_int; } ;
struct TYPE_13__ {TYPE_9__ probe_resp; TYPE_8__ beacon; } ;
struct ieee80211_mgmt {TYPE_10__ u; int bssid; } ;
struct TYPE_20__ {scalar_t__ dynamic_ps_timeout; int flags; } ;
struct TYPE_22__ {int flags; TYPE_5__ conf; } ;
struct ieee80211_local {int pspolling; int sta_mtx; TYPE_7__ hw; int iflist_mtx; int mtx; } ;
struct ieee80211_channel {scalar_t__ center_freq; } ;
struct TYPE_16__ {struct ieee80211_channel* chan; } ;
struct ieee80211_chanctx_conf {TYPE_1__ def; } ;
typedef int noa ;
typedef enum rx_mgmt_action { ____Placeholder_rx_mgmt_action } rx_mgmt_action ;
struct TYPE_19__ {int * bssid; } ;
struct TYPE_18__ {int need_beacon; int have_beacon; int timeout_started; int timeout; TYPE_2__* bss; } ;
struct TYPE_17__ {int * bssid; } ;
struct TYPE_15__ {scalar_t__ dtim_count; scalar_t__ dtim_period; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (scalar_t__,size_t,int ,int *,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,void*,int) ;
 int FUNC_3 (struct ieee80211_local*,struct ieee80211_sub_if_data*,int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (struct ieee80211_sub_if_data*,scalar_t__) ;
 int FUNC_6 (TYPE_12__*,int ,int ) ;
 scalar_t__ FUNC_7 (struct ieee80211_sub_if_data*,struct sta_info*,int ,int ,int *,scalar_t__*) ;
 int FUNC_8 (TYPE_11__*,int ,int ) ;
 scalar_t__ FUNC_9 (struct ieee80211_sub_if_data*,int ,int,int ) ;
 scalar_t__ FUNC_10 (struct ieee80211_sub_if_data*,struct ieee80211_channel*,scalar_t__,int ,scalar_t__) ;
 int FUNC_11 (struct ieee80211_local*,int ) ;
 int FUNC_12 (struct ieee80211_local*,int) ;
 int FUNC_13 (struct ieee80211_local*) ;
 int FUNC_14 (struct ieee80211_sub_if_data*,struct ieee80211_mgmt*,size_t,struct ieee80211_rx_status*,struct ieee802_11_elems*) ;
 int FUNC_15 (struct ieee80211_local*,struct ieee80211_sub_if_data*,int ) ;
 int FUNC_16 (struct ieee80211_local*,struct ieee80211_sub_if_data*) ;
 int FUNC_17 (struct ieee80211_sub_if_data*,int ,int ,int,int *) ;
 int FUNC_18 (struct ieee80211_sub_if_data*) ;
 scalar_t__ FUNC_19 (struct ieee80211_local*,struct ieee80211_sub_if_data*,int ,int ) ;
 int FUNC_20 (struct ieee80211_sub_if_data*,struct sta_info*,int ,int ,int) ;
 int FUNC_21 (scalar_t__,size_t,int,struct ieee802_11_elems*) ;
 scalar_t__ FUNC_22 (scalar_t__,size_t,int,struct ieee802_11_elems*,int ,scalar_t__) ;
 int VAR_24 ;
 int FUNC_23 (int ) ;
 void* FUNC_24 (int ) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *,struct ieee80211_p2p_noa_attr*,int) ;
 int FUNC_27 (int *,int ,int) ;
 int FUNC_28 (struct ieee80211_sub_if_data*,char*) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (int *) ;
 struct ieee80211_chanctx_conf* FUNC_31 (int ) ;
 int FUNC_32 () ;
 int FUNC_33 () ;
 int FUNC_34 (struct ieee80211_if_managed*,int ) ;
 struct sta_info* FUNC_35 (struct ieee80211_sub_if_data*,int *) ;

__attribute__((used)) static enum rx_mgmt_action
FUNC_36(struct ieee80211_sub_if_data *VAR_25,
    struct ieee80211_mgmt *VAR_26, size_t VAR_27,
    u8 *VAR_28, struct ieee80211_rx_status *VAR_29)
{
 struct ieee80211_if_managed *VAR_30 = &VAR_25->u.mgd;
 struct ieee80211_bss_conf *VAR_31 = &VAR_25->vif.bss_conf;
 size_t VAR_32;
 struct ieee802_11_elems VAR_33;
 struct ieee80211_local *VAR_34 = VAR_25->local;
 struct ieee80211_chanctx_conf *VAR_35;
 struct ieee80211_channel *VAR_36;
 struct sta_info *VAR_37;
 u32 VAR_38 = 0;
 bool VAR_39;
 u8 VAR_40 = 0;
 u32 VAR_41;
 u8 *VAR_42;

 FUNC_25(&VAR_30->mtx);


 VAR_32 = (u8 *) VAR_26->u.beacon.variable - (u8 *) VAR_26;
 if (VAR_32 > VAR_27)
  return VAR_20;

 FUNC_32();
 VAR_35 = FUNC_31(VAR_25->vif.chanctx_conf);
 if (!VAR_35) {
  FUNC_33();
  return VAR_20;
 }

 if (VAR_29->freq != VAR_35->def.chan->center_freq) {
  FUNC_33();
  return VAR_20;
 }
 VAR_36 = VAR_35->def.chan;
 FUNC_33();

 if (VAR_30->assoc_data && VAR_30->assoc_data->need_beacon &&
     FUNC_4(VAR_26->bssid, VAR_30->assoc_data->bss->bssid)) {
  FUNC_21(VAR_26->u.beacon.variable,
           VAR_27 - VAR_32, 0, &VAR_33);

  FUNC_14(VAR_25, VAR_26, VAR_27, VAR_29, &VAR_33);
  VAR_30->assoc_data->have_beacon = 1;
  VAR_30->assoc_data->need_beacon = 0;
  if (VAR_34->hw.flags & VAR_7) {
   VAR_25->vif.bss_conf.sync_tsf =
    FUNC_24(VAR_26->u.beacon.timestamp);
   VAR_25->vif.bss_conf.sync_device_ts =
    VAR_29->device_timestamp;
   if (VAR_33.tim)
    VAR_25->vif.bss_conf.sync_dtim_count =
     VAR_33.tim->dtim_count;
   else
    VAR_25->vif.bss_conf.sync_dtim_count = 0;
  }

  VAR_30->assoc_data->timeout = VAR_24;
  VAR_30->assoc_data->timeout_started = 1;
  FUNC_34(VAR_30, VAR_30->assoc_data->timeout);
  return VAR_20;
 }

 if (!VAR_30->associated ||
     !FUNC_4(VAR_26->bssid, VAR_30->associated->bssid))
  return VAR_20;
 VAR_42 = VAR_30->associated->bssid;


 VAR_30->last_beacon_signal = VAR_29->signal;
 if (VAR_30->flags & VAR_12) {
  VAR_30->flags &= ~VAR_12;
  VAR_30->ave_beacon_signal = VAR_29->signal * 16;
  VAR_30->last_cqm_event_signal = 0;
  VAR_30->count_beacon_signal = 1;
  VAR_30->last_ave_beacon_signal = 0;
 } else {
  VAR_30->ave_beacon_signal =
   (VAR_10 * VAR_29->signal * 16 +
    (16 - VAR_10) *
    VAR_30->ave_beacon_signal) / 16;
  VAR_30->count_beacon_signal++;
 }

 if (VAR_30->rssi_min_thold != VAR_30->rssi_max_thold &&
     VAR_30->count_beacon_signal >= VAR_9) {
  int VAR_43 = VAR_30->ave_beacon_signal;
  int VAR_44 = VAR_30->last_ave_beacon_signal;





  if (VAR_43 > VAR_30->rssi_max_thold &&
      (VAR_44 <= VAR_30->rssi_min_thold || VAR_44 == 0)) {
   VAR_30->last_ave_beacon_signal = VAR_43;
   FUNC_3(VAR_34, VAR_25, VAR_17);
  } else if (VAR_43 < VAR_30->rssi_min_thold &&
      (VAR_44 >= VAR_30->rssi_max_thold ||
      VAR_44 == 0)) {
   VAR_30->last_ave_beacon_signal = VAR_43;
   FUNC_3(VAR_34, VAR_25, VAR_18);
  }
 }

 if (VAR_31->cqm_rssi_thold &&
     VAR_30->count_beacon_signal >= VAR_9 &&
     !(VAR_25->vif.driver_flags & VAR_14)) {
  int VAR_45 = VAR_30->ave_beacon_signal / 16;
  int VAR_46 = VAR_30->last_cqm_event_signal;
  int VAR_47 = VAR_31->cqm_rssi_thold;
  int VAR_48 = VAR_31->cqm_rssi_hyst;
  if (VAR_45 < VAR_47 &&
      (VAR_46 == 0 || VAR_45 < VAR_46 - VAR_48)) {
   VAR_30->last_cqm_event_signal = VAR_45;
   FUNC_8(
    &VAR_25->vif,
    VAR_16,
    VAR_3);
  } else if (VAR_45 > VAR_47 &&
      (VAR_46 == 0 || VAR_45 > VAR_46 + VAR_48)) {
   VAR_30->last_cqm_event_signal = VAR_45;
   FUNC_8(
    &VAR_25->vif,
    VAR_15,
    VAR_3);
  }
 }

 if (VAR_30->flags & VAR_11) {
  FUNC_28(VAR_25,
         "cancelling AP probe due to a received beacon\n");
  FUNC_29(&VAR_34->mtx);
  VAR_30->flags &= ~VAR_11;
  FUNC_13(VAR_34);
  FUNC_30(&VAR_34->mtx);

  FUNC_29(&VAR_34->iflist_mtx);
  FUNC_12(VAR_34, -1);
  FUNC_30(&VAR_34->iflist_mtx);
 }





 FUNC_18(VAR_25);

 VAR_41 = FUNC_2(0, (void *)&VAR_26->u.beacon.beacon_int, 4);
 VAR_41 = FUNC_22(VAR_26->u.beacon.variable,
       VAR_27 - VAR_32, 0, &VAR_33,
       VAR_23, VAR_41);

 if (VAR_34->hw.flags & VAR_6) {
  bool VAR_49 = FUNC_6(VAR_33.tim,
       VAR_33.tim_len,
       VAR_30->aid);
  if (VAR_49) {
   if (VAR_34->hw.conf.dynamic_ps_timeout > 0) {
    if (VAR_34->hw.conf.flags & VAR_5) {
     VAR_34->hw.conf.flags &= ~VAR_5;
     FUNC_11(VAR_34,
           VAR_4);
    }
    FUNC_15(VAR_34, VAR_25, 0);
   } else if (!VAR_34->pspolling && VAR_25->u.mgd.powersave) {
    VAR_34->pspolling = 1;
    FUNC_16(VAR_34, VAR_25);
   }
  }
 }

 if (VAR_25->vif.p2p) {
  struct ieee80211_p2p_noa_attr VAR_50 = {};
  int VAR_51;

  VAR_51 = FUNC_0(VAR_26->u.beacon.variable,
         VAR_27 - VAR_32,
         VAR_8,
         (u8 *) &VAR_50, sizeof(VAR_50));
  if (VAR_51 >= 2) {
   if (VAR_25->u.mgd.p2p_noa_index != VAR_50.index) {

    VAR_25->u.mgd.p2p_noa_index = VAR_50.index;
    FUNC_26(&VAR_31->p2p_noa_attr, &VAR_50, sizeof(VAR_50));
    VAR_38 |= VAR_1;




    VAR_30->beacon_crc_valid = 0;
   }
  } else if (VAR_25->u.mgd.p2p_noa_index != -1) {

   VAR_25->u.mgd.p2p_noa_index = -1;
   FUNC_27(&VAR_31->p2p_noa_attr, 0, sizeof(VAR_31->p2p_noa_attr));
   VAR_38 |= VAR_1;
   VAR_30->beacon_crc_valid = 0;
  }
 }

 if (VAR_41 == VAR_30->beacon_crc && VAR_30->beacon_crc_valid)
  return VAR_20;
 VAR_30->beacon_crc = VAR_41;
 VAR_30->beacon_crc_valid = 1;

 FUNC_14(VAR_25, VAR_26, VAR_27, VAR_29, &VAR_33);

 if (FUNC_19(VAR_34, VAR_25, VAR_33.wmm_param,
         VAR_33.wmm_param_len))
  VAR_38 |= VAR_2;





 if (!VAR_31->dtim_period) {

  if (VAR_33.tim)
   VAR_31->dtim_period = VAR_33.tim->dtim_period ?: 1;
  else
   VAR_31->dtim_period = 1;

  if (VAR_34->hw.flags & VAR_7) {
   VAR_25->vif.bss_conf.sync_tsf =
    FUNC_24(VAR_26->u.beacon.timestamp);
   VAR_25->vif.bss_conf.sync_device_ts =
    VAR_29->device_timestamp;
   if (VAR_33.tim)
    VAR_25->vif.bss_conf.sync_dtim_count =
     VAR_33.tim->dtim_count;
   else
    VAR_25->vif.bss_conf.sync_dtim_count = 0;
  }

  VAR_38 |= VAR_0;
 }

 if (VAR_33.erp_info) {
  VAR_39 = 1;
  VAR_40 = VAR_33.erp_info[0];
 } else {
  VAR_39 = 0;
 }
 VAR_38 |= FUNC_9(VAR_25,
   FUNC_23(VAR_26->u.beacon.capab_info),
   VAR_39, VAR_40);

 FUNC_29(&VAR_34->sta_mtx);
 VAR_37 = FUNC_35(VAR_25, VAR_42);

 if (FUNC_7(VAR_25, VAR_37, VAR_33.ht_operation,
    VAR_33.vht_operation, VAR_42, &VAR_38)) {
  FUNC_30(&VAR_34->sta_mtx);
  FUNC_17(VAR_25, VAR_13,
           VAR_22,
           1, VAR_28);
  return VAR_19;
 }

 if (VAR_37 && VAR_33.opmode_notif)
  FUNC_20(VAR_25, VAR_37, *VAR_33.opmode_notif,
         VAR_29->band, 1);
 FUNC_30(&VAR_34->sta_mtx);

 if (VAR_33.country_elem && VAR_33.pwr_constr_elem &&
     VAR_26->u.probe_resp.capab_info &
    FUNC_1(VAR_21))
  VAR_38 |= FUNC_10(VAR_25, VAR_36,
             VAR_33.country_elem,
             VAR_33.country_elem_len,
             VAR_33.pwr_constr_elem);

 FUNC_5(VAR_25, VAR_38);

 return VAR_20;
}
