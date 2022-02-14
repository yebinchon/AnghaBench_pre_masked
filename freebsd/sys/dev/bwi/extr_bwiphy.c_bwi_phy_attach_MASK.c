
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct bwi_softc {int sc_dev; } ;
struct bwi_phy {int phy_rev; int phy_version; int phy_tbl_data_hi; int phy_tbl_data_lo; int phy_tbl_ctrl; int phy_mode; int phy_init; } ;
struct bwi_mac {struct bwi_phy mac_phy; struct bwi_softc* mac_sc; } ;
struct TYPE_3__ {int rev; int init; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct bwi_softc*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_1__* VAR_16 ;
 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 (TYPE_1__*) ;

int
FUNC_4(struct bwi_mac *VAR_17)
{
 struct bwi_softc *VAR_18 = VAR_17->mac_sc;
 struct bwi_phy *VAR_19 = &VAR_17->mac_phy;
 uint8_t VAR_20, VAR_21, VAR_22;
 uint16_t VAR_23;
 int VAR_24;


 VAR_23 = FUNC_0(VAR_18, VAR_0);
 VAR_20 = FUNC_1(VAR_23, VAR_1);
 VAR_21 = FUNC_1(VAR_23, VAR_2);
 VAR_22 = FUNC_1(VAR_23, VAR_3);
 FUNC_2(VAR_18->sc_dev, "PHY: type %d, rev %d, ver %d\n",
        VAR_21, VAR_20, VAR_22);





 switch (VAR_21) {
 case 130:
  if (VAR_20 >= 4) {
   FUNC_2(VAR_18->sc_dev, "unsupported 11A PHY, "
          "rev %u\n", VAR_20);
   return VAR_10;
  }
  VAR_19->phy_init = VAR_14;
  VAR_19->phy_mode = VAR_11;
  VAR_19->phy_tbl_ctrl = VAR_4;
  VAR_19->phy_tbl_data_lo = VAR_8;
  VAR_19->phy_tbl_data_hi = VAR_6;
  break;
 case 129:
  for (VAR_24 = 0; VAR_24 < FUNC_3(VAR_16); ++VAR_24) {
   if (VAR_20 == VAR_16[VAR_24].rev) {
    VAR_19->phy_init = VAR_16[VAR_24].init;
    break;
   }
  }
  if (VAR_24 == FUNC_3(VAR_16)) {
   FUNC_2(VAR_18->sc_dev, "unsupported 11B PHY, "
          "rev %u\n", VAR_20);
   return VAR_10;
  }
  VAR_19->phy_mode = VAR_12;
  break;
 case 128:
  if (VAR_20 > 8) {
   FUNC_2(VAR_18->sc_dev, "unsupported 11G PHY, "
          "rev %u\n", VAR_20);
   return VAR_10;
  }
  VAR_19->phy_init = VAR_15;
  VAR_19->phy_mode = VAR_13;
  VAR_19->phy_tbl_ctrl = VAR_5;
  VAR_19->phy_tbl_data_lo = VAR_9;
  VAR_19->phy_tbl_data_hi = VAR_7;
  break;
 default:
  FUNC_2(VAR_18->sc_dev, "unsupported PHY type %d\n",
         VAR_21);
  return VAR_10;
 }
 VAR_19->phy_rev = VAR_20;
 VAR_19->phy_version = VAR_22;
 return 0;
}
