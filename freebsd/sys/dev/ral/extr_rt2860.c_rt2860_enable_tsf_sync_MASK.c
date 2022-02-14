
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ieee80211com {int ic_vaps; } ;
struct rt2860_softc {struct ieee80211com sc_ic; } ;
struct ieee80211vap {scalar_t__ iv_opmode; TYPE_1__* iv_bss; } ;
struct TYPE_2__ {int ni_intval; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct rt2860_softc*,int ) ;
 int FUNC_1 (struct rt2860_softc*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct ieee80211vap* FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct rt2860_softc *VAR_9)
{
 struct ieee80211com *VAR_10 = &VAR_9->sc_ic;
 struct ieee80211vap *VAR_11 = FUNC_2(&VAR_10->ic_vaps);
 uint32_t VAR_12;

 VAR_12 = FUNC_0(VAR_9, VAR_4);

 VAR_12 &= ~0x1fffff;
 VAR_12 |= VAR_11->iv_bss->ni_intval * 16;
 VAR_12 |= VAR_8 | VAR_6;
 if (VAR_11->iv_opmode == VAR_3) {




  VAR_12 |= 1 << VAR_7;
 }
 else if (VAR_11->iv_opmode == VAR_1 ||
     VAR_11->iv_opmode == VAR_2) {
  VAR_12 |= VAR_5;




  VAR_12 |= 2 << VAR_7;
 } else if (VAR_11->iv_opmode == VAR_0) {
  VAR_12 |= VAR_5;

  VAR_12 |= 3 << VAR_7;
 }

 FUNC_1(VAR_9, VAR_4, VAR_12);
}
