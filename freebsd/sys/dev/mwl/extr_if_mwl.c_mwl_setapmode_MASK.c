
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mwl_hal_vap {int dummy; } ;
struct ieee80211vap {int dummy; } ;
struct ieee80211_channel {int dummy; } ;
struct TYPE_2__ {struct mwl_hal_vap* mv_hvap; } ;


 TYPE_1__* FUNC_0 (struct ieee80211vap*) ;
 int FUNC_1 (struct ieee80211vap*,struct ieee80211_channel*) ;
 int FUNC_2 (struct mwl_hal_vap*,int ) ;

__attribute__((used)) static int
FUNC_3(struct ieee80211vap *VAR_0, struct ieee80211_channel *VAR_1)
{
 struct mwl_hal_vap *VAR_2 = FUNC_0(VAR_0)->mv_hvap;
 return FUNC_2(VAR_2, FUNC_1(VAR_0, VAR_1));
}
