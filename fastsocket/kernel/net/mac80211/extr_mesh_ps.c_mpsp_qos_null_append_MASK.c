
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int addr; } ;
struct sta_info {TYPE_1__ sta; struct ieee80211_sub_if_data* sdata; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int priority; scalar_t__ data; } ;
struct TYPE_4__ {int * vif; } ;
struct ieee80211_tx_info {int flags; TYPE_2__ control; } ;
struct ieee80211_sub_if_data {int vif; } ;
struct ieee80211_hdr {int frame_control; } ;


 int VAR_0 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_1 (struct sk_buff_head*,struct sk_buff*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct ieee80211_sub_if_data*,struct sk_buff*) ;
 int FUNC_4 (struct ieee80211_sub_if_data*,char*,int ) ;
 struct sk_buff* FUNC_5 (struct sta_info*) ;
 struct sk_buff* FUNC_6 (struct sk_buff_head*) ;
 int FUNC_7 (struct sk_buff*,int ) ;

__attribute__((used)) static void FUNC_8(struct sta_info *VAR_2,
     struct sk_buff_head *VAR_3)
{
 struct ieee80211_sub_if_data *VAR_4 = VAR_2->sdata;
 struct sk_buff *VAR_5, *VAR_6 = FUNC_6(VAR_3);
 struct ieee80211_hdr *VAR_7 = (struct ieee80211_hdr *) VAR_6->data;
 struct ieee80211_tx_info *VAR_8;

 if (FUNC_2(VAR_7->frame_control))
  return;

 VAR_5 = FUNC_5(VAR_2);
 if (!VAR_5)
  return;

 FUNC_4(VAR_4, "appending QoS Null in MPSP towards %pM\n",
  VAR_2->sta.addr);




 VAR_5->priority = 1;
 FUNC_7(VAR_5, VAR_0);
 FUNC_3(VAR_4, VAR_5);

 VAR_8 = FUNC_0(VAR_5);
 VAR_8->control.vif = &VAR_4->vif;
 VAR_8->flags |= VAR_1;

 FUNC_1(VAR_3, VAR_5);
}
