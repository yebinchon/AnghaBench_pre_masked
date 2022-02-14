
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arswitch_softc {int sc_dev; } ;
struct ar8327_sgmii_cfg {int sgmii_ctrl; int serdes_aen; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,char*,int*) ;

__attribute__((used)) static int
FUNC_3(struct arswitch_softc *VAR_0,
    struct ar8327_sgmii_cfg *VAR_1)
{
 int VAR_2;


 VAR_2 = 0;
 if (FUNC_2(FUNC_0(VAR_0->sc_dev),
     FUNC_1(VAR_0->sc_dev),
     "sgmii.ctrl", &VAR_2) != 0)
  return (0);
 VAR_1->sgmii_ctrl = VAR_2;


 VAR_2 = 0;
 if (FUNC_2(FUNC_0(VAR_0->sc_dev),
     FUNC_1(VAR_0->sc_dev),
     "sgmii.serdes_aen", &VAR_2) != 0)
  return (0);
 VAR_1->serdes_aen = VAR_2;

 return (1);
}
