
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct zyd_rf {int (* init ) (struct zyd_rf*) ;} ;
struct zyd_softc {int sc_fwbase; int sc_fwrev; scalar_t__ sc_macrev; scalar_t__ sc_fix_cr157; int sc_dev; int sc_rfrev; struct zyd_rf sc_rf; } ;
struct zyd_phy_pair {scalar_t__ reg; int val; } ;


 int FUNC_0 (struct zyd_softc*,int ,char*,int) ;
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
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct zyd_rf*) ;
 struct zyd_phy_pair* VAR_39 ;
 struct zyd_phy_pair* VAR_40 ;
 int FUNC_3 (struct zyd_softc*) ;
 int FUNC_4 (struct zyd_softc*,int,int*) ;
 int FUNC_5 (struct zyd_softc*) ;
 int FUNC_6 (struct zyd_softc*) ;
 int FUNC_7 (struct zyd_softc*,int ) ;
 int FUNC_8 (struct zyd_softc*,int) ;
 int FUNC_9 (struct zyd_softc*) ;
 int FUNC_10 (struct zyd_softc*,scalar_t__,int ) ;
 int FUNC_11 (struct zyd_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_12(struct zyd_softc *VAR_41)
{
 int VAR_42;
 const struct zyd_phy_pair *VAR_43;
 struct zyd_rf *VAR_44 = &VAR_41->sc_rf;
 uint16_t VAR_45;


 FUNC_11(VAR_41, VAR_20, 1);
 FUNC_4(VAR_41, VAR_9, &VAR_41->sc_fwbase);
 FUNC_0(VAR_41, VAR_7, "firmware base address=0x%04x\n",
     VAR_41->sc_fwbase);


 FUNC_4(VAR_41, VAR_41->sc_fwbase + VAR_10, &VAR_41->sc_fwrev);
 FUNC_11(VAR_41, VAR_3, 0);
 FUNC_11(VAR_41, VAR_24, 0x7f043f);

 FUNC_11(VAR_41, VAR_28, 0x150f);


 FUNC_11(VAR_41, VAR_4, 0);

 if ((VAR_42 = FUNC_6(VAR_41)) != 0) {
  FUNC_1(VAR_41->sc_dev, "could not read EEPROM\n");
  goto fail;
 }


 VAR_42 = FUNC_3(VAR_41);
 if (VAR_42 != 0)
  goto fail;
 VAR_43 = (VAR_41->sc_macrev == VAR_38) ? VAR_40 : VAR_39;
 for (; VAR_43->reg != 0; VAR_43++)
  FUNC_10(VAR_41, VAR_43->reg, VAR_43->val);
 if (VAR_41->sc_macrev == VAR_37 && VAR_41->sc_fix_cr157 != 0) {
  FUNC_4(VAR_41, VAR_8, &VAR_45);
  FUNC_11(VAR_41, VAR_0, VAR_45 >> 8);
 }
 VAR_42 = FUNC_9(VAR_41);
 if (VAR_42 != 0)
  goto fail;


 FUNC_11(VAR_41, VAR_19, 0x00000020);
 FUNC_11(VAR_41, VAR_1, 0x30000808);
 FUNC_11(VAR_41, VAR_36, 0x00000000);
 FUNC_11(VAR_41, VAR_33, 0x00000000);
 FUNC_11(VAR_41, VAR_27, 0x00000000);
 FUNC_11(VAR_41, VAR_26, 0x80000000);
 FUNC_11(VAR_41, VAR_29, 0x000000a4);
 FUNC_11(VAR_41, VAR_2, 0x0000007f);
 FUNC_11(VAR_41, VAR_22, 0x00f00401);
 FUNC_11(VAR_41, VAR_30, 0x00000000);
 FUNC_11(VAR_41, VAR_19, 0x00000080);
 FUNC_11(VAR_41, VAR_2, 0x00000000);
 FUNC_11(VAR_41, VAR_35, 0x00000100);
 FUNC_11(VAR_41, VAR_6, 0x00000070);
 FUNC_11(VAR_41, VAR_5, 0x10000000);
 FUNC_11(VAR_41, VAR_32, 0x02030203);
 FUNC_11(VAR_41, VAR_20, 1);
 FUNC_11(VAR_41, VAR_21, 0x00000114);
 FUNC_11(VAR_41, VAR_25, 0x0a47c032);
 FUNC_11(VAR_41, VAR_23, 0x3);

 if (VAR_41->sc_macrev == VAR_37) {
  FUNC_11(VAR_41, VAR_31, 0x00000002);
  FUNC_11(VAR_41, VAR_34, 0x000c0640);
 } else {
  FUNC_11(VAR_41, VAR_13, 0x02020202);
  FUNC_11(VAR_41, VAR_18, 0x007f003f);
  FUNC_11(VAR_41, VAR_17, 0x007f003f);
  FUNC_11(VAR_41, VAR_16, 0x003f001f);
  FUNC_11(VAR_41, VAR_15, 0x001f000f);
  FUNC_11(VAR_41, VAR_11, 0x00280028);
  FUNC_11(VAR_41, VAR_12, 0x008C003C);
  FUNC_11(VAR_41, VAR_14, 0x01800824);
  FUNC_11(VAR_41, VAR_34, 0x000c0eff);
 }


 if ((VAR_42 = FUNC_8(VAR_41, 100)) != 0)
  goto fail;

 if ((VAR_42 = FUNC_7(VAR_41, VAR_41->sc_rfrev)) != 0) {
  FUNC_1(VAR_41->sc_dev, "could not attach RF, rev 0x%x\n",
      VAR_41->sc_rfrev);
  goto fail;
 }


 VAR_42 = FUNC_3(VAR_41);
 if (VAR_42 != 0)
  goto fail;
 VAR_42 = (*VAR_44->init)(VAR_44);
 if (VAR_42 != 0) {
  FUNC_1(VAR_41->sc_dev,
      "radio initialization failed, error %d\n", VAR_42);
  goto fail;
 }
 VAR_42 = FUNC_9(VAR_41);
 if (VAR_42 != 0)
  goto fail;

 if ((VAR_42 = FUNC_5(VAR_41)) != 0) {
  FUNC_1(VAR_41->sc_dev, "could not read EEPROM\n");
  goto fail;
 }

fail: return (VAR_42);
}
