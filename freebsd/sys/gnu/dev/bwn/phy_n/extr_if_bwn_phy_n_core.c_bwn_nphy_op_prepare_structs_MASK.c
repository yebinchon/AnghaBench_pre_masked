
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {scalar_t__ board_vendor; int board_srom_rev; int board_flags2; scalar_t__ board_devid; } ;
struct bwn_softc {int sc_dev; TYPE_1__ sc_board_info; } ;
struct bwn_phy_n {int hang_avoid; int gain_boost; int txrx_chain; int phyrxchain; int perical; int* tx_pwr_idx; int txpwrctrl; int pwg_gain_5ghz; int ipa2g_on; int ipa5g_on; int spur_avoid; } ;
struct bwn_phy {int rev; struct bwn_phy_n* phy_n; } ;
struct bwn_mac {struct bwn_softc* mac_sc; struct bwn_phy mac_phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bwn_softc*,char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (struct bwn_phy_n*,int ,int) ;

int
FUNC_4(struct bwn_mac *VAR_9)
{
 struct bwn_softc *VAR_10 = VAR_9->mac_sc;
 struct bwn_phy *VAR_11 = &VAR_9->mac_phy;
 struct bwn_phy_n *VAR_12 = VAR_11->phy_n;
 int VAR_13;

 FUNC_3(VAR_12, 0, sizeof(*VAR_12));

 VAR_12->hang_avoid = (VAR_11->rev == 3 || VAR_11->rev == 4);
 VAR_12->spur_avoid = (VAR_11->rev >= 3) ?
    VAR_4 : VAR_5;
 VAR_12->gain_boost = 1;
 VAR_12->txrx_chain = 2;
 VAR_12->phyrxchain = 3;
 VAR_12->perical = 2;


 VAR_12->tx_pwr_idx[0] = 128;
 VAR_12->tx_pwr_idx[1] = 128;


 VAR_12->txpwrctrl = 0;
 VAR_12->pwg_gain_5ghz = 0;
 if (VAR_9->mac_phy.rev >= 3 ||
     (VAR_10->sc_board_info.board_vendor == VAR_8 &&
      (FUNC_1(VAR_10->sc_dev) == 11 || FUNC_1(VAR_10->sc_dev) == 12))) {
  VAR_12->txpwrctrl = 1;
  VAR_12->pwg_gain_5ghz = 1;
 } else if (VAR_10->sc_board_info.board_srom_rev >= 4) {
  if (VAR_9->mac_phy.rev >= 2 &&
      (VAR_10->sc_board_info.board_flags2 & VAR_1)) {
   VAR_12->txpwrctrl = 1;
   if ((VAR_10->sc_board_info.board_devid == VAR_6) ||
       (VAR_10->sc_board_info.board_devid == VAR_7))
    VAR_12->pwg_gain_5ghz = 1;
  } else if (VAR_10->sc_board_info.board_flags2 & VAR_0) {
   VAR_12->pwg_gain_5ghz = 1;
  }
 }

 if (VAR_9->mac_phy.rev >= 3) {
  uint8_t VAR_14, VAR_15;

  VAR_13 = FUNC_2(VAR_10->sc_dev,
      VAR_2, &VAR_14);
  if (VAR_13) {
   FUNC_0(VAR_9->mac_sc, "Error reading 2GHz EPA "
       "gain configuration from NVRAM: %d\n", VAR_13);
   return (VAR_13);
  }

  VAR_13 = FUNC_2(VAR_10->sc_dev,
      VAR_3, &VAR_15);
  if (VAR_13) {
   FUNC_0(VAR_9->mac_sc, "Error reading 5GHz EPA "
       "gain configuration from NVRAM: %d\n", VAR_13);
   return (VAR_13);
  }

  VAR_12->ipa2g_on = (VAR_14 == 2);
  VAR_12->ipa5g_on = (VAR_15 == 2);
 }

 return (0);
}
