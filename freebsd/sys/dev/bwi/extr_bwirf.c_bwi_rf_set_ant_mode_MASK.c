
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct bwi_softc {int dummy; } ;
struct bwi_phy {scalar_t__ phy_mode; int phy_rev; } ;
struct TYPE_2__ {int rf_ant_mode; } ;
struct bwi_mac {int mac_rev; TYPE_1__ mac_rf; struct bwi_phy mac_phy; struct bwi_softc* mac_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct bwi_softc*,int,int) ;
 int FUNC_1 (struct bwi_softc*,int,int) ;
 int FUNC_2 (struct bwi_mac*,int ) ;
 int FUNC_3 (struct bwi_mac*,int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (struct bwi_mac*,int ,int ,int,int) ;
 int FUNC_6 (struct bwi_mac*,int,int) ;
 int FUNC_7 (struct bwi_mac*,int,int,int) ;
 int FUNC_8 (struct bwi_mac*,int,int) ;
 int FUNC_9 (struct bwi_mac*,int,int) ;

void
FUNC_10(struct bwi_mac *VAR_10, int VAR_11)
{
 struct bwi_softc *VAR_12 = VAR_10->mac_sc;
 struct bwi_phy *VAR_13 = &VAR_10->mac_phy;
 uint16_t VAR_14;

 FUNC_4(VAR_11 == VAR_0 ||
  VAR_11 == VAR_1 ||
  VAR_11 == VAR_2, ("ant_mode %d", VAR_11));

 FUNC_2(VAR_10, VAR_7);

 if (VAR_13->phy_mode == VAR_9) {

  if (VAR_10->mac_rev == 2)
   VAR_14 = VAR_2;
  else
   VAR_14 = VAR_11;
  VAR_14 <<= 7;
  FUNC_7(VAR_10, 0x3e2, 0xfe7f, VAR_14);
 } else {

  VAR_14 = VAR_11 << 7;
  FUNC_7(VAR_10, 0x401, 0x7e7f, VAR_14);

  if (VAR_11 == VAR_2)
   FUNC_6(VAR_10, 0x42b, 0x100);

  if (VAR_13->phy_mode == VAR_8) {

  } else {
   if (VAR_11 == VAR_2)
    FUNC_8(VAR_10, 0x48c, 0x2000);
   else
    FUNC_6(VAR_10, 0x48c, 0x2000);

   if (VAR_13->phy_rev >= 2) {
    FUNC_8(VAR_10, 0x461, 0x10);
    FUNC_7(VAR_10, 0x4ad, 0xff00, 0x15);
    if (VAR_13->phy_rev == 2) {
     FUNC_9(VAR_10, 0x427, 0x8);
    } else {
     FUNC_7(VAR_10, 0x427,
        0xff00, 0x8);
    }

    if (VAR_13->phy_rev >= 6)
     FUNC_9(VAR_10, 0x49b, 0xdc);
   }
  }
 }


 if (VAR_11 == VAR_2)
  FUNC_3(VAR_10, VAR_7);

 VAR_14 = VAR_11 << 8;
 FUNC_5(VAR_10, VAR_3, VAR_5,
       0xfc3f, VAR_14);
 FUNC_5(VAR_10, VAR_3, VAR_4,
       0xfc3f, VAR_14);
 FUNC_5(VAR_10, VAR_3, VAR_6,
       0xfc3f, VAR_14);


 if (VAR_13->phy_mode == VAR_9)
  FUNC_0(VAR_12, 0x5e, 0x4);

 FUNC_1(VAR_12, 0x100, 0x1000000);
 if (VAR_10->mac_rev < 5)
  FUNC_1(VAR_12, 0x10c, 0x1000000);

 VAR_10->mac_rf.rf_ant_mode = VAR_11;
}
