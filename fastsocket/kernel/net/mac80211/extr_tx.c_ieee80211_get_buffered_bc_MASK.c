
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sk_buff {int len; int dev; scalar_t__ data; } ;
struct ps_data {scalar_t__ dtim_count; int bc_buf; int dtim_bc_mc; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_tx_info {int band; } ;
struct ieee80211_tx_data {int flags; } ;
struct TYPE_12__ {scalar_t__ type; int chanctx_conf; } ;
struct TYPE_8__ {struct ps_data ps; } ;
struct TYPE_7__ {struct ps_data ps; int beacon; } ;
struct TYPE_9__ {TYPE_2__ mesh; TYPE_1__ ap; } ;
struct ieee80211_sub_if_data {TYPE_6__ vif; TYPE_3__ u; } ;
struct ieee80211_local {int total_ps_buffered; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_hdr {int frame_control; } ;
struct TYPE_11__ {TYPE_4__* chan; } ;
struct ieee80211_chanctx_conf {TYPE_5__ def; } ;
struct beacon_data {int head; } ;
struct TYPE_10__ {int band; } ;


 struct ieee80211_sub_if_data* FUNC_0 (int ) ;
 int VAR_0 ;
 struct ieee80211_tx_info* FUNC_1 (struct sk_buff*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;
 struct ieee80211_local* FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct ieee80211_sub_if_data*,struct ieee80211_tx_data*,struct sk_buff*) ;
 scalar_t__ FUNC_6 (TYPE_6__*) ;
 scalar_t__ FUNC_7 (struct ieee80211_tx_data*) ;
 void* FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 struct sk_buff* FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 struct ieee80211_sub_if_data* FUNC_13 (struct ieee80211_vif*) ;

struct sk_buff *
FUNC_14(struct ieee80211_hw *VAR_4,
     struct ieee80211_vif *VAR_5)
{
 struct ieee80211_local *VAR_6 = FUNC_4(VAR_4);
 struct sk_buff *VAR_7 = ((void*)0);
 struct ieee80211_tx_data VAR_8;
 struct ieee80211_sub_if_data *VAR_9;
 struct ps_data *VAR_10;
 struct ieee80211_tx_info *VAR_11;
 struct ieee80211_chanctx_conf *VAR_12;

 VAR_9 = FUNC_13(VAR_5);

 FUNC_9();
 VAR_12 = FUNC_8(VAR_9->vif.chanctx_conf);

 if (!VAR_12)
  goto out;

 if (VAR_9->vif.type == VAR_2) {
  struct beacon_data *VAR_13 =
    FUNC_8(VAR_9->u.ap.beacon);

  if (!VAR_13 || !VAR_13->head)
   goto out;

  VAR_10 = &VAR_9->u.ap.ps;
 } else if (FUNC_6(&VAR_9->vif)) {
  VAR_10 = &VAR_9->u.mesh.ps;
 } else {
  goto out;
 }

 if (VAR_10->dtim_count != 0 || !VAR_10->dtim_bc_mc)
  goto out;

 while (1) {
  VAR_7 = FUNC_11(&VAR_10->bc_buf);
  if (!VAR_7)
   goto out;
  VAR_6->total_ps_buffered--;

  if (!FUNC_12(&VAR_10->bc_buf) && VAR_7->len >= 2) {
   struct ieee80211_hdr *VAR_14 =
    (struct ieee80211_hdr *) VAR_7->data;



   VAR_14->frame_control |=
    FUNC_2(VAR_0);
  }

  if (VAR_9->vif.type == VAR_3)
   VAR_9 = FUNC_0(VAR_7->dev);
  if (!FUNC_5(VAR_9, &VAR_8, VAR_7))
   break;
  FUNC_3(VAR_7);
 }

 VAR_11 = FUNC_1(VAR_7);

 VAR_8.flags |= VAR_1;
 VAR_11->band = VAR_12->def.chan->band;

 if (FUNC_7(&VAR_8))
  VAR_7 = ((void*)0);
 out:
 FUNC_10();

 return VAR_7;
}
