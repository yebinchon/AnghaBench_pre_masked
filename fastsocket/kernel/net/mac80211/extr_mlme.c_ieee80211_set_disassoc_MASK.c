
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
typedef int u16 ;
struct TYPE_9__ {int assoc; int qos; scalar_t__ dtim_period; scalar_t__ arp_addr_cnt; int p2p_noa_attr; } ;
struct TYPE_10__ {TYPE_4__ bss_conf; } ;
struct ieee80211_if_managed {int p2p_noa_index; scalar_t__ flags; int chswitch_timer; int timer; int bcn_mon_timer; int conn_mon_timer; int vht_capa_mask; int vht_capa; int ht_capa_mask; int ht_capa; int * bssid; int * associated; } ;
struct TYPE_8__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {TYPE_5__ vif; TYPE_3__ u; int ap_power_level; int dev; struct ieee80211_local* local; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_7__ {TYPE_1__ conf; } ;
struct ieee80211_local {int dynamic_ps_enable_work; int dynamic_ps_timer; int * ps_sdata; TYPE_2__ hw; } ;


 int FUNC_0 (struct ieee80211_if_managed*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ieee80211_sub_if_data*,int) ;
 int FUNC_6 (struct ieee80211_local*,struct ieee80211_sub_if_data*) ;
 int FUNC_7 (struct ieee80211_local*,int ) ;
 int FUNC_8 (struct ieee80211_local*,int ) ;
 int FUNC_9 (struct ieee80211_sub_if_data*) ;
 int FUNC_10 (struct ieee80211_sub_if_data*) ;
 int FUNC_11 (struct ieee80211_sub_if_data*,int *,int ,int ,int,int *) ;
 int FUNC_12 (struct ieee80211_sub_if_data*,int) ;
 int FUNC_13 (struct ieee80211_sub_if_data*) ;
 int FUNC_14 (struct ieee80211_sub_if_data*) ;
 int FUNC_15 (int *,int ,int) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct ieee80211_sub_if_data*) ;

__attribute__((used)) static void FUNC_18(struct ieee80211_sub_if_data *VAR_9,
       u16 VAR_10, u16 VAR_11, bool VAR_12,
       u8 *VAR_13)
{
 struct ieee80211_if_managed *VAR_14 = &VAR_9->u.mgd;
 struct ieee80211_local *VAR_15 = VAR_9->local;
 u32 VAR_16 = 0;

 FUNC_0(VAR_14);

 if (FUNC_2(VAR_12 && !VAR_13))
  return;

 if (FUNC_1(!VAR_14->associated))
  return;

 FUNC_13(VAR_9);

 VAR_14->associated = ((void*)0);
 FUNC_16(VAR_9->dev);






 if (VAR_15->hw.conf.flags & VAR_7) {
  VAR_15->hw.conf.flags &= ~VAR_7;
  FUNC_7(VAR_15, VAR_6);
 }
 VAR_15->ps_sdata = ((void*)0);


 FUNC_9(VAR_9);


 if (VAR_12)
  FUNC_6(VAR_15, VAR_9);


 if (VAR_12 || VAR_13)
  FUNC_11(VAR_9, VAR_14->bssid, VAR_10,
            VAR_11, VAR_12, VAR_13);


 if (VAR_12)
  FUNC_6(VAR_15, VAR_9);


 FUNC_15(VAR_14->bssid, 0, VAR_5);


 FUNC_17(VAR_9);


 VAR_16 |= FUNC_10(VAR_9);

 FUNC_8(VAR_15, 0);
 VAR_16 |= VAR_1;
 VAR_9->vif.bss_conf.assoc = 0;

 VAR_14->p2p_noa_index = -1;
 FUNC_15(&VAR_9->vif.bss_conf.p2p_noa_attr, 0,
        sizeof(VAR_9->vif.bss_conf.p2p_noa_attr));


 FUNC_15(&VAR_14->ht_capa, 0, sizeof(VAR_14->ht_capa));
 FUNC_15(&VAR_14->ht_capa_mask, 0, sizeof(VAR_14->ht_capa_mask));
 FUNC_15(&VAR_14->vht_capa, 0, sizeof(VAR_14->vht_capa));
 FUNC_15(&VAR_14->vht_capa_mask, 0, sizeof(VAR_14->vht_capa_mask));

 VAR_9->ap_power_level = VAR_8;

 FUNC_4(&VAR_15->dynamic_ps_timer);
 FUNC_3(&VAR_15->dynamic_ps_enable_work);


 if (VAR_9->vif.bss_conf.arp_addr_cnt)
  VAR_16 |= VAR_0;

 VAR_9->vif.bss_conf.qos = 0;
 VAR_16 |= VAR_4;


 VAR_16 |= VAR_2 | VAR_3;
 FUNC_5(VAR_9, VAR_16);


 FUNC_12(VAR_9, 0);

 FUNC_4(&VAR_9->u.mgd.conn_mon_timer);
 FUNC_4(&VAR_9->u.mgd.bcn_mon_timer);
 FUNC_4(&VAR_9->u.mgd.timer);
 FUNC_4(&VAR_9->u.mgd.chswitch_timer);

 VAR_9->vif.bss_conf.dtim_period = 0;

 VAR_14->flags = 0;
 FUNC_14(VAR_9);
}
