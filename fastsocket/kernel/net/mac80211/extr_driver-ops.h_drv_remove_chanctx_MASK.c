
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_local {int hw; TYPE_1__* ops; } ;
struct ieee80211_chanctx {int driver_present; int conf; } ;
struct TYPE_2__ {int (* remove_chanctx ) (int *,int *) ;} ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct ieee80211_local*,struct ieee80211_chanctx*) ;
 int FUNC_2 (struct ieee80211_local*) ;

__attribute__((used)) static inline void FUNC_3(struct ieee80211_local *VAR_0,
          struct ieee80211_chanctx *VAR_1)
{
 FUNC_1(VAR_0, VAR_1);
 if (VAR_0->ops->remove_chanctx)
  VAR_0->ops->remove_chanctx(&VAR_0->hw, &VAR_1->conf);
 FUNC_2(VAR_0);
 VAR_1->driver_present = 0;
}
