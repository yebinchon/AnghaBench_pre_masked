
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_2__ {scalar_t__ board_vendor; scalar_t__ board_type; } ;
struct bwn_softc {TYPE_1__ sc_board_info; } ;
struct bwn_phy_g {int pg_txctl; int pg_rfatt; int pg_bbatt; } ;
struct bwn_phy {int analog; int rf_ver; int rev; int chan; scalar_t__ gmode; struct bwn_phy_g phy_g; } ;
struct bwn_mac {int mac_flags; struct bwn_softc* mac_sc; struct bwn_phy mac_phy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bwn_mac*,int,int) ;
 int FUNC_1 (struct bwn_mac*,int,int,int) ;
 int FUNC_2 (struct bwn_mac*,int,int) ;
 int FUNC_3 (struct bwn_mac*,int) ;
 int FUNC_4 (struct bwn_mac*,int,int) ;
 int FUNC_5 (struct bwn_mac*,int,int) ;
 int FUNC_6 (struct bwn_mac*,int,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (struct bwn_mac*,int *,int *,int ) ;
 int FUNC_8 (struct bwn_mac*,int,int ) ;

__attribute__((used)) static void
FUNC_9(struct bwn_mac *VAR_5)
{
 struct bwn_phy *VAR_6 = &VAR_5->mac_phy;
 struct bwn_phy_g *VAR_7 = &VAR_6->phy_g;
 struct bwn_softc *VAR_8 = VAR_5->mac_sc;
 uint16_t VAR_9, VAR_10;
 uint8_t VAR_11;

 if (VAR_6->analog == 1)
  FUNC_4(VAR_5, 0x007a, 0x0050);
 if ((VAR_8->sc_board_info.board_vendor != VAR_4) &&
     (VAR_8->sc_board_info.board_type != VAR_0)) {
  VAR_10 = 0x2120;
  for (VAR_9 = 0x00a8; VAR_9 < 0x00c7; VAR_9++) {
   FUNC_2(VAR_5, VAR_9, VAR_10);
   VAR_10 += 0x202;
  }
 }
 FUNC_1(VAR_5, 0x0035, 0xf0ff, 0x0700);
 if (VAR_6->rf_ver == 0x2050)
  FUNC_2(VAR_5, 0x0038, 0x0667);

 if (VAR_6->gmode || VAR_6->rev >= 2) {
  if (VAR_6->rf_ver == 0x2050) {
   FUNC_4(VAR_5, 0x007a, 0x0020);
   FUNC_4(VAR_5, 0x0051, 0x0004);
  }
  FUNC_6(VAR_5, VAR_2, 0x0000);

  FUNC_0(VAR_5, 0x0802, 0x0100);
  FUNC_0(VAR_5, 0x042b, 0x2000);

  FUNC_2(VAR_5, 0x001c, 0x186a);

  FUNC_1(VAR_5, 0x0013, 0x00ff, 0x1900);
  FUNC_1(VAR_5, 0x0035, 0xffc0, 0x0064);
  FUNC_1(VAR_5, 0x005d, 0xff80, 0x000a);
 }

 if (VAR_5->mac_flags & VAR_1)
  FUNC_0(VAR_5, VAR_3, (1 << 11));

 if (VAR_6->analog == 1) {
  FUNC_2(VAR_5, 0x0026, 0xce00);
  FUNC_2(VAR_5, 0x0021, 0x3763);
  FUNC_2(VAR_5, 0x0022, 0x1bc3);
  FUNC_2(VAR_5, 0x0023, 0x06f9);
  FUNC_2(VAR_5, 0x0024, 0x037e);
 } else
  FUNC_2(VAR_5, 0x0026, 0xcc00);
 FUNC_2(VAR_5, 0x0030, 0x00c6);
 FUNC_6(VAR_5, 0x03ec, 0x3f22);

 if (VAR_6->analog == 1)
  FUNC_2(VAR_5, 0x0020, 0x3e1c);
 else
  FUNC_2(VAR_5, 0x0020, 0x301c);

 if (VAR_6->analog == 0)
  FUNC_6(VAR_5, 0x03e4, 0x3000);

 VAR_11 = VAR_6->chan;
 FUNC_8(VAR_5, 7, 0);

 if (VAR_6->rf_ver != 0x2050) {
  FUNC_5(VAR_5, 0x0075, 0x0080);
  FUNC_5(VAR_5, 0x0079, 0x0081);
 }

 FUNC_5(VAR_5, 0x0050, 0x0020);
 FUNC_5(VAR_5, 0x0050, 0x0023);

 if (VAR_6->rf_ver == 0x2050) {
  FUNC_5(VAR_5, 0x0050, 0x0020);
  FUNC_5(VAR_5, 0x005a, 0x0070);
 }

 FUNC_5(VAR_5, 0x005b, 0x007b);
 FUNC_5(VAR_5, 0x005c, 0x00b0);
 FUNC_4(VAR_5, 0x007a, 0x0007);

 FUNC_8(VAR_5, VAR_11, 0);
 FUNC_2(VAR_5, 0x0014, 0x0080);
 FUNC_2(VAR_5, 0x0032, 0x00ca);
 FUNC_2(VAR_5, 0x002a, 0x88a3);

 FUNC_7(VAR_5, &VAR_7->pg_bbatt, &VAR_7->pg_rfatt,
     VAR_7->pg_txctl);

 if (VAR_6->rf_ver == 0x2050)
  FUNC_5(VAR_5, 0x005d, 0x000d);

 FUNC_6(VAR_5, 0x03e4, (FUNC_3(VAR_5, 0x03e4) & 0xffc0) | 0x0004);
}
