
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct dwc_hdmi_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 int VAR_21 ;
 unsigned int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_0 (struct dwc_hdmi_softc*,int ) ;
 int FUNC_1 (struct dwc_hdmi_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct dwc_hdmi_softc *VAR_32)
{
 unsigned int VAR_33 = 0;
 unsigned int VAR_34 = VAR_22;
 unsigned int VAR_35 = VAR_8;
 uint8_t VAR_36;

 VAR_35 = VAR_6;
 VAR_33 = 4;


 VAR_36 = ((VAR_33 << VAR_20) &
  VAR_19);
 FUNC_1(VAR_32, VAR_18, VAR_36);

 VAR_36 = FUNC_0(VAR_32, VAR_23);
 VAR_36 &= ~VAR_28;
 VAR_36 |= VAR_29;
 FUNC_1(VAR_32, VAR_23, VAR_36);

 VAR_36 = FUNC_0(VAR_32, VAR_0);
 VAR_36 &= ~(VAR_14 |
  VAR_4);
 VAR_36 |= VAR_13 |
  VAR_5;
 FUNC_1(VAR_32, VAR_0, VAR_36);

 VAR_36 = FUNC_0(VAR_32, VAR_23);
 VAR_36 &= ~VAR_24;
 VAR_36 |= 1 << VAR_25;
 FUNC_1(VAR_32, VAR_23, VAR_36);

 FUNC_1(VAR_32, VAR_21, VAR_34);

 if (VAR_35 == VAR_8) {
  VAR_36 = FUNC_0(VAR_32, VAR_0);
  VAR_36 &= ~(VAR_3 |
   VAR_12 |
   VAR_17);
  VAR_36 |= VAR_1 |
   VAR_11 |
   VAR_15;
  FUNC_1(VAR_32, VAR_0, VAR_36);
 } else if (VAR_35 == VAR_9) {
  VAR_36 = FUNC_0(VAR_32, VAR_0);
  VAR_36 &= ~(VAR_3 |
   VAR_12 |
   VAR_17);
  VAR_36 |= VAR_1 |
   VAR_10 |
   VAR_16;
  FUNC_1(VAR_32, VAR_0, VAR_36);
 } else if (VAR_35 == VAR_6) {
  VAR_36 = FUNC_0(VAR_32, VAR_0);
  VAR_36 &= ~(VAR_3 |
   VAR_12 |
   VAR_17);
  VAR_36 |= VAR_2 |
   VAR_10 |
   VAR_15;
  FUNC_1(VAR_32, VAR_0, VAR_36);
 } else {
  return;
 }

 VAR_36 = FUNC_0(VAR_32, VAR_23);
 VAR_36 &= ~(VAR_26 |
  VAR_30);
 VAR_36 |= VAR_27 |
  VAR_31;
 FUNC_1(VAR_32, VAR_23, VAR_36);

 VAR_36 = FUNC_0(VAR_32, VAR_0);
 VAR_36 &= ~VAR_7;
 VAR_36 |= VAR_35;
 FUNC_1(VAR_32, VAR_0, VAR_36);
}
