
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int ue_udev; int ue_dev; int ue_eaddr; } ;
struct muge_softc {int chipid; int chiprev; int sc_flags; TYPE_1__ sc_ue; } ;


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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int FUNC_0 (struct muge_softc*,int ) ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;


 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (struct muge_softc*) ;
 int FUNC_3 (struct muge_softc*) ;
 int FUNC_4 (struct muge_softc*,int ,int*) ;
 int FUNC_5 (struct muge_softc*,int ) ;
 int FUNC_6 (struct muge_softc*,int ) ;
 int FUNC_7 (struct muge_softc*,int ,int) ;
 int FUNC_8 (struct muge_softc*,int ,int) ;
 int FUNC_9 (struct muge_softc*,char*,int) ;
 int FUNC_10 (struct muge_softc*,char*,...) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int
FUNC_12(struct muge_softc *VAR_44)
{
 int VAR_45;
 uint32_t VAR_46;
 uint32_t VAR_47;

 FUNC_0(VAR_44, VAR_35);


 FUNC_8(VAR_44, VAR_10, VAR_11);

 if ((VAR_45 = FUNC_7(VAR_44, VAR_10, VAR_11)) !=
     0) {
  FUNC_10(VAR_44,
      "timed-out waiting for lite reset to complete\n");
  goto init_failed;
 }


 if ((VAR_45 = FUNC_6(VAR_44, VAR_44->sc_ue.ue_eaddr)) != 0) {
  FUNC_10(VAR_44, "failed to set the MAC address\n");
  goto init_failed;
 }


 if ((VAR_45 = FUNC_4(VAR_44, VAR_13, &VAR_46)) < 0) {
  FUNC_10(VAR_44, "failed to read ETH_ID_REV (err = %d)\n",
      VAR_45);
  goto init_failed;
 }
 VAR_44->chipid = (VAR_46 & VAR_14) >> 16;
 VAR_44->chiprev = VAR_46 & VAR_15;
 switch (VAR_44->chipid) {
 case 131:
 case 130:
  break;
 default:
  FUNC_10(VAR_44, "Chip ID 0x%04x not yet supported\n",
      VAR_44->chipid);
  goto init_failed;
 }
 FUNC_1(VAR_44->sc_ue.ue_dev, "Chip ID 0x%04x rev %04x\n", VAR_44->chipid,
     VAR_44->chiprev);


 if ((VAR_45 = FUNC_4(VAR_44, VAR_32, &VAR_46)) != 0) {
  FUNC_10(VAR_44, "failed to read ETH_USB_CFG0 (err=%d)\n", VAR_45);
  goto init_failed;
 }
 VAR_46 |= VAR_34;
 FUNC_8(VAR_44, VAR_32, VAR_46);






 switch (FUNC_11(VAR_44->sc_ue.ue_udev)) {
 case 128:
  VAR_47 = VAR_37/VAR_43;
  break;
 case 129:
  VAR_47 = VAR_37/VAR_40;
  break;
 default:
  VAR_47 = VAR_37/VAR_39;
 }

 FUNC_8(VAR_44, VAR_2, VAR_47);


 FUNC_8(VAR_44, VAR_1, VAR_36);


 VAR_45 = FUNC_4(VAR_44, VAR_10, &VAR_46);
 VAR_46 |= VAR_12;
 VAR_45 = FUNC_8(VAR_44, VAR_10, VAR_46);


 if ((VAR_45 = FUNC_4(VAR_44, VAR_32, &VAR_46)) < 0) {
  FUNC_10(VAR_44, "failed to read ETH_USB_CFG0 (err=%d)\n",
      VAR_45);
  goto init_failed;
 }
 VAR_46 |= VAR_33;
 VAR_45 = FUNC_8(VAR_44, VAR_32, VAR_46);







 VAR_46 = (VAR_41 - 512) / 512;
 VAR_45 = FUNC_8(VAR_44, VAR_5, VAR_46);

 VAR_46 = (VAR_42 - 512) / 512;
 VAR_45 = FUNC_8(VAR_44, VAR_8, VAR_46);


 VAR_45 = FUNC_8(VAR_44, VAR_18, VAR_19);





 VAR_45 = FUNC_8(VAR_44, VAR_9, 0);
 VAR_45 = FUNC_8(VAR_44, VAR_3, 0);





 VAR_45 = FUNC_4(VAR_44, VAR_29, &VAR_46);
 VAR_46 |= VAR_30 | VAR_31;
 VAR_45 = FUNC_8(VAR_44, VAR_29, VAR_46);
 FUNC_8(VAR_44, VAR_27, VAR_28);
 if ((VAR_45 = FUNC_7(VAR_44, VAR_27,
     VAR_28)) != 0) {
  FUNC_10(VAR_44,
      "timed-out waiting for phy reset to complete\n");
  goto init_failed;
 }

 VAR_45 = FUNC_4(VAR_44, VAR_20, &VAR_46);
 if (VAR_44->chipid == 131 &&
     !FUNC_2(VAR_44)) {

  VAR_46 |= VAR_21 | VAR_22;
 }
 VAR_45 = FUNC_8(VAR_44, VAR_20, VAR_46);






 VAR_45 = FUNC_4(VAR_44, VAR_17, &VAR_46);
 VAR_46 |= VAR_16;
 VAR_45 = FUNC_8(VAR_44, VAR_17, VAR_46);





 VAR_45 = FUNC_4(VAR_44, VAR_25, &VAR_46);
 VAR_46 |= VAR_26;
 VAR_45 = FUNC_8(VAR_44, VAR_25, VAR_46);


 VAR_45 = FUNC_4(VAR_44, VAR_6, &VAR_46);
 VAR_46 |= VAR_7;
 VAR_45 = FUNC_8(VAR_44, VAR_6, VAR_46);





 VAR_45 = FUNC_5(VAR_44, VAR_0);


 if ((VAR_45 = FUNC_3(VAR_44)) != 0)
  goto init_failed;


 VAR_45 = FUNC_4(VAR_44, VAR_23, &VAR_46);
 VAR_46 |= VAR_24;
 VAR_45 = FUNC_8(VAR_44, VAR_23, VAR_46);


 VAR_45 = FUNC_4(VAR_44, VAR_4, &VAR_46);
 VAR_46 |= VAR_7;
 VAR_45 = FUNC_8(VAR_44, VAR_4, VAR_46);

 VAR_44->sc_flags |= VAR_38;
 return (0);

init_failed:
 FUNC_9(VAR_44, "lan78xx_chip_init failed (err=%d)\n", VAR_45);
 return (VAR_45);
}
