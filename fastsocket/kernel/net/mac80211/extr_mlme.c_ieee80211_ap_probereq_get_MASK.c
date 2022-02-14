
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct TYPE_6__ {scalar_t__ type; } ;
struct ieee80211_if_managed {TYPE_4__* assoc_data; TYPE_3__* auth_data; struct cfg80211_bss* associated; } ;
struct TYPE_5__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {TYPE_2__ vif; TYPE_1__ u; } ;
struct ieee80211_hw {int dummy; } ;
struct cfg80211_bss {int channel; int bssid; } ;
struct TYPE_8__ {struct cfg80211_bss* bss; } ;
struct TYPE_7__ {struct cfg80211_bss* bss; } ;


 int FUNC_0 (struct ieee80211_if_managed*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int* FUNC_3 (struct cfg80211_bss*,int ) ;
 struct sk_buff* FUNC_4 (struct ieee80211_sub_if_data*,int ,int ,int ,int const*,int,int *,int ,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 struct ieee80211_sub_if_data* FUNC_7 (struct ieee80211_vif*) ;

struct sk_buff *FUNC_8(struct ieee80211_hw *VAR_2,
       struct ieee80211_vif *VAR_3)
{
 struct ieee80211_sub_if_data *VAR_4 = FUNC_7(VAR_3);
 struct ieee80211_if_managed *VAR_5 = &VAR_4->u.mgd;
 struct cfg80211_bss *VAR_6;
 struct sk_buff *VAR_7;
 const u8 *VAR_8;
 int VAR_9;

 if (FUNC_1(VAR_4->vif.type != VAR_0))
  return ((void*)0);

 FUNC_0(VAR_5);

 if (VAR_5->associated)
  VAR_6 = VAR_5->associated;
 else if (VAR_5->auth_data)
  VAR_6 = VAR_5->auth_data->bss;
 else if (VAR_5->assoc_data)
  VAR_6 = VAR_5->assoc_data->bss;
 else
  return ((void*)0);

 FUNC_5();
 VAR_8 = FUNC_3(VAR_6, VAR_1);
 if (FUNC_2(VAR_8 == ((void*)0)))
  VAR_9 = 0;
 else
  VAR_9 = VAR_8[1];

 VAR_7 = FUNC_4(VAR_4, VAR_6->bssid,
     (u32) -1, VAR_6->channel,
     VAR_8 + 2, VAR_9,
     ((void*)0), 0, 1);
 FUNC_6();

 return VAR_7;
}
