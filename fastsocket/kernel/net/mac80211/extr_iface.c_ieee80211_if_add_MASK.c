
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct wireless_dev {int use_4addr; TYPE_8__* wiphy; int address; } ;
struct vif_params {int use_4addr; } ;
struct net_device {int features; struct wireless_dev* ieee80211_ptr; int name; int dev_addr; int perm_addr; int needed_tailroom; scalar_t__ needed_headroom; } ;
struct TYPE_12__ {int rx_mask; } ;
struct TYPE_13__ {TYPE_3__ mcs; } ;
struct ieee80211_supported_band {int n_bitrates; TYPE_4__ ht_cap; } ;
struct TYPE_14__ {int use_4addr; } ;
struct TYPE_15__ {TYPE_5__ mgd; } ;
struct TYPE_10__ {int addr; } ;
struct ieee80211_sub_if_data {int* rc_rateidx_mask; struct wireless_dev wdev; int list; TYPE_6__ u; int user_power_level; int ap_power_level; int * rc_rateidx_mcs_mask; int dec_tailroom_needed_wk; int dfs_cac_timer_work; int cleanup_stations_wk; int cleanup_stations; int cleanup_stations_lock; int key_list; TYPE_2__* fragments; struct ieee80211_local* local; struct net_device* dev; int name; TYPE_1__ vif; } ;
struct TYPE_16__ {int queues; int netdev_features; TYPE_8__* wiphy; scalar_t__ vif_data_size; } ;
struct ieee80211_local {int iflist_mtx; int interfaces; TYPE_7__ hw; int user_power_level; scalar_t__ tx_headroom; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;
struct TYPE_17__ {struct ieee80211_supported_band** bands; } ;
struct TYPE_11__ {int skb_list; } ;


 int FUNC_0 () ;
 int VAR_0 ;
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
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (struct net_device*,int ) ;
 struct net_device* FUNC_5 (scalar_t__,char const*,int ,int,int) ;
 int FUNC_6 (struct net_device*,int ) ;
 int FUNC_7 (struct net_device*,int ) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct ieee80211_local*,int ,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_10 (struct ieee80211_sub_if_data*) ;
 int FUNC_11 (struct ieee80211_sub_if_data*,int) ;
 struct ieee80211_sub_if_data* FUNC_12 (scalar_t__,int ) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int ,int ,int) ;
 int FUNC_15 (int ,int ,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 struct ieee80211_sub_if_data* FUNC_18 (struct net_device*) ;
 int FUNC_19 (struct net_device*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int ,char const*,int) ;
 int FUNC_23 (TYPE_8__*) ;
 int FUNC_24 (TYPE_8__*) ;

int FUNC_25(struct ieee80211_local *VAR_17, const char *VAR_18,
       struct wireless_dev **VAR_19, enum nl80211_iftype VAR_20,
       struct vif_params *VAR_21)
{
 struct net_device *VAR_22 = ((void*)0);
 struct ieee80211_sub_if_data *VAR_23 = ((void*)0);
 int VAR_24, VAR_25;
 int VAR_26 = 1;

 FUNC_0();

 if (VAR_20 == VAR_11) {
  struct wireless_dev *VAR_27;

  VAR_23 = FUNC_12(sizeof(*VAR_23) + VAR_17->hw.vif_data_size,
    VAR_3);
  if (!VAR_23)
   return -VAR_0;
  VAR_27 = &VAR_23->wdev;

  VAR_23->dev = ((void*)0);
  FUNC_22(VAR_23->name, VAR_18, VAR_10);
  FUNC_9(VAR_17, VAR_27->address, VAR_20);
  FUNC_14(VAR_23->vif.addr, VAR_27->address, VAR_1);
 } else {
  if (VAR_17->hw.queues >= VAR_7)
   VAR_26 = VAR_7;

  VAR_22 = FUNC_5(sizeof(*VAR_23) +
     VAR_17->hw.vif_data_size,
     VAR_18, VAR_16, VAR_26, 1);
  if (!VAR_22)
   return -VAR_0;
  FUNC_7(VAR_22, FUNC_24(VAR_17->hw.wiphy));

  VAR_22->needed_headroom = VAR_17->tx_headroom +
     4*6
     + 2 + 2 + 2 + 2
     + 6
     + 8
     - VAR_2
     + VAR_4;
  VAR_22->needed_tailroom = VAR_5;

  VAR_24 = FUNC_6(VAR_22, VAR_22->name);
  if (VAR_24 < 0) {
   FUNC_8(VAR_22);
   return VAR_24;
  }

  FUNC_9(VAR_17, VAR_22->perm_addr, VAR_20);
  FUNC_14(VAR_22->dev_addr, VAR_22->perm_addr, VAR_1);
  FUNC_4(VAR_22, FUNC_23(VAR_17->hw.wiphy));


  VAR_23 = FUNC_18(VAR_22);
  VAR_22->ieee80211_ptr = &VAR_23->wdev;
  FUNC_14(VAR_23->vif.addr, VAR_22->dev_addr, VAR_1);
  FUNC_14(VAR_23->name, VAR_22->name, VAR_10);

  VAR_23->dev = VAR_22;
 }


 VAR_23->wdev.wiphy = VAR_17->hw.wiphy;
 VAR_23->local = VAR_17;

 for (VAR_25 = 0; VAR_25 < VAR_6; VAR_25++)
  FUNC_20(&VAR_23->fragments[VAR_25].skb_list);

 FUNC_2(&VAR_23->key_list);

 FUNC_21(&VAR_23->cleanup_stations_lock);
 FUNC_2(&VAR_23->cleanup_stations);
 FUNC_3(&VAR_23->cleanup_stations_wk, VAR_13);
 FUNC_1(&VAR_23->dfs_cac_timer_work,
     VAR_15);
 FUNC_1(&VAR_23->dec_tailroom_needed_wk,
     VAR_14);

 for (VAR_25 = 0; VAR_25 < VAR_8; VAR_25++) {
  struct ieee80211_supported_band *VAR_28;
  VAR_28 = VAR_17->hw.wiphy->bands[VAR_25];
  VAR_23->rc_rateidx_mask[VAR_25] =
   VAR_28 ? (1 << VAR_28->n_bitrates) - 1 : 0;
  if (VAR_28)
   FUNC_14(VAR_23->rc_rateidx_mcs_mask[VAR_25],
          VAR_28->ht_cap.mcs.rx_mask,
          sizeof(VAR_23->rc_rateidx_mcs_mask[VAR_25]));
  else
   FUNC_15(VAR_23->rc_rateidx_mcs_mask[VAR_25], 0,
          sizeof(VAR_23->rc_rateidx_mcs_mask[VAR_25]));
 }

 FUNC_10(VAR_23);

 VAR_23->ap_power_level = VAR_9;
 VAR_23->user_power_level = VAR_17->user_power_level;


 FUNC_11(VAR_23, VAR_20);

 if (VAR_22) {
  if (VAR_21) {
   VAR_22->ieee80211_ptr->use_4addr = VAR_21->use_4addr;
   if (VAR_20 == VAR_12)
    VAR_23->u.mgd.use_4addr = VAR_21->use_4addr;
  }

  VAR_22->features |= VAR_17->hw.netdev_features;

  VAR_24 = FUNC_19(VAR_22);
  if (VAR_24) {
   FUNC_8(VAR_22);
   return VAR_24;
  }
 }

 FUNC_16(&VAR_17->iflist_mtx);
 FUNC_13(&VAR_23->list, &VAR_17->interfaces);
 FUNC_17(&VAR_17->iflist_mtx);

 if (VAR_19)
  *VAR_19 = &VAR_23->wdev;

 return 0;
}
