
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct bwi_softc {int dummy; } ;
struct bwi_rf {scalar_t__ rf_type; int rf_rev; } ;
struct TYPE_2__ {scalar_t__ phy_mode; } ;
struct bwi_mac {TYPE_1__ mac_phy; struct bwi_rf mac_rf; struct bwi_softc* mac_sc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct bwi_softc*,int) ;
 int FUNC_1 (struct bwi_softc*,int ) ;
 int FUNC_2 (struct bwi_softc*,int,int) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct bwi_mac*,int,int) ;
 int FUNC_5 (struct bwi_mac*,int,int const) ;

void
FUNC_6(struct bwi_mac *VAR_4)
{

 static const uint32_t VAR_5[5] =
 { 0x000201cc, 0x00d40000, 0x00000000, 0x01000000, 0x00000000 };
 static const uint32_t VAR_6[5] =
 { 0x000b846e, 0x00d40000, 0x00000000, 0x01000000, 0x00000000 };

 struct bwi_softc *VAR_7 = VAR_4->mac_sc;
 struct bwi_rf *VAR_8 = &VAR_4->mac_rf;
 const uint32_t *VAR_9;
 uint16_t VAR_10;
 int VAR_11, VAR_12;

 if (VAR_4->mac_phy.phy_mode == VAR_2) {
  VAR_11 = 30;
  VAR_9 = VAR_5;
  VAR_10 = 1;
 } else {
  VAR_11 = 250;
  VAR_9 = VAR_6;
  VAR_10 = 0;
 }

 for (VAR_12 = 0; VAR_12 < 5; ++VAR_12)
  FUNC_5(VAR_4, VAR_12 * 4, VAR_9[VAR_12]);

 FUNC_1(VAR_7, VAR_0);

 FUNC_2(VAR_7, 0x568, 0);
 FUNC_2(VAR_7, 0x7c0, 0);
 FUNC_2(VAR_7, 0x50c, VAR_10);
 FUNC_2(VAR_7, 0x508, 0);
 FUNC_2(VAR_7, 0x50a, 0);
 FUNC_2(VAR_7, 0x54c, 0);
 FUNC_2(VAR_7, 0x56a, 0x14);
 FUNC_2(VAR_7, 0x568, 0x826);
 FUNC_2(VAR_7, 0x500, 0);
 FUNC_2(VAR_7, 0x502, 0x30);

 if (VAR_8->rf_type == VAR_1 && VAR_8->rf_rev <= 5)
  FUNC_4(VAR_4, 0x51, 0x17);

 for (VAR_12 = 0; VAR_12 < VAR_11; ++VAR_12) {
  if (FUNC_0(VAR_7, 0x50e) & 0x80)
   break;
  FUNC_3(10);
 }
 for (VAR_12 = 0; VAR_12 < 10; ++VAR_12) {
  if (FUNC_0(VAR_7, 0x50e) & 0x400)
   break;
  FUNC_3(10);
 }
 for (VAR_12 = 0; VAR_12 < 10; ++VAR_12) {
  if ((FUNC_0(VAR_7, 0x690) & 0x100) == 0)
   break;
  FUNC_3(10);
 }

 if (VAR_8->rf_type == VAR_1 && VAR_8->rf_rev <= 5)
  FUNC_4(VAR_4, 0x51, 0x37);

}
