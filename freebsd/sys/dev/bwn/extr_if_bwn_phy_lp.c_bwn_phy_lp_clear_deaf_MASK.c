
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct ieee80211com {int ic_curchan; } ;
struct bwn_softc {struct ieee80211com sc_ic; } ;
struct bwn_phy_lp {scalar_t__ plp_crssys_off; scalar_t__ plp_crsusr_off; } ;
struct TYPE_2__ {struct bwn_phy_lp phy_lp; } ;
struct bwn_mac {struct bwn_softc* mac_sc; TYPE_1__ mac_phy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bwn_mac*,int ,int,int) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct bwn_mac *VAR_1, uint8_t VAR_2)
{
 struct bwn_phy_lp *VAR_3 = &VAR_1->mac_phy.phy_lp;
 struct bwn_softc *VAR_4 = VAR_1->mac_sc;
 struct ieee80211com *VAR_5 = &VAR_4->sc_ic;

 if (VAR_2)
  VAR_3->plp_crsusr_off = 0;
 else
  VAR_3->plp_crssys_off = 0;

 if (VAR_3->plp_crsusr_off || VAR_3->plp_crssys_off)
  return;

 if (FUNC_1(VAR_5->ic_curchan))
  FUNC_0(VAR_1, VAR_0, 0xff1f, 0x60);
 else
  FUNC_0(VAR_1, VAR_0, 0xff1f, 0x20);
}
