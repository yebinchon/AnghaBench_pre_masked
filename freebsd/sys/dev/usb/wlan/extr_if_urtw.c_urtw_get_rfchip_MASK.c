
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
typedef int uint8_t ;
typedef int uint32_t ;
struct urtw_softc {int sc_flags; int sc_dev; void* sc_rf_stop; void* sc_sens; void* sc_max_sens; int sc_rf_set_chan; int sc_rf_init; int sc_rf_set_sens; } ;


 int FUNC_0 (struct urtw_softc*,int ,char*,int) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;


 scalar_t__ VAR_10 ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (struct urtw_softc*,int*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_3 (struct urtw_softc*,int ,int*) ;
 int FUNC_4 (struct urtw_softc*,int ,int*) ;
 int FUNC_5 (struct urtw_softc*,int,int*) ;

__attribute__((used)) static usb_error_t
FUNC_6(struct urtw_softc *VAR_19)
{
 int VAR_20;
 uint8_t VAR_21;
 uint32_t VAR_22;
 usb_error_t VAR_23;

 if (VAR_19->sc_flags & VAR_4) {
  FUNC_5(VAR_19, 0xe1, &VAR_21);
  switch (VAR_21) {
  case 0:
   VAR_19->sc_flags |= VAR_5;
   break;
  case 1:
   VAR_19->sc_flags |= VAR_6;
   break;
  case 2:
   VAR_19->sc_flags |= VAR_7;
   break;
  default:
   FUNC_1(VAR_19->sc_dev, "unknown type: %#x\n", VAR_21);
   VAR_19->sc_flags |= VAR_5;
   break;
  }
 } else {
  FUNC_4(VAR_19, VAR_8, &VAR_22);
  switch (VAR_22 & VAR_9) {
  case 128:
   VAR_19->sc_flags |= VAR_4;
   break;
  case 129:
   break;
  default:
   FUNC_1(VAR_19->sc_dev, "unknown RTL8187L type: %#x\n",
       VAR_22 & VAR_9);
   break;
  }
 }

 VAR_23 = FUNC_3(VAR_19, VAR_3, &VAR_22);
 if (VAR_23 != 0)
  goto fail;
 switch (VAR_22 & 0xff) {
 case 131:
  VAR_23 = FUNC_2(VAR_19, &VAR_20);
  if (VAR_23 != 0)
   goto fail;
  if (VAR_20 == 0) {
   VAR_19->sc_rf_init = VAR_11;
   VAR_19->sc_rf_set_sens = VAR_13;
   VAR_19->sc_rf_set_chan = VAR_12;
   VAR_19->sc_rf_stop = VAR_14;
  } else {
   VAR_19->sc_rf_init = VAR_15;
   VAR_19->sc_rf_set_chan = VAR_16;
   VAR_19->sc_rf_stop = VAR_14;
  }
  VAR_19->sc_max_sens = VAR_1;
  VAR_19->sc_sens = VAR_0;
  break;
 case 130:
  VAR_19->sc_rf_init = VAR_17;
  VAR_19->sc_rf_set_chan = VAR_18;
  VAR_19->sc_max_sens = VAR_1;
  VAR_19->sc_sens = VAR_0;
  VAR_19->sc_rf_stop = VAR_14;
  break;
 default:
  FUNC_0(VAR_19, VAR_2,
      "unsupported RF chip %d\n", VAR_22 & 0xff);
  VAR_23 = VAR_10;
  goto fail;
 }

 FUNC_1(VAR_19->sc_dev, "%s rf %s hwrev %s\n",
     (VAR_19->sc_flags & VAR_4) ? "rtl8187b" : "rtl8187l",
     ((VAR_22 & 0xff) == 131) ? "rtl8225u" :
     "rtl8225z2",
     (VAR_19->sc_flags & VAR_4) ? ((VAR_21 == 0) ? "b" :
  (VAR_21 == 1) ? "d" : "e") : "none");

fail:
 return (VAR_23);
}
