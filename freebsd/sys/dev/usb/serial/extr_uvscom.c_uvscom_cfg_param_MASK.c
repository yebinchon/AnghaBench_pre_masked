
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct uvscom_softc {int dummy; } ;
struct ucom_softc {struct uvscom_softc* sc_parent; } ;
struct termios {int c_ospeed; int c_cflag; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
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
 int FUNC_1 (struct uvscom_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct ucom_softc *VAR_25, struct termios *VAR_26)
{
 struct uvscom_softc *VAR_27 = VAR_25->sc_parent;
 uint16_t VAR_28;

 FUNC_0("\n");

 switch (VAR_26->c_ospeed) {
 case 140:
  VAR_28 = VAR_15;
  break;
 case 137:
  VAR_28 = VAR_18;
  break;
 case 133:
  VAR_28 = VAR_22;
  break;
 case 141:
  VAR_28 = VAR_14;
  break;
 case 138:
  VAR_28 = VAR_17;
  break;
 case 135:
  VAR_28 = VAR_20;
  break;
 case 132:
  VAR_28 = VAR_23;
  break;
 case 139:
  VAR_28 = VAR_16;
  break;
 case 136:
  VAR_28 = VAR_19;
  break;
 case 134:
  VAR_28 = VAR_21;
  break;
 case 142:
  VAR_28 = VAR_13;
  break;
 default:
  return;
 }

 FUNC_1(VAR_27, VAR_12, VAR_28);

 VAR_28 = 0;

 if (VAR_26->c_cflag & VAR_1) {
  VAR_28 |= VAR_24;
 }
 if (VAR_26->c_cflag & VAR_2) {
  if (VAR_26->c_cflag & VAR_3) {
   VAR_28 |= VAR_10;
  } else {
   VAR_28 |= VAR_8;
  }
 } else {
  VAR_28 |= VAR_9;
 }

 switch (VAR_26->c_cflag & VAR_0) {
 case 131:
  VAR_28 |= VAR_4;
  break;
 case 130:
  VAR_28 |= VAR_5;
  break;
 case 129:
  VAR_28 |= VAR_6;
  break;
 default:
 case 128:
  VAR_28 |= VAR_7;
  break;
 }

 FUNC_1(VAR_27, VAR_11, VAR_28);
}
