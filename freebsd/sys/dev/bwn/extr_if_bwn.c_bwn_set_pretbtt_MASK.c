
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct ieee80211com {scalar_t__ ic_opmode; } ;
struct bwn_softc {struct ieee80211com sc_ic; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct bwn_mac {TYPE_1__ mac_phy; struct bwn_softc* mac_sc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bwn_mac*,int ,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct bwn_mac*,int ,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct bwn_mac *VAR_5)
{
 struct bwn_softc *VAR_6 = VAR_5->mac_sc;
 struct ieee80211com *VAR_7 = &VAR_6->sc_ic;
 uint16_t VAR_8;

 if (VAR_7->ic_opmode == VAR_4)
  VAR_8 = 2;
 else
  VAR_8 = (VAR_5->mac_phy.type == VAR_0) ? 120 : 250;
 FUNC_1(VAR_5, VAR_1, VAR_2, VAR_8);
 FUNC_0(VAR_5, VAR_3, VAR_8);
}
