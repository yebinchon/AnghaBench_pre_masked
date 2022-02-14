
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct bwn_txgain {int dummy; } ;
struct bwn_softc {int sc_dev; } ;
struct bwn_phy_lp_iq_est {int ie_ipwr; int ie_qpwr; } ;
struct bwn_phy_lp {int plp_txpctlmode; int plp_rccap; } ;
struct TYPE_2__ {struct bwn_phy_lp phy_lp; } ;
struct bwn_mac {struct bwn_softc* mac_sc; TYPE_1__ mac_phy; } ;
typedef int ie ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bwn_mac*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct bwn_mac*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct bwn_mac*,int ,int) ;
 int FUNC_3 (struct bwn_mac*,int ,int,int) ;
 int VAR_13 ;
 int FUNC_4 (struct bwn_mac*,int ,int) ;
 int FUNC_5 (struct bwn_mac*,int ,int) ;
 int FUNC_6 (struct bwn_mac*,int) ;
 int FUNC_7 (struct bwn_mac*) ;
 int FUNC_8 (struct bwn_mac*,int,int,int,int,int ) ;
 int FUNC_9 (struct bwn_mac*) ;
 struct bwn_txgain FUNC_10 (struct bwn_mac*) ;
 int FUNC_11 (struct bwn_mac*) ;
 int FUNC_12 (struct bwn_mac*) ;
 int FUNC_13 (int,int,int) ;
 int FUNC_14 (struct bwn_mac*,int,int,struct bwn_phy_lp_iq_est*) ;
 int FUNC_15 (struct bwn_mac*,int) ;
 int FUNC_16 (struct bwn_mac*,int) ;
 int FUNC_17 (struct bwn_mac*) ;
 int FUNC_18 (struct bwn_mac*,int) ;
 int FUNC_19 (struct bwn_mac*,int ,int) ;
 int FUNC_20 (struct bwn_mac*,struct bwn_txgain*) ;
 int FUNC_21 (struct bwn_mac*,int) ;
 int FUNC_22 (struct bwn_mac*,int) ;
 int FUNC_23 (int ,char*,int) ;
 int FUNC_24 (struct bwn_phy_lp_iq_est*,int ,int) ;

__attribute__((used)) static int
FUNC_25(struct bwn_mac *VAR_14)
{
 struct bwn_phy_lp *VAR_15 = &VAR_14->mac_phy.phy_lp;
 struct bwn_softc *VAR_16 = VAR_14->mac_sc;
 struct bwn_phy_lp_iq_est VAR_17;
 struct bwn_txgain VAR_18;
 static const uint32_t VAR_19[21] = {
  0x10000, 0x10557, 0x10e2d, 0x113e0, 0x10f22, 0x0ff64,
  0x0eda2, 0x0e5d4, 0x0efd1, 0x0fbe8, 0x0b7b8, 0x04b35,
  0x01a5e, 0x00a0b, 0x00444, 0x001fd, 0x000ff, 0x00088,
  0x0004c, 0x0002c, 0x0001a,
 };
 uint32_t VAR_20, VAR_21, VAR_22, VAR_23;
 int VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;
 uint16_t VAR_29[7];
 uint8_t VAR_30, VAR_31, VAR_32;

 VAR_28 = FUNC_22(VAR_14, 7);
 if (VAR_28)
  FUNC_23(VAR_16->sc_dev,
      "failed to change channel to 7 (%d)\n", VAR_28);
 VAR_30 = (FUNC_1(VAR_14, VAR_2) & 0x40) ? 1 : 0;
 VAR_31 = FUNC_9(VAR_14);
 if (VAR_30)
  VAR_18 = FUNC_10(VAR_14);

 VAR_29[0] = FUNC_1(VAR_14, VAR_8);
 VAR_29[1] = FUNC_1(VAR_14, VAR_11);
 VAR_29[2] = FUNC_1(VAR_14, VAR_2);
 VAR_29[3] = FUNC_1(VAR_14, VAR_3);
 VAR_29[4] = FUNC_1(VAR_14, VAR_9);
 VAR_29[5] = FUNC_1(VAR_14, VAR_10);
 VAR_29[6] = FUNC_1(VAR_14, VAR_4);

 FUNC_11(VAR_14);
 VAR_32 = VAR_15->plp_txpctlmode;
 FUNC_21(VAR_14, VAR_1);


 FUNC_16(VAR_14, 1);
 FUNC_19(VAR_14, 0, 1);
 FUNC_0(VAR_14, VAR_11, 0xfffb);
 FUNC_2(VAR_14, VAR_8, 0x4);
 FUNC_0(VAR_14, VAR_11, 0xfff7);
 FUNC_2(VAR_14, VAR_8, 0x8);
 FUNC_2(VAR_14, VAR_11, 0x10);
 FUNC_2(VAR_14, VAR_8, 0x10);
 FUNC_0(VAR_14, VAR_11, 0xffdf);
 FUNC_2(VAR_14, VAR_8, 0x20);
 FUNC_0(VAR_14, VAR_11, 0xffbf);
 FUNC_2(VAR_14, VAR_8, 0x40);
 FUNC_2(VAR_14, VAR_10, 0x7);
 FUNC_2(VAR_14, VAR_10, 0x38);
 FUNC_0(VAR_14, VAR_10, 0xff3f);
 FUNC_2(VAR_14, VAR_10, 0x100);
 FUNC_0(VAR_14, VAR_10, 0xfdff);
 FUNC_4(VAR_14, VAR_5, 0);
 FUNC_4(VAR_14, VAR_6, 1);
 FUNC_4(VAR_14, VAR_7, 0x20);
 FUNC_0(VAR_14, VAR_10, 0xfbff);
 FUNC_0(VAR_14, VAR_10, 0xf7ff);
 FUNC_4(VAR_14, VAR_13, 0);
 FUNC_4(VAR_14, VAR_12, 0x45af);
 FUNC_4(VAR_14, VAR_9, 0x3ff);

 VAR_24 = FUNC_12(VAR_14);
 if (VAR_24 == -1)
  goto done;
 FUNC_18(VAR_14, VAR_24);
 FUNC_3(VAR_14, VAR_4, 0xffbf, 0x40);
 FUNC_3(VAR_14, VAR_10, 0xfff8, 0x1);
 FUNC_3(VAR_14, VAR_10, 0xffc7, 0x8);
 FUNC_3(VAR_14, VAR_10, 0xff3f, 0xc0);

 VAR_23 = 0;
 FUNC_24(&VAR_17, 0, sizeof(VAR_17));
 for (VAR_25 = 128; VAR_25 <= 159; VAR_25++) {
  FUNC_5(VAR_14, VAR_0, VAR_25);
  VAR_27 = 0;
  for (VAR_26 = 5; VAR_26 <= 25; VAR_26++) {
   FUNC_8(VAR_14, 1, 1, VAR_26, VAR_26, 0);
   if (!(FUNC_14(VAR_14, 1000, 32, &VAR_17)))
    goto done;
   VAR_22 = VAR_17.ie_ipwr + VAR_17.ie_qpwr;
   VAR_21 = ((VAR_19[VAR_26 - 5] >> 3) + 1) >> 1;
   VAR_20 = FUNC_13(VAR_22, (VAR_26 == 5) ? VAR_22 : 0,
       12);
   VAR_27 += ((VAR_21 - VAR_20) * (VAR_21 - VAR_20));
   if ((VAR_25 == 128) || (VAR_27 < VAR_23)) {
    VAR_15->plp_rccap = VAR_25;
    VAR_23 = VAR_27;
   }
  }
 }
 FUNC_7(VAR_14);
done:

 FUNC_6(VAR_14, 1);
 FUNC_0(VAR_14, VAR_8, 0xff80);
 FUNC_0(VAR_14, VAR_9, 0xfc00);

 FUNC_4(VAR_14, VAR_11, VAR_29[1]);
 FUNC_4(VAR_14, VAR_8, VAR_29[0]);
 FUNC_4(VAR_14, VAR_3, VAR_29[3]);
 FUNC_4(VAR_14, VAR_2, VAR_29[2]);
 FUNC_4(VAR_14, VAR_10, VAR_29[5]);
 FUNC_4(VAR_14, VAR_9, VAR_29[4]);
 FUNC_4(VAR_14, VAR_4, VAR_29[6]);

 FUNC_15(VAR_14, VAR_31);
 if (VAR_30)
  FUNC_20(VAR_14, &VAR_18);
 FUNC_21(VAR_14, VAR_32);
 if (VAR_15->plp_rccap)
  FUNC_17(VAR_14);

 return (0);
}
