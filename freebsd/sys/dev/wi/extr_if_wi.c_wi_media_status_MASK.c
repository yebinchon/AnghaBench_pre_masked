
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int val ;
typedef int u_int16_t ;
struct wi_softc {scalar_t__ sc_firmware_type; scalar_t__ sc_enabled; } ;
struct ifnet {struct ieee80211vap* if_softc; } ;
struct ifmediareq {int dummy; } ;
struct ieee80211vap {TYPE_1__* iv_bss; struct ieee80211com* iv_ic; } ;
struct ieee80211com {struct wi_softc* ic_softc; } ;
struct TYPE_2__ {int ni_txrate; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ifnet*,struct ifmediareq*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct wi_softc*,int ,int*,int*) ;

__attribute__((used)) static void
FUNC_3(struct ifnet *VAR_2, struct ifmediareq *VAR_3)
{
 struct ieee80211vap *VAR_4 = VAR_2->if_softc;
 struct ieee80211com *VAR_5 = VAR_4->iv_ic;
 struct wi_softc *VAR_6 = VAR_5->ic_softc;
 u_int16_t VAR_7;
 int VAR_8, VAR_9;

 VAR_9 = sizeof(VAR_7);
 if (VAR_6->sc_enabled &&
     FUNC_2(VAR_6, VAR_1, &VAR_7, &VAR_9) == 0 &&
     VAR_9 == sizeof(VAR_7)) {

  VAR_7 = FUNC_1(VAR_7);
  VAR_8 = VAR_7 * 2;
  if (VAR_6->sc_firmware_type == VAR_0) {
   if (VAR_8 == 10)
    VAR_8 = 11;
  } else {
   if (VAR_8 == 4*2)
    VAR_8 = 11;
   else if (VAR_8 == 8*2)
    VAR_8 = 22;
  }
  VAR_4->iv_bss->ni_txrate = VAR_8;
 }
 FUNC_0(VAR_2, VAR_3);
}
