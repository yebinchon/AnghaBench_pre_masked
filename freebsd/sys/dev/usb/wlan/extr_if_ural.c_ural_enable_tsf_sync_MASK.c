
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct ieee80211com {scalar_t__ ic_opmode; int ic_vaps; } ;
struct ural_softc {struct ieee80211com sc_ic; } ;
struct ieee80211vap {TYPE_1__* iv_bss; } ;
struct TYPE_2__ {int ni_intval; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct ieee80211vap* FUNC_2 (int *) ;
 int FUNC_3 (struct ural_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct ural_softc *VAR_8)
{
 struct ieee80211com *VAR_9 = &VAR_8->sc_ic;
 struct ieee80211vap *VAR_10 = FUNC_2(&VAR_9->ic_vaps);
 uint16_t VAR_11, VAR_12, VAR_13;


 FUNC_3(VAR_8, VAR_6, 0);

 VAR_13 = (16 * VAR_10->iv_bss->ni_intval) << 4;
 FUNC_3(VAR_8, VAR_5, VAR_13);

 VAR_11 = (VAR_9->ic_opmode == VAR_0) ? 2 : 0;
 VAR_12 = (VAR_9->ic_opmode == VAR_0) ? 320 : 6;
 VAR_13 = VAR_11 << 12 | VAR_12;
 FUNC_3(VAR_8, VAR_7, VAR_13);


 VAR_13 = VAR_4 | VAR_3;
 if (VAR_9->ic_opmode == VAR_1)
  VAR_13 |= FUNC_1(1);
 else
  VAR_13 |= FUNC_1(2) | VAR_2;
 FUNC_3(VAR_8, VAR_6, VAR_13);

 FUNC_0("enabling TSF synchronization\n");
}
