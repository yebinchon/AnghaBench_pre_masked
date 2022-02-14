
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int dot_clock; } ;
struct dwc_hdmi_softc {int sc_dev; TYPE_1__ sc_mode; } ;


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
 int FUNC_0 (int) ;
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
 int FUNC_1 (struct dwc_hdmi_softc*,int ) ;
 int VAR_35 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct dwc_hdmi_softc*,int ,int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct dwc_hdmi_softc*,int) ;
 int FUNC_7 (struct dwc_hdmi_softc*,int) ;
 int FUNC_8 (struct dwc_hdmi_softc*,int) ;
 int FUNC_9 (struct dwc_hdmi_softc*,int) ;
 int FUNC_10 (struct dwc_hdmi_softc*,int,int ) ;
 int FUNC_11 (struct dwc_hdmi_softc*,int) ;
 int FUNC_12 (char*) ;

__attribute__((used)) static int
FUNC_13(struct dwc_hdmi_softc *VAR_36)
{
 uint8_t VAR_37;
 uint8_t VAR_38;

 FUNC_4(VAR_36, VAR_14, VAR_15);


 FUNC_9(VAR_36, 0);


 FUNC_8(VAR_36, 1);


 FUNC_4(VAR_36, VAR_18, VAR_20);
 FUNC_4(VAR_36, VAR_18, VAR_19);

 FUNC_4(VAR_36, VAR_16, VAR_17);

 FUNC_11(VAR_36, 1);
 FUNC_4(VAR_36, VAR_21, VAR_22);
 FUNC_11(VAR_36, 0);
 if (VAR_36->sc_mode.dot_clock*1000 <= 45250000) {
  FUNC_10(VAR_36, VAR_8, VAR_25);
  FUNC_10(VAR_36, VAR_12, VAR_27);
 } else if (VAR_36->sc_mode.dot_clock*1000 <= 92500000) {
  FUNC_10(VAR_36, VAR_9, VAR_25);
  FUNC_10(VAR_36, VAR_13, VAR_27);
 } else if (VAR_36->sc_mode.dot_clock*1000 <= 185000000) {
  FUNC_10(VAR_36, VAR_6, VAR_25);
  FUNC_10(VAR_36, VAR_10, VAR_27);
 } else {
  FUNC_10(VAR_36, VAR_7, VAR_25);
  FUNC_10(VAR_36, VAR_11, VAR_27);
 }





 if (VAR_36->sc_mode.dot_clock*1000 <= 54000000) {
  FUNC_10(VAR_36, 0x091c, VAR_26);
 } else if (VAR_36->sc_mode.dot_clock*1000 <= 58400000) {
  FUNC_10(VAR_36, 0x091c, VAR_26);
 } else if (VAR_36->sc_mode.dot_clock*1000 <= 72000000) {
  FUNC_10(VAR_36, 0x06dc, VAR_26);
 } else if (VAR_36->sc_mode.dot_clock*1000 <= 74250000) {
  FUNC_10(VAR_36, 0x06dc, VAR_26);
 } else if (VAR_36->sc_mode.dot_clock*1000 <= 118800000) {
  FUNC_10(VAR_36, 0x091c, VAR_26);
 } else if (VAR_36->sc_mode.dot_clock*1000 <= 216000000) {
  FUNC_10(VAR_36, 0x06dc, VAR_26);
 } else {
  FUNC_12("Unsupported mode\n");
 }

 FUNC_10(VAR_36, 0x0000, VAR_29);
 FUNC_10(VAR_36, VAR_34, VAR_28);

 FUNC_10(VAR_36, VAR_35, VAR_30);


 FUNC_10(VAR_36, VAR_0, VAR_23);

 if (VAR_36->sc_mode.dot_clock*1000 > 148500000) {
  FUNC_10(VAR_36,VAR_1 | VAR_3 |
      VAR_5 | VAR_2, VAR_24);
  FUNC_10(VAR_36, FUNC_3(9) | FUNC_2(9),
      VAR_31);
 } else {
  FUNC_10(VAR_36,VAR_1 | VAR_3 |
      VAR_4 | VAR_2, VAR_24);
  FUNC_10(VAR_36, FUNC_3(13) | FUNC_2(13),
      VAR_31);
 }

 FUNC_6(VAR_36, 1);


 FUNC_7(VAR_36, 0);
 FUNC_7(VAR_36, 1);


 FUNC_9(VAR_36, 1);
 FUNC_8(VAR_36, 0);


 VAR_38 = 4;
 VAR_37 = FUNC_1(VAR_36, VAR_32) & VAR_33;
 while (VAR_37 == 0) {
  FUNC_0(1000);
  if (VAR_38-- == 0) {
   FUNC_5(VAR_36->sc_dev, "PHY PLL not locked\n");
   return (-1);
  }
  VAR_37 = FUNC_1(VAR_36, VAR_32) & VAR_33;
 }

 return 1;
}
