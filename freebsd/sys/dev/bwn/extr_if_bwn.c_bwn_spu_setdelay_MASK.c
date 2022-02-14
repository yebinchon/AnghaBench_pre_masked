
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct ieee80211com {scalar_t__ ic_opmode; } ;
struct bwn_softc {struct ieee80211com sc_ic; } ;
struct TYPE_2__ {scalar_t__ type; int rf_ver; int rf_rev; } ;
struct bwn_mac {TYPE_1__ mac_phy; struct bwn_softc* mac_sc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct bwn_mac*,int ,int ,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void
FUNC_2(struct bwn_mac *VAR_4, int VAR_5)
{
 struct bwn_softc *VAR_6 = VAR_4->mac_sc;
 struct ieee80211com *VAR_7 = &VAR_6->sc_ic;
 uint16_t VAR_8;

 VAR_8 = (VAR_4->mac_phy.type == VAR_0) ? 3700 : 1050;
 if (VAR_7->ic_opmode == VAR_3 || VAR_5)
  VAR_8 = 500;
 if ((VAR_4->mac_phy.rf_ver == 0x2050) && (VAR_4->mac_phy.rf_rev == 8))
  VAR_8 = FUNC_1(VAR_8, (uint16_t)2400);

 FUNC_0(VAR_4, VAR_1, VAR_2, VAR_8);
}
