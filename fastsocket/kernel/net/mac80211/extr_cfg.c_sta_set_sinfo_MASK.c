
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u64 ;
struct timespec {scalar_t__ tv_sec; } ;
struct TYPE_12__ {int set; int mask; } ;
struct TYPE_16__ {int beacon_interval; int dtim_period; int flags; } ;
struct station_info {int filled; TYPE_3__ sta_flags; TYPE_7__ bss_param; int nonpeer_pm; int peer_pm; int local_pm; int t_offset; int plink_state; void* plid; void* llid; int rxrate; int txrate; void* signal_avg; void* signal; int beacon_loss_count; int rx_dropped_misc; int tx_failed; int tx_retries; int rx_packets; int rx_bytes; int tx_packets; scalar_t__ tx_bytes; int inactive_time; scalar_t__ connected_time; int generation; } ;
struct sta_info {int nonpeer_pm; int peer_pm; int local_pm; int t_offset; int plink_state; int plid; int llid; int last_tx_rate; int avg_signal; scalar_t__ last_signal; int sta; TYPE_5__* local; int beacon_loss_count; int rx_dropped; int tx_retry_failed; int tx_retry_count; int rx_packets; int rx_bytes; scalar_t__* tx_packets; scalar_t__* tx_bytes; scalar_t__ last_rx; scalar_t__ last_connected; struct ieee80211_sub_if_data* sdata; } ;
struct TYPE_17__ {int beacon_int; scalar_t__ use_short_slot; scalar_t__ use_short_preamble; scalar_t__ use_cts_prot; } ;
struct TYPE_18__ {TYPE_8__ bss_conf; } ;
struct ieee80211_sub_if_data {TYPE_9__ vif; struct ieee80211_local* local; } ;
struct TYPE_10__ {int ps_dtim_period; } ;
struct TYPE_11__ {TYPE_1__ conf; } ;
struct ieee80211_local {TYPE_2__ hw; TYPE_6__* ops; int sta_generation; } ;
typedef void* s8 ;
struct TYPE_15__ {int get_rssi; } ;
struct TYPE_13__ {int flags; } ;
struct TYPE_14__ {TYPE_4__ hw; } ;


 int FUNC_0 (int ) ;
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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int FUNC_1 (struct timespec*) ;
 scalar_t__ FUNC_2 (struct ieee80211_local*,struct ieee80211_sub_if_data*,int *,void**) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_9__*) ;
 scalar_t__ VAR_44 ;
 int FUNC_5 (scalar_t__) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (struct sta_info*,int *) ;
 int FUNC_8 (struct sta_info*,int *,int *) ;
 scalar_t__ FUNC_9 (struct sta_info*,int ) ;

__attribute__((used)) static void FUNC_10(struct sta_info *VAR_45, struct station_info *VAR_46)
{
 struct ieee80211_sub_if_data *VAR_47 = VAR_45->sdata;
 struct ieee80211_local *VAR_48 = VAR_47->local;
 struct timespec VAR_49;
 u64 VAR_50 = 0;
 int VAR_51;

 VAR_46->generation = VAR_47->local->sta_generation;

 VAR_46->filled = VAR_16 |
   VAR_24 |
   VAR_31 |
   VAR_26 |
   VAR_33 |
   VAR_34 |
   VAR_32 |
   VAR_30 |
   VAR_23 |
   VAR_25 |
   VAR_14 |
   VAR_15 |
   VAR_29 |
   VAR_13;

 FUNC_1(&VAR_49);
 VAR_46->connected_time = VAR_49.tv_sec - VAR_45->last_connected;

 VAR_46->inactive_time = FUNC_5(VAR_44 - VAR_45->last_rx);
 VAR_46->tx_bytes = 0;
 for (VAR_51 = 0; VAR_51 < VAR_5; VAR_51++) {
  VAR_46->tx_bytes += VAR_45->tx_bytes[VAR_51];
  VAR_50 += VAR_45->tx_packets[VAR_51];
 }
 VAR_46->tx_packets = VAR_50;
 VAR_46->rx_bytes = VAR_45->rx_bytes;
 VAR_46->rx_packets = VAR_45->rx_packets;
 VAR_46->tx_retries = VAR_45->tx_retry_count;
 VAR_46->tx_failed = VAR_45->tx_retry_failed;
 VAR_46->rx_dropped_misc = VAR_45->rx_dropped;
 VAR_46->beacon_loss_count = VAR_45->beacon_loss_count;

 if ((VAR_45->local->hw.flags & VAR_3) ||
     (VAR_45->local->hw.flags & VAR_4)) {
  VAR_46->filled |= VAR_27 | VAR_28;
  if (!VAR_48->ops->get_rssi ||
      FUNC_2(VAR_48, VAR_47, &VAR_45->sta, &VAR_46->signal))
   VAR_46->signal = (s8)VAR_45->last_signal;
  VAR_46->signal_avg = (s8) -FUNC_3(&VAR_45->avg_signal);
 }

 FUNC_8(VAR_45, &VAR_45->last_tx_rate, &VAR_46->txrate);
 FUNC_7(VAR_45, &VAR_46->rxrate);

 if (FUNC_4(&VAR_47->vif)) {
 }

 VAR_46->bss_param.flags = 0;
 if (VAR_47->vif.bss_conf.use_cts_prot)
  VAR_46->bss_param.flags |= VAR_0;
 if (VAR_47->vif.bss_conf.use_short_preamble)
  VAR_46->bss_param.flags |= VAR_1;
 if (VAR_47->vif.bss_conf.use_short_slot)
  VAR_46->bss_param.flags |= VAR_2;
 VAR_46->bss_param.dtim_period = VAR_47->local->hw.conf.ps_dtim_period;
 VAR_46->bss_param.beacon_interval = VAR_47->vif.bss_conf.beacon_int;

 VAR_46->sta_flags.set = 0;
 VAR_46->sta_flags.mask = FUNC_0(VAR_8) |
    FUNC_0(VAR_10) |
    FUNC_0(VAR_12) |
    FUNC_0(VAR_9) |
    FUNC_0(VAR_7) |
    FUNC_0(VAR_6) |
    FUNC_0(VAR_11);
 if (FUNC_9(VAR_45, VAR_38))
  VAR_46->sta_flags.set |= FUNC_0(VAR_8);
 if (FUNC_9(VAR_45, VAR_40))
  VAR_46->sta_flags.set |= FUNC_0(VAR_10);
 if (FUNC_9(VAR_45, VAR_43))
  VAR_46->sta_flags.set |= FUNC_0(VAR_12);
 if (FUNC_9(VAR_45, VAR_39))
  VAR_46->sta_flags.set |= FUNC_0(VAR_9);
 if (FUNC_9(VAR_45, VAR_37))
  VAR_46->sta_flags.set |= FUNC_0(VAR_7);
 if (FUNC_9(VAR_45, VAR_36))
  VAR_46->sta_flags.set |= FUNC_0(VAR_6);
 if (FUNC_9(VAR_45, VAR_41))
  VAR_46->sta_flags.set |= FUNC_0(VAR_11);
}
