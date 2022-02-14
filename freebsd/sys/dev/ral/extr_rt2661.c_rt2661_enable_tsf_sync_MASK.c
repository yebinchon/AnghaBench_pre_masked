
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ieee80211com {int ic_vaps; } ;
struct rt2661_softc {struct ieee80211com sc_ic; } ;
struct ieee80211vap {scalar_t__ iv_opmode; TYPE_1__* iv_bss; } ;
struct TYPE_2__ {int ni_intval; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct rt2661_softc*,int ) ;
 int FUNC_1 (struct rt2661_softc*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ieee80211vap* FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct rt2661_softc *VAR_6)
{
 struct ieee80211com *VAR_7 = &VAR_6->sc_ic;
 struct ieee80211vap *VAR_8 = FUNC_3(&VAR_7->ic_vaps);
 uint32_t VAR_9;

 if (VAR_8->iv_opmode != VAR_0) {




  FUNC_1(VAR_6, VAR_4, 1 << 12 | 8);
 }

 VAR_9 = FUNC_0(VAR_6, VAR_5) & 0xff000000;


 VAR_9 |= VAR_8->iv_bss->ni_intval * 16;

 VAR_9 |= VAR_3 | VAR_1;
 if (VAR_8->iv_opmode == VAR_0)
  VAR_9 |= FUNC_2(1);
 else
  VAR_9 |= FUNC_2(2) | VAR_2;

 FUNC_1(VAR_6, VAR_5, VAR_9);
}
