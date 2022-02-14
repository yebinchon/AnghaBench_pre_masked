
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rk_typec_phy_softc {int rst_pipe; int dev; int rst_uphy; int rst_tcphy; int tcpdcore; int tcpdphy_ref; } ;
struct phynode {int dummy; } ;
typedef int device_t ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 intptr_t VAR_25 ;
 int FUNC_1 (struct rk_typec_phy_softc*,int ) ;
 int FUNC_2 (struct rk_typec_phy_softc*,int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int) ;
 int FUNC_20 (int) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 struct rk_typec_phy_softc* FUNC_24 (int ) ;
 int FUNC_25 (int ,char*,...) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (struct phynode*) ;
 intptr_t FUNC_28 (struct phynode*) ;
 int FUNC_29 (struct rk_typec_phy_softc*,int) ;

__attribute__((used)) static int
FUNC_30(struct phynode *VAR_26, bool VAR_27)
{
 struct rk_typec_phy_softc *VAR_28;
 device_t VAR_29;
 intptr_t VAR_30;
 uint32_t VAR_31;
 int VAR_32, VAR_33;

 VAR_29 = FUNC_27(VAR_26);
 VAR_30 = FUNC_28(VAR_26);
 VAR_28 = FUNC_24(VAR_29);

 if (VAR_30 != VAR_25)
  return (VAR_20);

 FUNC_29(VAR_28, 0);

 VAR_32 = FUNC_22(VAR_28->tcpdcore);
 if (VAR_32 != 0) {
  FUNC_25(VAR_29, "Could not enable clock %s\n",
      FUNC_23(VAR_28->tcpdcore));
  return (VAR_19);
 }
 VAR_32 = FUNC_22(VAR_28->tcpdphy_ref);
 if (VAR_32 != 0) {
  FUNC_25(VAR_29, "Could not enable clock %s\n",
      FUNC_23(VAR_28->tcpdphy_ref));
  FUNC_21(VAR_28->tcpdcore);
  return (VAR_19);
 }

 FUNC_26(VAR_28->rst_tcphy);


 FUNC_2(VAR_28, VAR_22, 0x830);
 for (int VAR_34 = 0; VAR_34 < 4; VAR_34++) {
  FUNC_2(VAR_28, FUNC_20(VAR_34), 0x90);
  FUNC_2(VAR_28, FUNC_16(VAR_34), 0x960);
  FUNC_2(VAR_28, FUNC_17(VAR_34), 0x30);
 }
 VAR_31 = FUNC_1(VAR_28, VAR_0);
 VAR_31 &= ~VAR_2;
 VAR_31 |= VAR_1;
 FUNC_2(VAR_28, VAR_0, VAR_31);


 FUNC_2(VAR_28, VAR_15, 0xf0);
 FUNC_2(VAR_28, VAR_16, 0x18);
 FUNC_2(VAR_28, VAR_12, 0xd0);
 FUNC_2(VAR_28, VAR_10, 0x4a4a);
 FUNC_2(VAR_28, VAR_11, 0x34);
 FUNC_2(VAR_28, VAR_13, 0x1ee);
 FUNC_2(VAR_28, VAR_14, 0x7f03);
 FUNC_2(VAR_28, VAR_9, 0x20);
 FUNC_2(VAR_28, VAR_7, 0);
 FUNC_2(VAR_28, VAR_4, 0);
 FUNC_2(VAR_28, VAR_5, 0);
 FUNC_2(VAR_28, VAR_8, 0x7);
 FUNC_2(VAR_28, VAR_3, 0x45);
 FUNC_2(VAR_28, VAR_6, 0x8);


 FUNC_2(VAR_28, FUNC_12(0), 0x7799);
 FUNC_2(VAR_28, FUNC_13(0), 0x7798);
 FUNC_2(VAR_28, FUNC_14(0), 0x5098);
 FUNC_2(VAR_28, FUNC_15(0), 0x5098);
 FUNC_2(VAR_28, FUNC_18(0), 0x0);
 FUNC_2(VAR_28, FUNC_19(0), 0xbf);

 FUNC_2(VAR_28, FUNC_4(1), 0xa6fd);
 FUNC_2(VAR_28, FUNC_5(1), 0xa6fd);
 FUNC_2(VAR_28, FUNC_6(1), 0xa410);
 FUNC_2(VAR_28, FUNC_7(1), 0x2410);
 FUNC_2(VAR_28, FUNC_8(1), 0x23ff);
 FUNC_2(VAR_28, FUNC_11(1), 0x13);
 FUNC_2(VAR_28, FUNC_10(1), 0x03e7);
 FUNC_2(VAR_28, FUNC_3(1), 0x1004);
 FUNC_2(VAR_28, FUNC_9(1), 0x2010);
 FUNC_2(VAR_28, FUNC_19(1), 0xfb);

 FUNC_2(VAR_28, VAR_24, VAR_21);

 FUNC_2(VAR_28, VAR_17, VAR_18);

 FUNC_26(VAR_28->rst_uphy);

 for (VAR_33 = 10000; VAR_33 > 0; VAR_33--) {
  VAR_31 = FUNC_1(VAR_28, VAR_22);
  if (VAR_31 & VAR_23)
   break;
  FUNC_0(10);
 }
 if (VAR_33 == 0) {
  FUNC_25(VAR_28->dev, "Timeout waiting for PMA\n");
  return (VAR_19);
 }

 FUNC_26(VAR_28->rst_pipe);

 return (0);
}
