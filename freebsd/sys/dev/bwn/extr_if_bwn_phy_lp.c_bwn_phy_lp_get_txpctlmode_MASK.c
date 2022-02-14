
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct bwn_softc {int sc_dev; } ;
struct bwn_phy_lp {int plp_txpctlmode; } ;
struct TYPE_2__ {struct bwn_phy_lp phy_lp; } ;
struct bwn_mac {struct bwn_softc* mac_sc; TYPE_1__ mac_phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bwn_mac*,int ) ;
 int VAR_4 ;
 int VAR_5 ;



 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void
FUNC_2(struct bwn_mac *VAR_6)
{
 struct bwn_phy_lp *VAR_7 = &VAR_6->mac_phy.phy_lp;
 struct bwn_softc *VAR_8 = VAR_6->mac_sc;
 uint16_t VAR_9;

 VAR_9 = FUNC_0(VAR_6, VAR_4);
 switch (VAR_9 & VAR_5) {
 case 129:
  VAR_7->plp_txpctlmode = VAR_0;
  break;
 case 128:
  VAR_7->plp_txpctlmode = VAR_2;
  break;
 case 130:
  VAR_7->plp_txpctlmode = VAR_1;
  break;
 default:
  VAR_7->plp_txpctlmode = VAR_3;
  FUNC_1(VAR_8->sc_dev, "unknown command mode\n");
  break;
 }
}
