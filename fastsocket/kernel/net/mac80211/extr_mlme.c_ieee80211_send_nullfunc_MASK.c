
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct ieee80211_if_managed {int flags; } ;
struct TYPE_3__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {int vif; TYPE_1__ u; } ;
struct ieee80211_local {int hw; } ;
struct ieee80211_hdr_3addr {int frame_control; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 struct sk_buff* FUNC_2 (int *,int *) ;
 int FUNC_3 (struct ieee80211_sub_if_data*,struct sk_buff*) ;

void FUNC_4(struct ieee80211_local *VAR_6,
        struct ieee80211_sub_if_data *VAR_7,
        int VAR_8)
{
 struct sk_buff *VAR_9;
 struct ieee80211_hdr_3addr *VAR_10;
 struct ieee80211_if_managed *VAR_11 = &VAR_7->u.mgd;

 VAR_9 = FUNC_2(&VAR_6->hw, &VAR_7->vif);
 if (!VAR_9)
  return;

 VAR_10 = (struct ieee80211_hdr_3addr *) VAR_9->data;
 if (VAR_8)
  VAR_10->frame_control |= FUNC_1(VAR_0);

 FUNC_0(VAR_9)->flags |= VAR_4 |
     VAR_5;
 if (VAR_11->flags & (VAR_1 |
       VAR_2))
  FUNC_0(VAR_9)->flags |= VAR_3;

 FUNC_3(VAR_7, VAR_9);
}
