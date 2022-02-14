
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int board_srom_rev; } ;
struct bwn_softc {int sc_dev; TYPE_1__ sc_board_info; } ;
struct bwn_phy_n_core_pwr_info {int maxpwr_2g; } ;
struct bwn_nphy_power_vars {int maxp2ga; } ;
struct bwn_mac {struct bwn_softc* mac_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (struct bwn_softc*,struct bwn_nphy_power_vars const*,struct bwn_phy_n_core_pwr_info*) ;
 int FUNC_2 (struct bwn_softc*,struct bwn_nphy_power_vars const*,struct bwn_phy_n_core_pwr_info*) ;
 struct bwn_nphy_power_vars* VAR_2 ;
 int FUNC_3 (struct bwn_phy_n_core_pwr_info*,int,int) ;
 int FUNC_4 (struct bwn_nphy_power_vars*) ;

int
FUNC_5(struct bwn_mac *VAR_3, int VAR_4,
    struct bwn_phy_n_core_pwr_info *VAR_5)
{
 struct bwn_softc *VAR_6;
 const struct bwn_nphy_power_vars *VAR_7;
 uint8_t VAR_8;
 int VAR_9;

 VAR_6 = VAR_3->mac_sc;

 if (VAR_4 < 0 || VAR_4 >= FUNC_4(VAR_2))
  return (VAR_0);

 VAR_8 = VAR_6->sc_board_info.board_srom_rev;
 if (VAR_8 < 4)
  return (VAR_1);

 VAR_7 = &VAR_2[VAR_4];




 FUNC_3(VAR_5, 0x0, sizeof(*VAR_5));


 VAR_9 = FUNC_0(VAR_6->sc_dev, VAR_7->maxp2ga, &VAR_5->maxpwr_2g);
 if (VAR_9)
  return (VAR_9);


 if (VAR_8 >= 4 && VAR_8 <= 10)
  return (FUNC_2(VAR_6, VAR_7, VAR_5));
 else
  return (FUNC_1(VAR_6, VAR_7, VAR_5));
}
