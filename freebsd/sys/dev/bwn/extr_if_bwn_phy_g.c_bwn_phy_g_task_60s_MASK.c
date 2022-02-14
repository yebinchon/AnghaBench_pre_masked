
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int board_flags; } ;
struct bwn_softc {TYPE_1__ sc_board_info; } ;
struct bwn_phy {int chan; int rf_ver; int rf_rev; } ;
struct bwn_mac {struct bwn_softc* mac_sc; struct bwn_phy mac_phy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bwn_mac*) ;
 int FUNC_1 (struct bwn_mac*) ;
 int FUNC_2 (struct bwn_mac*) ;
 int FUNC_3 (struct bwn_mac*,int) ;

void
FUNC_4(struct bwn_mac *VAR_1)
{
 struct bwn_phy *VAR_2 = &VAR_1->mac_phy;
 struct bwn_softc *VAR_3 = VAR_1->mac_sc;
 uint8_t VAR_4 = VAR_2->chan;

 if (!(VAR_3->sc_board_info.board_flags & VAR_0))
  return;

 FUNC_1(VAR_1);
 FUNC_2(VAR_1);
 if ((VAR_2->rf_ver == 0x2050) && (VAR_2->rf_rev == 8)) {
  FUNC_3(VAR_1, (VAR_4 >= 8) ? 1 : 13);
  FUNC_3(VAR_1, VAR_4);
 }
 FUNC_0(VAR_1);
}
