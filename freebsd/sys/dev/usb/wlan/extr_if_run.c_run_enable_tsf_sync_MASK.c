
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct ieee80211com {scalar_t__ ic_opmode; int ic_vaps; } ;
struct run_softc {struct ieee80211com sc_ic; } ;
struct ieee80211vap {TYPE_1__* iv_bss; } ;
struct TYPE_4__ {int rvp_id; } ;
struct TYPE_3__ {int ni_intval; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct run_softc*,int ,char*,...) ;
 TYPE_2__* FUNC_1 (struct ieee80211vap*) ;
 struct ieee80211vap* FUNC_2 (int *) ;
 int FUNC_3 (struct run_softc*,int ,int*) ;
 int FUNC_4 (struct run_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct run_softc *VAR_10)
{
 struct ieee80211com *VAR_11 = &VAR_10->sc_ic;
 struct ieee80211vap *VAR_12 = FUNC_2(&VAR_11->ic_vaps);
 uint32_t VAR_13;

 FUNC_0(VAR_10, VAR_9, "rvp_id=%d ic_opmode=%d\n",
     FUNC_1(VAR_12)->rvp_id, VAR_11->ic_opmode);

 FUNC_3(VAR_10, VAR_4, &VAR_13);
 VAR_13 &= ~0x1fffff;
 VAR_13 |= VAR_12->iv_bss->ni_intval * 16;
 VAR_13 |= VAR_8 | VAR_6;

 if (VAR_11->ic_opmode == VAR_3) {




  VAR_13 |= 1 << VAR_7;
 } else if (VAR_11->ic_opmode == VAR_1) {
         VAR_13 |= VAR_5;




         VAR_13 |= 2 << VAR_7;
 } else if (VAR_11->ic_opmode == VAR_0 ||
      VAR_11->ic_opmode == VAR_2) {
         VAR_13 |= VAR_5;

         VAR_13 |= 3 << VAR_7;
 } else {
  FUNC_0(VAR_10, VAR_9,
      "Enabling TSF failed. undefined opmode\n");
  return;
 }

 FUNC_4(VAR_10, VAR_4, VAR_13);
}
