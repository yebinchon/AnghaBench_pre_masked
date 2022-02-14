
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mwl_hal_vap {int dummy; } ;
struct ieee80211vap {int iv_flags_ht; scalar_t__ iv_opmode; TYPE_1__* iv_bss; int iv_rtsthreshold; struct ieee80211com* iv_ic; } ;
struct ieee80211com {scalar_t__ ic_htprotmode; int ic_curhtprotmode; } ;
struct TYPE_4__ {struct mwl_hal_vap* mv_hvap; } ;
struct TYPE_3__ {int ni_chan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ) ;
 TYPE_2__* FUNC_1 (struct ieee80211vap*) ;
 int FUNC_2 (struct ieee80211vap*) ;
 int FUNC_3 (struct mwl_hal_vap*,int) ;
 int FUNC_4 (struct mwl_hal_vap*,int ) ;
 int FUNC_5 (struct mwl_hal_vap*,int ) ;
 int FUNC_6 (struct mwl_hal_vap*,int ) ;
 int FUNC_7 (struct ieee80211vap*,int ) ;
 int FUNC_8 (struct ieee80211vap*) ;

__attribute__((used)) static int
FUNC_9(struct ieee80211vap *VAR_10, int VAR_11)
{
 struct mwl_hal_vap *VAR_12 = FUNC_1(VAR_10)->mv_hvap;
 struct ieee80211com *VAR_13 = VAR_10->iv_ic;

 if (VAR_11 == VAR_9)
  FUNC_8(VAR_10);

 FUNC_6(VAR_12, VAR_10->iv_rtsthreshold);

 FUNC_3(VAR_12, (VAR_10->iv_flags_ht &
     (VAR_2|VAR_3)) ? 1 : 0);
 FUNC_4(VAR_12, VAR_13->ic_htprotmode == VAR_8 ?
     VAR_1 : VAR_0);



 if (VAR_11 == VAR_9 &&
     (VAR_10->iv_opmode == VAR_5 ||
      VAR_10->iv_opmode == VAR_7 ||
      VAR_10->iv_opmode == VAR_6)) {
  FUNC_7(VAR_10, VAR_10->iv_bss->ni_chan);
  FUNC_5(VAR_12,
      FUNC_0(VAR_13->ic_curhtprotmode, VAR_4));
  return FUNC_2(VAR_10);
 }
 return 0;
}
