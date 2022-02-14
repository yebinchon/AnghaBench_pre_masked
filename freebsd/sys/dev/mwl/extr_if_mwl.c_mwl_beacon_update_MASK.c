
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mwl_hal_vap {int dummy; } ;
struct ieee80211vap {struct ieee80211com* iv_ic; } ;
struct ieee80211com {int ic_curhtprotmode; } ;
struct TYPE_2__ {struct mwl_hal_vap* mv_hvap; } ;
 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ) ;
 TYPE_1__* FUNC_2 (struct ieee80211vap*) ;
 int FUNC_3 (struct ieee80211vap*) ;
 int FUNC_4 (struct mwl_hal_vap*,int ) ;
 int FUNC_5 (struct ieee80211com*) ;

__attribute__((used)) static void
FUNC_6(struct ieee80211vap *VAR_1, int VAR_2)
{
 struct mwl_hal_vap *VAR_3 = FUNC_2(VAR_1)->mv_hvap;
 struct ieee80211com *VAR_4 = VAR_1->iv_ic;

 FUNC_0(VAR_3 != ((void*)0), ("no beacon"));
 switch (VAR_2) {
 case 131:
  FUNC_5(VAR_4);
  break;
 case 130:
  FUNC_4(VAR_3,
      FUNC_1(VAR_4->ic_curhtprotmode, VAR_0));
  break;
 case 133:
 case 128:
 case 134:
 case 132:
  break;
 case 129:

  return;
 }

 FUNC_3(VAR_1);
}
