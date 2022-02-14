
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int dot_clock; } ;
struct dwc_hdmi_softc {scalar_t__ sc_has_audio; TYPE_1__ sc_mode; } ;


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
 int FUNC_0 (struct dwc_hdmi_softc*,int ) ;
 int FUNC_1 (struct dwc_hdmi_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct dwc_hdmi_softc *VAR_25)
{
 unsigned int VAR_26;
 uint8_t VAR_27;

 if (VAR_25->sc_has_audio == 0)
  return;


 switch (VAR_25->sc_mode.dot_clock) {
 case 25170:
  VAR_26 = 6864;
  break;
 case 27020:
  VAR_26 = 6144;
  break;
 case 74170:
  VAR_26 = 11648;
  break;
 case 148350:
  VAR_26 = 5824;
  break;
 default:
  VAR_26 = 6144;
  break;
 }

 FUNC_1(VAR_25, VAR_15, (VAR_26 >> 0) & 0xff);
 FUNC_1(VAR_25, VAR_16, (VAR_26 >> 8) & 0xff);
 FUNC_1(VAR_25, VAR_17, (VAR_26 >> 16) & 0xff);

 VAR_27 = FUNC_0(VAR_25, VAR_10);
 VAR_27 &= ~(VAR_12 | VAR_11);
 FUNC_1(VAR_25, VAR_10, VAR_27);

 VAR_27 = FUNC_0(VAR_25, VAR_0);
 VAR_27 &= ~VAR_4;
 VAR_27 |= VAR_3;
 VAR_27 &= ~VAR_2;
 VAR_27 |= VAR_1;
 FUNC_1(VAR_25, VAR_0, VAR_27);

 VAR_27 = FUNC_0(VAR_25, VAR_5);
 VAR_27 &= ~VAR_7;
 VAR_27 |= VAR_6;
 VAR_27 &= ~VAR_9;
 VAR_27 |= VAR_8;
 FUNC_1(VAR_25, VAR_5, VAR_27);

 FUNC_1(VAR_25, VAR_13, VAR_14);

 FUNC_1(VAR_25, VAR_18, 1 << 4);
 FUNC_1(VAR_25, VAR_19, 0);
 FUNC_1(VAR_25, VAR_20, 0);
 FUNC_1(VAR_25, VAR_21, 0);
 FUNC_1(VAR_25, VAR_22, 0xee);


 VAR_27 = FUNC_0(VAR_25, VAR_23);
 VAR_27 &= ~VAR_24;
 FUNC_1(VAR_25, VAR_23, VAR_27);
}
