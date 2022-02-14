
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ieee80211_tx_control {int dummy; } ;
struct ieee80211_local {int hw; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* tx ) (int *,struct ieee80211_tx_control*,struct sk_buff*) ;} ;


 int FUNC_0 (int *,struct ieee80211_tx_control*,struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_1(struct ieee80211_local *VAR_0,
     struct ieee80211_tx_control *VAR_1,
     struct sk_buff *VAR_2)
{
 VAR_0->ops->tx(&VAR_0->hw, VAR_1, VAR_2);
}
