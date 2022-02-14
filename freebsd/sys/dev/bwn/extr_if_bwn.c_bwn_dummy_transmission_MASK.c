
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct bwn_softc {int sc_dev; } ;
struct bwn_phy {int type; int rf_ver; int rf_rev; } ;
struct bwn_mac {struct bwn_softc* mac_sc; struct bwn_phy mac_phy; } ;


 int FUNC_0 (struct bwn_softc*) ;



 int FUNC_1 (struct bwn_mac*,int) ;
 int FUNC_2 (struct bwn_mac*,int,int) ;
 int FUNC_3 (struct bwn_mac*,int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct bwn_mac*,unsigned int,int) ;

void
FUNC_7(struct bwn_mac *VAR_0, int VAR_1, int VAR_2)
{
 struct bwn_phy *VAR_3 = &VAR_0->mac_phy;
 struct bwn_softc *VAR_4 = VAR_0->mac_sc;
 unsigned int VAR_5, VAR_6;
 uint16_t VAR_7;
 uint32_t VAR_8[5] = {
  0x00000000, 0x00d40000, 0x00000000, 0x01000000, 0x00000000
 };

 if (VAR_1) {
  VAR_6 = 0x1e;
  VAR_8[0] = 0x000201cc;
 } else {
  VAR_6 = 0xfa;
  VAR_8[0] = 0x000b846e;
 }

 FUNC_0(VAR_0->mac_sc);

 for (VAR_5 = 0; VAR_5 < 5; VAR_5++)
  FUNC_6(VAR_0, VAR_5 * 4, VAR_8[VAR_5]);

 FUNC_3(VAR_0, 0x0568, 0x0000);
 FUNC_3(VAR_0, 0x07c0,
     (FUNC_5(VAR_4->sc_dev) < 11) ? 0x0000 : 0x0100);

 VAR_7 = (VAR_1 ? 0x41 : 0x40);
 FUNC_3(VAR_0, 0x050c, VAR_7);

 if (VAR_3->type == 128 || VAR_3->type == 129 ||
     VAR_3->type == 130)
  FUNC_3(VAR_0, 0x0514, 0x1a02);
 FUNC_3(VAR_0, 0x0508, 0x0000);
 FUNC_3(VAR_0, 0x050a, 0x0000);
 FUNC_3(VAR_0, 0x054c, 0x0000);
 FUNC_3(VAR_0, 0x056a, 0x0014);
 FUNC_3(VAR_0, 0x0568, 0x0826);
 FUNC_3(VAR_0, 0x0500, 0x0000);



 switch (VAR_3->type) {
 case 128:
 case 130:
  FUNC_3(VAR_0, 0x0502, 0x00d0);
  break;
 case 129:
  FUNC_3(VAR_0, 0x0502, 0x0050);
  break;
 default:
  FUNC_3(VAR_0, 0x0502, 0x0030);
  break;
 }


 FUNC_1(VAR_0, 0x0502);

 if (VAR_3->rf_ver == 0x2050 && VAR_3->rf_rev <= 0x5)
  FUNC_2(VAR_0, 0x0051, 0x0017);
 for (VAR_5 = 0x00; VAR_5 < VAR_6; VAR_5++) {
  VAR_7 = FUNC_1(VAR_0, 0x050e);
  if (VAR_7 & 0x0080)
   break;
  FUNC_4(10);
 }
 for (VAR_5 = 0x00; VAR_5 < 0x0a; VAR_5++) {
  VAR_7 = FUNC_1(VAR_0, 0x050e);
  if (VAR_7 & 0x0400)
   break;
  FUNC_4(10);
 }
 for (VAR_5 = 0x00; VAR_5 < 0x19; VAR_5++) {
  VAR_7 = FUNC_1(VAR_0, 0x0690);
  if (!(VAR_7 & 0x0100))
   break;
  FUNC_4(10);
 }
 if (VAR_3->rf_ver == 0x2050 && VAR_3->rf_rev <= 0x5)
  FUNC_2(VAR_0, 0x0051, 0x0037);
}
