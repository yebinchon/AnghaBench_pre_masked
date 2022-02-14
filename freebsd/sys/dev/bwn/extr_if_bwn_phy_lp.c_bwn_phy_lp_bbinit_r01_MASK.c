
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct ieee80211com {int ic_curchan; } ;
struct TYPE_5__ {scalar_t__ chip_id; scalar_t__ chip_pkg; } ;
struct TYPE_4__ {int board_flags; int board_type; } ;
struct bwn_softc {TYPE_2__ sc_cid; TYPE_1__ sc_board_info; int sc_dev; int sc_pmu; struct ieee80211com sc_ic; } ;
struct bwn_smpair {int member_1; int member_2; int mask; int set; int const offset; int const member_0; } ;
struct bwn_phy_lp {int plp_rxpwroffset; int plp_rssivf; int plp_rssivc; int plp_bxarch; } ;
struct TYPE_6__ {scalar_t__ rev; struct bwn_phy_lp phy_lp; } ;
struct bwn_mac {TYPE_3__ mac_phy; struct bwn_softc* mac_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int const VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int const VAR_15 ;
 int VAR_16 ;
 int const VAR_17 ;

 int FUNC_0 (struct bwn_mac*,int const,int const) ;
 int const VAR_18 ;

 int const VAR_19 ;


 int VAR_20 ;
 int VAR_21 ;
 int const VAR_22 ;
 int const VAR_23 ;
 int const VAR_24 ;
 int const VAR_25 ;
 int const VAR_26 ;
 int const VAR_27 ;
 int FUNC_1 (struct bwn_mac*,int const,int) ;
 int const VAR_28 ;
 int const VAR_29 ;
 int FUNC_2 (struct bwn_mac*,int const) ;
 int VAR_30 ;
 int VAR_31 ;
 int const VAR_32 ;
 int FUNC_3 (struct bwn_mac*,int const,int) ;
 int FUNC_4 (struct bwn_mac*,int const,int,int) ;
 int const VAR_33 ;
 int const VAR_34 ;
 int FUNC_5 (struct bwn_mac*,int ,int) ;
 int FUNC_6 (int,int) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct bwn_smpair const*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ,int) ;
 int FUNC_13 (struct bwn_mac*) ;
 int FUNC_14 (struct bwn_mac*,int) ;
 int FUNC_15 (struct bwn_mac*,int ,int) ;
 int FUNC_16 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_17(struct bwn_mac *VAR_35)
{
 struct bwn_phy_lp *VAR_36 = &VAR_35->mac_phy.phy_lp;
 struct bwn_softc *VAR_37 = VAR_35->mac_sc;
 struct ieee80211com *VAR_38 = &VAR_37->sc_ic;
 static const struct bwn_smpair VAR_39[] = {
  { 139, 0xffe0, 0x0005 },
  { 139, 0xfc1f, 0x0180 },
  { 139, 0x83ff, 0x3c00 },
  { 137, 0xfff0, 0x0005 },
  { 136, 0xffc0, 0x001a },
  { 138, 0xff00, 0x00b3 },
  { 138, 0x00ff, 0xad00 }
 };
 static const struct bwn_smpair VAR_40[] = {
  { 135, 0xffc0, 0x000a },
  { 135, 0x3f00, 0x0900 },
  { 134, 0xffc0, 0x000a },
  { 134, 0xc0ff, 0x0b00 },
  { 133, 0xffc0, 0x000a },
  { 133, 0xc0ff, 0x0400 },
  { 132, 0xffc0, 0x000a },
  { 132, 0xc0ff, 0x0b00 },
  { 131, 0xffc0, 0x000a },
  { 131, 0xc0ff, 0x0900 },
  { 130, 0xffc0, 0x000a },
  { 130, 0xc0ff, 0x0b00 },
  { 129, 0xffc0, 0x000a },
  { 129, 0xc0ff, 0x0900 },
  { 128, 0xffc0, 0x000a },
  { 128, 0xc0ff, 0x0b00 }
 };
 static const struct bwn_smpair VAR_41[] = {
  { 135, 0xffc0, 0x0001 },
  { 135, 0xc0ff, 0x0400 },
  { 134, 0xffc0, 0x0001 },
  { 134, 0xc0ff, 0x0500 },
  { 133, 0xffc0, 0x0002 },
  { 133, 0xc0ff, 0x0800 },
  { 132, 0xffc0, 0x0002 },
  { 132, 0xc0ff, 0x0a00 }
 };
 static const struct bwn_smpair VAR_42[] = {
  { 135, 0xffc0, 0x0004 },
  { 135, 0xc0ff, 0x0800 },
  { 134, 0xffc0, 0x0004 },
  { 134, 0xc0ff, 0x0c00 },
  { 133, 0xffc0, 0x0002 },
  { 133, 0xc0ff, 0x0100 },
  { 132, 0xffc0, 0x0002 },
  { 132, 0xc0ff, 0x0300 }
 };
 static const struct bwn_smpair VAR_43[] = {
  { 135, 0xffc0, 0x000a },
  { 135, 0xc0ff, 0x0900 },
  { 134, 0xffc0, 0x000a },
  { 134, 0xc0ff, 0x0b00 },
  { 133, 0xffc0, 0x0006 },
  { 133, 0xc0ff, 0x0500 },
  { 132, 0xffc0, 0x0006 },
  { 132, 0xc0ff, 0x0700 }
 };
 int VAR_44, VAR_45;
 uint16_t VAR_46, VAR_47;

 FUNC_1(VAR_35, VAR_15, 0xf7ff);
 FUNC_5(VAR_35, VAR_13, 0);
 FUNC_5(VAR_35, VAR_14, 0);
 FUNC_5(VAR_35, VAR_30, 0);
 FUNC_5(VAR_35, VAR_31, 0);
 FUNC_3(VAR_35, VAR_15, 0x0004);
 FUNC_4(VAR_35, VAR_29, 0xff00, 0x0078);
 FUNC_4(VAR_35, 139, 0x83ff, 0x5800);
 FUNC_5(VAR_35, VAR_11, 0x0016);
 FUNC_4(VAR_35, VAR_12, 0xfff8, 0x0004);
 FUNC_4(VAR_35, VAR_34, 0x00ff, 0x5400);
 FUNC_4(VAR_35, VAR_22, 0x00ff, 0x2400);
 FUNC_4(VAR_35, VAR_25, 0x00ff, 0x2100);
 FUNC_4(VAR_35, VAR_34, 0xff00, 0x0006);
 FUNC_1(VAR_35, VAR_32, 0xfffe);
 for (VAR_45 = 0; VAR_45 < FUNC_9(VAR_39); VAR_45++)
  FUNC_4(VAR_35, VAR_39[VAR_45].offset, VAR_39[VAR_45].mask, VAR_39[VAR_45].set);
 FUNC_4(VAR_35, VAR_24,
     0xff00, VAR_36->plp_rxpwroffset);
 if ((VAR_37->sc_board_info.board_flags & VAR_0) &&
     ((FUNC_8(VAR_38->ic_curchan)) ||
    (VAR_37->sc_board_info.board_flags & VAR_2))) {
  VAR_44 = FUNC_12(VAR_37->sc_pmu,
      VAR_6, 0x28);
  if (VAR_44)
   FUNC_16(VAR_37->sc_dev, "failed to set PAREF LDO "
       "voltage: %d\n", VAR_44);

  VAR_44 = FUNC_11(VAR_37->sc_pmu,
      VAR_6);
  if (VAR_44)
   FUNC_16(VAR_37->sc_dev, "failed to enable PAREF LDO "
       "regulator: %d\n", VAR_44);

  if (VAR_35->mac_phy.rev == 0)
   FUNC_4(VAR_35, VAR_27,
       0xffcf, 0x0010);
  FUNC_15(VAR_35, FUNC_6(11, 7), 60);
 } else {
  VAR_44 = FUNC_10(VAR_37->sc_pmu,
      VAR_6);
  if (VAR_44)
   FUNC_16(VAR_37->sc_dev, "failed to disable PAREF LDO "
       "regulator: %d\n", VAR_44);

  FUNC_4(VAR_35, VAR_27, 0xffcf, 0x0020);
  FUNC_15(VAR_35, FUNC_6(11, 7), 100);
 }
 VAR_46 = VAR_36->plp_rssivf | VAR_36->plp_rssivc << 4 | 0xa000;
 FUNC_5(VAR_35, VAR_16, VAR_46);
 if (VAR_37->sc_board_info.board_flags & VAR_3)
  FUNC_4(VAR_35, VAR_17, 0xf000, 0x0aaa);
 else
  FUNC_4(VAR_35, VAR_17, 0xf000, 0x02aa);
 FUNC_15(VAR_35, FUNC_6(11, 1), 24);
 FUNC_4(VAR_35, VAR_32,
     0xfff9, (VAR_36->plp_bxarch << 1));
 if (VAR_35->mac_phy.rev == 1 &&
     (VAR_37->sc_board_info.board_flags & VAR_1)) {
  for (VAR_45 = 0; VAR_45 < FUNC_9(VAR_40); VAR_45++)
   FUNC_4(VAR_35, VAR_40[VAR_45].offset, VAR_40[VAR_45].mask,
       VAR_40[VAR_45].set);
 } else if (FUNC_8(VAR_38->ic_curchan) ||
     (VAR_37->sc_board_info.board_type == 0x048a) ||
     ((VAR_35->mac_phy.rev == 0) &&
      (VAR_37->sc_board_info.board_flags & VAR_0))) {
  for (VAR_45 = 0; VAR_45 < FUNC_9(VAR_41); VAR_45++)
   FUNC_4(VAR_35, VAR_41[VAR_45].offset, VAR_41[VAR_45].mask,
       VAR_41[VAR_45].set);
 } else if (VAR_35->mac_phy.rev == 1 ||
    (VAR_37->sc_board_info.board_flags & VAR_0)) {
  for (VAR_45 = 0; VAR_45 < FUNC_9(VAR_42); VAR_45++)
   FUNC_4(VAR_35, VAR_42[VAR_45].offset, VAR_42[VAR_45].mask,
       VAR_42[VAR_45].set);
 } else {
  for (VAR_45 = 0; VAR_45 < FUNC_9(VAR_43); VAR_45++)
   FUNC_4(VAR_35, VAR_43[VAR_45].offset, VAR_43[VAR_45].mask,
       VAR_43[VAR_45].set);
 }
 if (VAR_35->mac_phy.rev == 1 &&
     (VAR_37->sc_board_info.board_flags & VAR_2)) {
  FUNC_0(VAR_35, 131, 135);
  FUNC_0(VAR_35, 130, 134);
  FUNC_0(VAR_35, 129, 133);
  FUNC_0(VAR_35, 128, 132);
 }
 if ((VAR_37->sc_board_info.board_flags & VAR_1) &&
     (VAR_37->sc_cid.chip_id == VAR_4) &&
     (VAR_37->sc_cid.chip_pkg == VAR_5)) {
  FUNC_3(VAR_35, VAR_18, 0x0006);
  FUNC_5(VAR_35, VAR_21, 0x0005);
  FUNC_5(VAR_35, VAR_20, 0xffff);
  FUNC_14(VAR_35, FUNC_13(VAR_35) | VAR_7);
 }
 if (FUNC_7(VAR_38->ic_curchan)) {
  FUNC_3(VAR_35, VAR_26, 0x8000);
  FUNC_3(VAR_35, VAR_18, 0x0040);
  FUNC_4(VAR_35, VAR_28, 0x00ff, 0xa400);
  FUNC_4(VAR_35, VAR_18, 0xf0ff, 0x0b00);
  FUNC_4(VAR_35, VAR_33, 0xfff8, 0x0007);
  FUNC_4(VAR_35, VAR_19, 0xfff8, 0x0003);
  FUNC_4(VAR_35, VAR_19, 0xffc7, 0x0020);
  FUNC_1(VAR_35, VAR_23, 0x00ff);
 } else {
  FUNC_1(VAR_35, VAR_26, 0x7fff);
  FUNC_1(VAR_35, VAR_18, 0xffbf);
 }
 if (VAR_35->mac_phy.rev == 1) {
  VAR_46 = FUNC_2(VAR_35, 139);
  VAR_47 = (VAR_46 & 0x03e0) >> 5;
  VAR_47 |= VAR_47 << 5;
  FUNC_5(VAR_35, VAR_8, VAR_47);
  VAR_46 = FUNC_2(VAR_35, 137);
  VAR_47 = (VAR_46 & 0x1f00) >> 8;
  VAR_47 |= VAR_47 << 5;
  FUNC_5(VAR_35, VAR_9, VAR_47);
  VAR_46 = FUNC_2(VAR_35, VAR_34);
  VAR_47 = VAR_46 & 0x00ff;
  VAR_47 |= VAR_46 << 8;
  FUNC_5(VAR_35, VAR_10, VAR_47);
 }
}
