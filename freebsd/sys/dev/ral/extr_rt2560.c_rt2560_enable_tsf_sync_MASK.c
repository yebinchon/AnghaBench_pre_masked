
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct ieee80211com {scalar_t__ ic_opmode; int ic_vaps; } ;
struct rt2560_softc {struct ieee80211com sc_ic; } ;
struct ieee80211vap {scalar_t__ iv_opmode; TYPE_1__* iv_bss; } ;
struct TYPE_2__ {int ni_intval; } ;


 int FUNC_0 (struct rt2560_softc*,char*,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct rt2560_softc*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 struct ieee80211vap* FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct rt2560_softc *VAR_8)
{
 struct ieee80211com *VAR_9 = &VAR_8->sc_ic;
 struct ieee80211vap *VAR_10 = FUNC_3(&VAR_9->ic_vaps);
 uint16_t VAR_11, VAR_12;
 uint32_t VAR_13;


 FUNC_1(VAR_8, VAR_4, 0);

 VAR_13 = 16 * VAR_10->iv_bss->ni_intval;
 FUNC_1(VAR_8, VAR_2, VAR_13);

 FUNC_1(VAR_8, VAR_3, 0);

 VAR_11 = 5;
 VAR_12 = (VAR_10->iv_opmode == VAR_0) ? 384 : 1024;
 VAR_13 = VAR_11 << 16 | VAR_12;
 FUNC_1(VAR_8, VAR_1, VAR_13);


 VAR_13 = VAR_7 | VAR_6;
 if (VAR_9->ic_opmode == VAR_0)
  VAR_13 |= FUNC_2(1);
 else
  VAR_13 |= FUNC_2(2) |
         VAR_5;
 FUNC_1(VAR_8, VAR_4, VAR_13);

 FUNC_0(VAR_8, "%s", "enabling TSF synchronization\n");
}
