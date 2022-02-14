
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sta_info {int dummy; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct TYPE_5__ {int vif; } ;
struct ieee80211_tx_info {int flags; TYPE_1__ control; } ;
struct TYPE_6__ {int chanctx_conf; } ;
struct ieee80211_sub_if_data {TYPE_2__ vif; } ;
struct ieee80211_local {int dummy; } ;
struct ieee80211_hdr {int addr1; } ;
struct TYPE_8__ {TYPE_3__* chan; } ;
struct ieee80211_chanctx_conf {TYPE_4__ def; } ;
struct TYPE_7__ {int band; } ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int FUNC_1 (struct ieee80211_local*,struct sk_buff_head*,int ,struct sta_info*,int) ;
 int FUNC_2 (struct sk_buff_head*) ;
 int FUNC_3 (struct sk_buff_head*,struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct ieee80211_sub_if_data*,struct sk_buff*,int,int ) ;
 struct ieee80211_chanctx_conf* FUNC_6 (int ) ;
 struct sta_info* FUNC_7 (struct ieee80211_sub_if_data*,int ) ;
 scalar_t__ FUNC_8 (int) ;
 struct ieee80211_sub_if_data* FUNC_9 (int ) ;

__attribute__((used)) static bool FUNC_10(struct ieee80211_local *VAR_1,
         struct sk_buff *VAR_2)
{
 struct ieee80211_tx_info *VAR_3 = FUNC_0(VAR_2);
 struct ieee80211_sub_if_data *VAR_4;
 struct sta_info *VAR_5;
 struct ieee80211_hdr *VAR_6;
 bool VAR_7;
 struct ieee80211_chanctx_conf *VAR_8;

 VAR_4 = FUNC_9(VAR_3->control.vif);

 if (VAR_3->flags & VAR_0) {
  VAR_8 = FUNC_6(VAR_4->vif.chanctx_conf);
  if (FUNC_8(!VAR_8)) {
   FUNC_4(VAR_2);
   return 1;
  }
  VAR_7 = FUNC_5(VAR_4, VAR_2, 1,
          VAR_8->def.chan->band);
 } else {
  struct sk_buff_head VAR_9;

  FUNC_2(&VAR_9);
  FUNC_3(&VAR_9, VAR_2);

  VAR_6 = (struct ieee80211_hdr *)VAR_2->data;
  VAR_5 = FUNC_7(VAR_4, VAR_6->addr1);

  VAR_7 = FUNC_1(VAR_1, &VAR_9, VAR_2->len, VAR_5, 1);
 }

 return VAR_7;
}
