
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct ieee80211com {scalar_t__ ic_opmode; } ;
struct TYPE_2__ {scalar_t__ chip_id; int chip_rev; } ;
struct bwn_softc {int sc_filters; TYPE_1__ sc_cid; int sc_dev; struct ieee80211com sc_ic; } ;
struct bwn_mac {struct bwn_softc* mac_sc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct bwn_mac*,int ) ;
 int FUNC_1 (struct bwn_mac*,int,int) ;
 int FUNC_2 (struct bwn_mac*,int ,int) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct bwn_mac *VAR_12)
{
 struct bwn_softc *VAR_13 = VAR_12->mac_sc;
 struct ieee80211com *VAR_14 = &VAR_13->sc_ic;
 uint32_t VAR_15;
 uint16_t VAR_16;

 VAR_15 = FUNC_0(VAR_12, VAR_1);
 VAR_15 &= ~(VAR_3 | VAR_6 |
     VAR_5 | VAR_4 |
     VAR_7 | VAR_2);
 VAR_15 |= VAR_8;

 if (VAR_14->ic_opmode == VAR_9 ||
     VAR_14->ic_opmode == VAR_11)
  VAR_15 |= VAR_3;
 else if (VAR_14->ic_opmode == VAR_10)
  VAR_15 &= ~VAR_8;
 VAR_15 |= VAR_13->sc_filters;

 if (FUNC_3(VAR_13->sc_dev) <= 4)
  VAR_15 |= VAR_7;

 FUNC_2(VAR_12, VAR_1, VAR_15);

 VAR_16 = 2;
 if ((VAR_15 & VAR_8) && !(VAR_15 & VAR_3)) {
  if (VAR_13->sc_cid.chip_id == VAR_0 &&
      VAR_13->sc_cid.chip_rev == 3)
   VAR_16 = 100;
  else
   VAR_16 = 50;
 }
 FUNC_1(VAR_12, 0x612, VAR_16);
}
