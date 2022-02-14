
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tid_ampdu_tx {int pending; } ;
struct TYPE_9__ {int * tid_tx; } ;
struct sta_info {TYPE_4__ ampdu_mlme; int drv_unblock_wk; int * tx_filtered; int * ps_tx_buf; struct ieee80211_sub_if_data* sdata; } ;
struct ps_data {int num_sta_ps; } ;
struct TYPE_10__ {scalar_t__ type; } ;
struct TYPE_7__ {struct ps_data ps; } ;
struct TYPE_8__ {TYPE_2__ mesh; } ;
struct ieee80211_sub_if_data {TYPE_5__ vif; TYPE_3__ u; TYPE_1__* bss; struct ieee80211_local* local; } ;
struct ieee80211_local {int hw; int total_ps_buffered; } ;
struct TYPE_6__ {struct ps_data ps; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sta_info*,int ) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (struct tid_ampdu_tx*) ;
 int FUNC_6 (struct sta_info*) ;
 struct tid_ampdu_tx* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (struct ieee80211_local*,struct sta_info*) ;
 int FUNC_10 (struct sta_info*) ;
 scalar_t__ FUNC_11 (struct sta_info*,int ) ;

__attribute__((used)) static void FUNC_12(struct sta_info *VAR_5)
{
 int VAR_6, VAR_7;
 struct tid_ampdu_tx *VAR_8;
 struct ieee80211_sub_if_data *VAR_9 = VAR_5->sdata;
 struct ieee80211_local *VAR_10 = VAR_9->local;
 struct ps_data *VAR_11;
 if (FUNC_11(VAR_5, VAR_4)) {
  if (VAR_5->sdata->vif.type == VAR_2 ||
      VAR_5->sdata->vif.type == VAR_3)
   VAR_11 = &VAR_9->bss->ps;
  else if (FUNC_4(&VAR_9->vif))
   VAR_11 = &VAR_9->u.mesh.ps;
  else
   return;

  FUNC_2(VAR_5, VAR_4);

  FUNC_0(&VAR_11->num_sta_ps);
  FUNC_10(VAR_5);
 }

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_10->total_ps_buffered -= FUNC_8(&VAR_5->ps_tx_buf[VAR_6]);
  FUNC_3(&VAR_10->hw, &VAR_5->ps_tx_buf[VAR_6]);
  FUNC_3(&VAR_10->hw, &VAR_5->tx_filtered[VAR_6]);
 }

 if (FUNC_4(&VAR_9->vif))
  FUNC_6(VAR_5);

 FUNC_1(&VAR_5->drv_unblock_wk);







 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  VAR_8 = FUNC_7(VAR_5->ampdu_mlme.tid_tx[VAR_7]);
  if (!VAR_8)
   continue;
  FUNC_3(&VAR_10->hw, &VAR_8->pending);
  FUNC_5(VAR_8);
 }

 FUNC_9(VAR_10, VAR_5);
}
