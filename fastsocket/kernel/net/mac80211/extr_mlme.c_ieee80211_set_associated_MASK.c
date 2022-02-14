
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_6__ {int index; } ;
struct ieee80211_bss_conf {int beacon_int; int dtim_period; int assoc; scalar_t__ arp_addr_cnt; scalar_t__ cqm_rssi_thold; TYPE_1__ p2p_noa_attr; int assoc_capability; } ;
struct TYPE_10__ {int driver_flags; scalar_t__ p2p; struct ieee80211_bss_conf bss_conf; } ;
struct TYPE_8__ {scalar_t__ dtim_period; TYPE_2__* assoc_data; int p2p_noa_index; int flags; int bssid; struct cfg80211_bss* associated; int beacon_timeout; } ;
struct TYPE_9__ {TYPE_3__ mgd; } ;
struct ieee80211_sub_if_data {int dev; TYPE_5__ vif; TYPE_4__ u; struct ieee80211_local* local; } ;
struct ieee80211_local {int iflist_mtx; } ;
struct ieee80211_bss {int erp_value; int has_erp_value; } ;
struct cfg80211_bss_ies {int len; int data; } ;
struct cfg80211_bss {int ies; int bssid; scalar_t__ priv; } ;
struct TYPE_7__ {scalar_t__ have_beacon; } ;


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
 int FUNC_0 (int ,int ,int ,int *,int) ;
 int FUNC_1 (struct ieee80211_sub_if_data*,int ) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,int ,int ,int ) ;
 int FUNC_3 (struct ieee80211_local*,int) ;
 int FUNC_4 (struct ieee80211_local*,int) ;
 int FUNC_5 (struct ieee80211_sub_if_data*) ;
 int FUNC_6 (struct ieee80211_sub_if_data*) ;
 int FUNC_7 (struct ieee80211_sub_if_data*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 struct cfg80211_bss_ies* FUNC_13 (int ) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 (int ) ;

__attribute__((used)) static void FUNC_17(struct ieee80211_sub_if_data *VAR_10,
         struct cfg80211_bss *VAR_11,
         u32 VAR_12)
{
 struct ieee80211_bss *VAR_13 = (void *)VAR_11->priv;
 struct ieee80211_local *VAR_14 = VAR_10->local;
 struct ieee80211_bss_conf *VAR_15 = &VAR_10->vif.bss_conf;

 VAR_12 |= VAR_1;
 VAR_12 |= FUNC_2(VAR_10,
  VAR_15->assoc_capability, VAR_13->has_erp_value, VAR_13->erp_value);

 VAR_10->u.mgd.beacon_timeout = FUNC_16(FUNC_8(
  VAR_9 * VAR_15->beacon_int));

 VAR_10->u.mgd.associated = VAR_11;
 FUNC_9(VAR_10->u.mgd.bssid, VAR_11->bssid, VAR_5);

 VAR_10->u.mgd.flags |= VAR_7;

 if (VAR_10->vif.p2p) {
  const struct cfg80211_bss_ies *VAR_16;

  FUNC_14();
  VAR_16 = FUNC_13(VAR_11->ies);
  if (VAR_16) {
   int VAR_17;

   VAR_17 = FUNC_0(
     VAR_16->data, VAR_16->len,
     VAR_6,
     (u8 *) &VAR_15->p2p_noa_attr,
     sizeof(VAR_15->p2p_noa_attr));
   if (VAR_17 >= 2) {
    VAR_10->u.mgd.p2p_noa_index =
     VAR_15->p2p_noa_attr.index;
    VAR_12 |= VAR_4;
   }
  }
  FUNC_15();
 }


 FUNC_7(VAR_10);

 FUNC_3(VAR_14, 1);

 if (VAR_10->u.mgd.assoc_data->have_beacon) {






  VAR_15->dtim_period = VAR_10->u.mgd.dtim_period ?: 1;
  VAR_12 |= VAR_3;
 } else {
  VAR_15->dtim_period = 0;
 }

 VAR_15->assoc = 1;


 if (VAR_10->vif.driver_flags & VAR_8 &&
     VAR_15->cqm_rssi_thold)
  VAR_12 |= VAR_2;


 if (VAR_15->arp_addr_cnt)
  VAR_12 |= VAR_0;

 FUNC_1(VAR_10, VAR_12);

 FUNC_10(&VAR_14->iflist_mtx);
 FUNC_4(VAR_14, -1);
 FUNC_11(&VAR_14->iflist_mtx);

 FUNC_6(VAR_10);
 FUNC_5(VAR_10);

 FUNC_12(VAR_10->dev);
}
