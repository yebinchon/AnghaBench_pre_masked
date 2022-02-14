
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int addr; } ;
struct sta_info {int sta_state; int uploaded; TYPE_3__ sta; } ;
struct TYPE_5__ {scalar_t__ type; } ;
struct ieee80211_sub_if_data {TYPE_2__ vif; } ;
struct ieee80211_local {TYPE_1__* ops; } ;
typedef enum ieee80211_sta_state { ____Placeholder_ieee80211_sta_state } ieee80211_sta_state ;
struct TYPE_4__ {int sta_add; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ieee80211_local*,struct ieee80211_sub_if_data*,struct sta_info*,int,int) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,char*,int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct ieee80211_local *VAR_2,
         struct ieee80211_sub_if_data *VAR_3,
         struct sta_info *VAR_4)
{
 enum ieee80211_sta_state VAR_5;
 int VAR_6 = 0;

 for (VAR_5 = VAR_0; VAR_5 < VAR_4->sta_state; VAR_5++) {
  VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_5 + 1);
  if (VAR_6)
   break;
 }

 if (!VAR_6) {




  if (!VAR_2->ops->sta_add)
   VAR_4->uploaded = 1;
  return 0;
 }

 if (VAR_3->vif.type == VAR_1) {
  FUNC_2(VAR_3,
      "failed to move IBSS STA %pM to state %d (%d) - keeping it anyway\n",
      VAR_4->sta.addr, VAR_5 + 1, VAR_6);
  VAR_6 = 0;
 }


 for (; VAR_5 > VAR_0; VAR_5--)
  FUNC_0(FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_5 - 1));

 return VAR_6;
}
