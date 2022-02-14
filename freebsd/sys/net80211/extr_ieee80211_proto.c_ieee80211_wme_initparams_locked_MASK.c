
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wmeParams {int dummy; } ;
struct ieee80211vap {TYPE_3__* iv_bss; struct ieee80211com* iv_ic; } ;
struct TYPE_5__ {struct wmeParams* cap_wmeParams; } ;
struct TYPE_4__ {struct wmeParams* cap_wmeParams; scalar_t__ cap_info; } ;
struct ieee80211_wme_state {int wme_hipri_switch_thresh; int wme_flags; TYPE_2__ wme_wmeBssChanParams; TYPE_1__ wme_wmeChanParams; } ;
struct ieee80211com {int ic_caps; int ic_nrunning; scalar_t__ ic_bsschan; scalar_t__ ic_opmode; struct ieee80211_wme_state ic_wme; } ;
typedef int paramType ;
typedef enum ieee80211_phymode { ____Placeholder_ieee80211_phymode } ieee80211_phymode ;
struct TYPE_6__ {int ni_intval; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ieee80211com*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;




 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct ieee80211vap*) ;
 int * VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int FUNC_3 (struct ieee80211vap*,char*,int,struct wmeParams*,int const*) ;

__attribute__((used)) static void
FUNC_4(struct ieee80211vap *VAR_14)
{
 struct ieee80211com *VAR_15 = VAR_14->iv_ic;
 struct ieee80211_wme_state *VAR_16 = &VAR_15->ic_wme;
 const paramType *VAR_17, *VAR_18;
 struct wmeParams *VAR_19;
 enum ieee80211_phymode VAR_20;
 int VAR_21;

 FUNC_0(VAR_15);

 if ((VAR_15->ic_caps & VAR_2) == 0 || VAR_15->ic_nrunning > 1)
  return;
 VAR_16->wme_wmeChanParams.cap_info = 0;







 if (VAR_15->ic_bsschan != VAR_1)
  VAR_20 = FUNC_1(VAR_15->ic_bsschan);
 else
  VAR_20 = VAR_3;
 for (VAR_21 = 0; VAR_21 < VAR_6; VAR_21++) {
  switch (VAR_21) {
  case 130:
   VAR_17 = &VAR_11[VAR_20];
   VAR_18 = &VAR_11[VAR_20];
   break;
  case 129:
   VAR_17 = &VAR_12[VAR_20];
   VAR_18 = &VAR_8[VAR_20];
   break;
  case 128:
   VAR_17 = &VAR_13[VAR_20];
   VAR_18 = &VAR_9[VAR_20];
   break;
  case 131:
  default:
   VAR_17 = &VAR_10[VAR_20];
   VAR_18 = &VAR_7[VAR_20];
   break;
  }
  VAR_19 = &VAR_16->wme_wmeChanParams.cap_wmeParams[VAR_21];
  if (VAR_15->ic_opmode == VAR_4) {
   FUNC_3(VAR_14, "chan", VAR_21, VAR_19, VAR_17);
  } else {
   FUNC_3(VAR_14, "chan", VAR_21, VAR_19, VAR_18);
  }
  VAR_19 = &VAR_16->wme_wmeBssChanParams.cap_wmeParams[VAR_21];
  FUNC_3(VAR_14, "bss ", VAR_21, VAR_19, VAR_18);
 }

 if (VAR_14->iv_bss != ((void*)0)) {






  VAR_16->wme_hipri_switch_thresh =
   (VAR_0 * VAR_14->iv_bss->ni_intval) / 100;
  VAR_16->wme_flags &= ~VAR_5;
  FUNC_2(VAR_14);
 }
}
