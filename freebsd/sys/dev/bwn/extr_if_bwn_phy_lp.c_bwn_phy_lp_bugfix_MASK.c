
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct bwn_txgain {int tg_pad; int tg_gm; int tg_pga; int tg_dac; } ;
struct bwn_softc {int sc_dev; } ;
struct bwn_phy_lp {scalar_t__ plp_txpctlmode; int plp_txpwridx; int plp_tssinpt; int plp_tssiidx; int plp_antenna; scalar_t__ plp_rccap; int plp_chan; } ;
struct TYPE_2__ {int rev; struct bwn_phy_lp phy_lp; } ;
struct bwn_mac {TYPE_1__ mac_phy; struct bwn_softc* mac_sc; } ;
typedef int int8_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bwn_mac*,int ,int,int) ;
 int VAR_4 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct bwn_mac*,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct bwn_mac*) ;
 int FUNC_5 (struct bwn_mac*) ;
 int FUNC_6 (struct bwn_mac*,int) ;
 int FUNC_7 (struct bwn_mac*,int ) ;
 int FUNC_8 (struct bwn_mac*,int ) ;
 int FUNC_9 (struct bwn_mac*,int) ;
 int FUNC_10 (struct bwn_mac*) ;
 int FUNC_11 (struct bwn_mac*,struct bwn_txgain*) ;
 int FUNC_12 (struct bwn_mac*,int) ;
 int FUNC_13 (struct bwn_mac*) ;
 int FUNC_14 (struct bwn_mac*,int) ;
 int FUNC_15 (struct bwn_mac*,scalar_t__) ;
 int FUNC_16 (struct bwn_mac*) ;
 int FUNC_17 (struct bwn_mac*) ;
 int FUNC_18 (struct bwn_mac*,int ) ;
 int FUNC_19 (struct bwn_mac*,int ,unsigned int const,int*) ;
 int FUNC_20 (struct bwn_mac*,int ,int) ;
 int FUNC_21 (struct bwn_mac*,int ,unsigned int const,int*) ;
 int FUNC_22 (int ,char*) ;
 int FUNC_23 (int*,int ) ;
 scalar_t__ FUNC_24 (int,int ,int) ;

__attribute__((used)) static void
FUNC_25(struct bwn_mac *VAR_8)
{
 struct bwn_phy_lp *VAR_9 = &VAR_8->mac_phy.phy_lp;
 struct bwn_softc *VAR_10 = VAR_8->mac_sc;
 const unsigned int VAR_11 = 256;
 struct bwn_txgain VAR_12;
 uint32_t VAR_13, VAR_14, VAR_15, VAR_16, *VAR_17;
 uint16_t VAR_18, VAR_19, VAR_20[2];
 uint8_t VAR_21;
 int8_t VAR_22;

 VAR_17 = (uint32_t *)FUNC_24(sizeof(uint32_t) * VAR_11, VAR_5,
     VAR_6 | VAR_7);
 if (VAR_17 == ((void*)0)) {
  FUNC_22(VAR_10->sc_dev, "failed to allocate buffer.\n");
  return;
 }

 FUNC_5(VAR_8);
 VAR_21 = VAR_9->plp_txpctlmode;
 VAR_22 = VAR_9->plp_txpwridx;
 VAR_18 = VAR_9->plp_tssinpt;
 VAR_19 = VAR_9->plp_tssiidx;

 FUNC_19(VAR_8,
     (VAR_8->mac_phy.rev < 2) ? FUNC_2(10, 0x140) :
     FUNC_2(7, 0x140), VAR_11, VAR_17);

 FUNC_16(VAR_8);
 FUNC_4(VAR_8);
 FUNC_17(VAR_8);
 FUNC_6(VAR_8, 1);
 FUNC_15(VAR_8, VAR_1);

 FUNC_21(VAR_8,
     (VAR_8->mac_phy.rev < 2) ? FUNC_2(10, 0x140) :
     FUNC_2(7, 0x140), VAR_11, VAR_17);

 FUNC_3(VAR_8, VAR_0, VAR_9->plp_chan);
 VAR_9->plp_tssinpt = VAR_18;
 VAR_9->plp_tssiidx = VAR_19;
 FUNC_7(VAR_8, VAR_9->plp_chan);
 if (VAR_22 != -1) {

  VAR_9->plp_txpwridx = VAR_22;
  FUNC_5(VAR_8);
  if (VAR_9->plp_txpctlmode != VAR_1)
   FUNC_15(VAR_8, VAR_2);
  if (VAR_8->mac_phy.rev >= 2) {
   VAR_13 = FUNC_18(VAR_8,
       FUNC_2(7, VAR_22 + 320));
   VAR_14 = FUNC_18(VAR_8,
       FUNC_2(7, VAR_22 + 192));
   VAR_12.tg_pad = (VAR_14 >> 16) & 0xff;
   VAR_12.tg_gm = VAR_14 & 0xff;
   VAR_12.tg_pga = (VAR_14 >> 8) & 0xff;
   VAR_12.tg_dac = (VAR_13 >> 28) & 0xff;
   FUNC_11(VAR_8, &VAR_12);
  } else {
   VAR_13 = FUNC_18(VAR_8,
       FUNC_2(10, VAR_22 + 320));
   VAR_14 = FUNC_18(VAR_8,
       FUNC_2(10, VAR_22 + 192));
   FUNC_0(VAR_8, VAR_4,
       0xf800, (VAR_14 >> 4) & 0x7fff);
   FUNC_12(VAR_8, VAR_14 & 0x7);
   FUNC_14(VAR_8, (VAR_14 >> 24) & 0x7f);
  }
  FUNC_9(VAR_8, (VAR_13 >> 20) & 0xff);


  VAR_20[0] = (VAR_13 >> 10) & 0x3ff;
  VAR_20[1] = VAR_13 & 0x3ff;
  FUNC_21(VAR_8, FUNC_1(0, 80), 2, VAR_20);

  VAR_15 = FUNC_18(VAR_8,
      (VAR_8->mac_phy.rev >= 2) ? FUNC_2(7, VAR_22 + 448) :
      FUNC_2(10, VAR_22 + 448));
  FUNC_20(VAR_8, FUNC_1(0, 85), VAR_15 & 0xffff);
  if (VAR_8->mac_phy.rev >= 2) {
   VAR_16 = FUNC_18(VAR_8,
       FUNC_2(7, VAR_22 + 576));
   FUNC_0(VAR_8, VAR_3, 0xff00,
       VAR_16 & 0xffff);
  }
  FUNC_13(VAR_8);
 }
 if (VAR_9->plp_rccap)
  FUNC_10(VAR_8);
 FUNC_8(VAR_8, VAR_9->plp_antenna);
 FUNC_15(VAR_8, VAR_21);
 FUNC_23(VAR_17, VAR_5);
}
