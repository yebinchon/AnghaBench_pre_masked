
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiphy {int flags; int features; int bss_priv_size; int * vht_capa_mod_mask; int * ht_capa_mod_mask; int retry_short; int retry_long; int extended_capabilities_len; void* extended_capabilities_mask; void* extended_capabilities; int privid; int mgmt_stypes; } ;
struct ieee80211_ops {int set_key; int hw_scan; scalar_t__ remain_on_channel; int unassign_vif_chanctx; int assign_vif_chanctx; int change_chanctx; int remove_chanctx; int add_chanctx; scalar_t__ sta_remove; scalar_t__ sta_add; scalar_t__ sta_state; int configure_filter; int remove_interface; int add_interface; int config; int stop; int start; int tx; } ;
struct TYPE_2__ {int short_frame_max_tx_count; int long_frame_max_tx_count; } ;
struct ieee80211_hw {char* priv; int queues; int max_rates; int radiotap_mcs_details; int radiotap_vht_details; int uapsd_max_sp_len; int uapsd_queues; TYPE_1__ conf; int offchannel_tx_hw_queue; void* max_tx_aggregation_subframes; void* max_rx_aggregation_subframes; scalar_t__ max_report_rates; struct wiphy* wiphy; } ;
struct ieee80211_local {int use_chanctx; struct ieee80211_hw hw; int skb_queue_unreliable; int skb_queue; int tasklet; int tx_pending_tasklet; int * agg_queue_stop; int * pending; int ack_status_frames; int ack_status_lock; int sched_scan_stopped_work; int dynamic_ps_timer; int dynamic_ps_disable_work; int dynamic_ps_enable_work; int smps_mode; int reconfig_filter; int radar_detected_work; int restart_work; int scan_work; int chanctx_mtx; int chanctx_list; int queue_stop_reason_lock; int rx_path_lock; int filter_lock; int key_mtx; int mtx; int iflist_mtx; int mc_list; int interfaces; int user_power_level; struct ieee80211_ops const* ops; } ;
struct ieee80211_bss {int dummy; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 void* VAR_27 ;
 int FUNC_8 (int *) ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_9 (struct ieee80211_local*) ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_10 (struct ieee80211_local*) ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ,unsigned long) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct ieee80211_local*) ;
 int FUNC_16 (int *,int ,unsigned long) ;
 struct wiphy* FUNC_17 (int *,int) ;
 struct ieee80211_local* FUNC_18 (struct wiphy*) ;

struct ieee80211_hw *FUNC_19(size_t VAR_43,
     const struct ieee80211_ops *VAR_44)
{
 struct ieee80211_local *VAR_45;
 int VAR_46, VAR_47;
 struct wiphy *VAR_48;
 bool VAR_49;

 if (FUNC_5(!VAR_44->tx || !VAR_44->start || !VAR_44->stop || !VAR_44->config ||
      !VAR_44->add_interface || !VAR_44->remove_interface ||
      !VAR_44->configure_filter))
  return ((void*)0);

 if (FUNC_5(VAR_44->sta_state && (VAR_44->sta_add || VAR_44->sta_remove)))
  return ((void*)0);


 VAR_47 = !!VAR_44->add_chanctx + !!VAR_44->remove_chanctx +
     !!VAR_44->change_chanctx + !!VAR_44->assign_vif_chanctx +
     !!VAR_44->unassign_vif_chanctx;
 if (FUNC_5(VAR_47 != 0 && VAR_47 != 5))
  return ((void*)0);
 VAR_49 = VAR_47 == 5;
 VAR_46 = FUNC_0(sizeof(*VAR_45), VAR_12) + VAR_43;

 VAR_48 = FUNC_17(&VAR_39, VAR_46);

 if (!VAR_48)
  return ((void*)0);

 VAR_48->mgmt_stypes = VAR_28;

 VAR_48->privid = VAR_42;

 VAR_48->flags |= VAR_24 |
   VAR_20 |
   VAR_21 |
   VAR_26 |
   VAR_25;

 VAR_48->extended_capabilities = VAR_27;
 VAR_48->extended_capabilities_mask = VAR_27;
 VAR_48->extended_capabilities_len = FUNC_1(VAR_27);

 if (VAR_44->remain_on_channel)
  VAR_48->flags |= VAR_22;

 VAR_48->features |= VAR_17 |
      VAR_16 |
      VAR_14 |
      VAR_19 |
      VAR_18;

 if (!VAR_44->hw_scan)
  VAR_48->features |= VAR_15 |
       VAR_13;


 if (!VAR_44->set_key)
  VAR_48->flags |= VAR_23;

 VAR_48->bss_priv_size = sizeof(struct ieee80211_bss);

 VAR_45 = FUNC_18(VAR_48);

 VAR_45->hw.wiphy = VAR_48;

 VAR_45->hw.priv = (char *)VAR_45 + FUNC_0(sizeof(*VAR_45), VAR_12);

 VAR_45->ops = VAR_44;
 VAR_45->use_chanctx = VAR_49;


 VAR_45->hw.queues = 1;
 VAR_45->hw.max_rates = 1;
 VAR_45->hw.max_report_rates = 0;
 VAR_45->hw.max_rx_aggregation_subframes = VAR_3;
 VAR_45->hw.max_tx_aggregation_subframes = VAR_3;
 VAR_45->hw.offchannel_tx_hw_queue = VAR_2;
 VAR_45->hw.conf.long_frame_max_tx_count = VAR_48->retry_long;
 VAR_45->hw.conf.short_frame_max_tx_count = VAR_48->retry_short;
 VAR_45->hw.radiotap_mcs_details = VAR_7 |
      VAR_6 |
      VAR_5;
 VAR_45->hw.radiotap_vht_details = VAR_9 |
      VAR_8;
 VAR_45->hw.uapsd_queues = VAR_1;
 VAR_45->hw.uapsd_max_sp_len = VAR_0;
 VAR_45->user_power_level = VAR_11;
 VAR_48->ht_capa_mod_mask = &VAR_40;
 VAR_48->vht_capa_mod_mask = &VAR_41;

 FUNC_3(&VAR_45->interfaces);





 FUNC_11(&VAR_45->iflist_mtx);
 FUNC_11(&VAR_45->mtx);

 FUNC_11(&VAR_45->key_mtx);
 FUNC_14(&VAR_45->filter_lock);
 FUNC_14(&VAR_45->rx_path_lock);
 FUNC_14(&VAR_45->queue_stop_reason_lock);

 FUNC_3(&VAR_45->chanctx_list);
 FUNC_11(&VAR_45->chanctx_mtx);

 FUNC_2(&VAR_45->scan_work, VAR_35);

 FUNC_4(&VAR_45->restart_work, VAR_34);

 FUNC_4(&VAR_45->radar_detected_work,
    VAR_29);

 FUNC_4(&VAR_45->reconfig_filter, VAR_33);
 VAR_45->smps_mode = VAR_10;

 FUNC_4(&VAR_45->dynamic_ps_enable_work,
    VAR_31);
 FUNC_4(&VAR_45->dynamic_ps_disable_work,
    VAR_30);
 FUNC_12(&VAR_45->dynamic_ps_timer,
      VAR_32, (unsigned long) VAR_45);

 FUNC_4(&VAR_45->sched_scan_stopped_work,
    VAR_36);

 FUNC_14(&VAR_45->ack_status_lock);
 FUNC_8(&VAR_45->ack_status_frames);

 FUNC_15(VAR_45);

 for (VAR_47 = 0; VAR_47 < VAR_4; VAR_47++) {
  FUNC_13(&VAR_45->pending[VAR_47]);
  FUNC_7(&VAR_45->agg_queue_stop[VAR_47], 0);
 }
 FUNC_16(&VAR_45->tx_pending_tasklet, VAR_38,
       (unsigned long)VAR_45);

 FUNC_16(&VAR_45->tasklet,
       VAR_37,
       (unsigned long) VAR_45);

 FUNC_13(&VAR_45->skb_queue);
 FUNC_13(&VAR_45->skb_queue_unreliable);

 FUNC_9(VAR_45);

 FUNC_10(VAR_45);

 return &VAR_45->hw;
}
