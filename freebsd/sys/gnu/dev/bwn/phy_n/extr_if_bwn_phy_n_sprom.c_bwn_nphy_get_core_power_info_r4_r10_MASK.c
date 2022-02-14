
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwn_softc {int sc_dev; } ;
struct bwn_phy_n_core_pwr_info {int itssi_5g; int itssi_2g; } ;
struct bwn_nphy_power_vars {int itt5ga; int itt2ga; } ;


 int FUNC_0 (int ,int ,int *) ;

__attribute__((used)) static int
FUNC_1(struct bwn_softc *VAR_0,
    const struct bwn_nphy_power_vars *VAR_1, struct bwn_phy_n_core_pwr_info *VAR_2)
{
 int VAR_3;


 VAR_3 = FUNC_0(VAR_0->sc_dev, VAR_1->itt2ga, &VAR_2->itssi_2g);
 if (VAR_3)
  return (VAR_3);


 VAR_3 = FUNC_0(VAR_0->sc_dev, VAR_1->itt5ga, &VAR_2->itssi_5g);
 if (VAR_3)
  return (VAR_3);

 return (0);
}
