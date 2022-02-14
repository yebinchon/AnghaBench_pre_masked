
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ifnet {struct ieee80211vap* if_softc; } ;
struct ifmediareq {int ifm_status; int ifm_active; int ifm_current; } ;
struct ieee80211vap {scalar_t__ iv_state; scalar_t__ iv_opmode; TYPE_2__* iv_bss; TYPE_1__* iv_txparms; struct ieee80211com* iv_ic; } ;
struct ieee80211com {int ic_curchan; } ;
typedef enum ieee80211_phymode { ____Placeholder_ieee80211_phymode } ieee80211_phymode ;
struct TYPE_4__ {scalar_t__ ni_txrate; } ;
struct TYPE_3__ {scalar_t__ ucastrate; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ieee80211com*,scalar_t__,int) ;
 int FUNC_2 (scalar_t__,int ) ;

void
FUNC_3(struct ifnet *VAR_8, struct ifmediareq *VAR_9)
{
 struct ieee80211vap *VAR_10 = VAR_8->if_softc;
 struct ieee80211com *VAR_11 = VAR_10->iv_ic;
 enum ieee80211_phymode VAR_12;

 VAR_9->ifm_status = VAR_7;





 if (VAR_10->iv_state == VAR_3 ||
     VAR_10->iv_state == VAR_4) {
  VAR_9->ifm_status |= VAR_5;
  VAR_12 = FUNC_0(VAR_11->ic_curchan);
 } else
  VAR_12 = VAR_1;
 VAR_9->ifm_active = FUNC_2(VAR_10->iv_opmode, VAR_11->ic_curchan);



 if (VAR_10->iv_txparms[VAR_12].ucastrate != VAR_0) {



  VAR_9->ifm_active |= FUNC_1(VAR_11,
   VAR_10->iv_txparms[VAR_12].ucastrate, VAR_12);
 } else if (VAR_10->iv_opmode == VAR_2) {



  VAR_9->ifm_active |= FUNC_1(VAR_11,
   VAR_10->iv_bss->ni_txrate, VAR_12);
 } else
  VAR_9->ifm_active |= VAR_6;
 if (VAR_9->ifm_status & VAR_5)
  VAR_9->ifm_current = VAR_9->ifm_active;
}
