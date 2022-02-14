
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uftdi_softc {scalar_t__ sc_devtype; } ;
struct uftdi_param_config {int v_flow; int v_stop; int v_start; int lcr; } ;
struct ucom_softc {struct uftdi_softc* sc_parent; } ;
struct termios {int c_cflag; int c_iflag; int * c_cc; int c_ospeed; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
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
 size_t VAR_16 ;
 size_t VAR_17 ;
 int FUNC_1 (struct uftdi_param_config*,int ,int) ;
 int FUNC_2 (struct uftdi_softc*,int ,struct uftdi_param_config*) ;
 int FUNC_3 (struct uftdi_softc*,int ,struct uftdi_param_config*) ;

__attribute__((used)) static int
FUNC_4(struct ucom_softc *VAR_18, struct termios *VAR_19,
    struct uftdi_param_config *VAR_20)
{
 struct uftdi_softc *VAR_21 = VAR_18->sc_parent;
 int VAR_22;

 FUNC_1(VAR_20, 0, sizeof(*VAR_20));

 if (VAR_21->sc_devtype == VAR_3)
  VAR_22 = FUNC_3(VAR_21, VAR_19->c_ospeed, VAR_20);
 else
  VAR_22 = FUNC_2(VAR_21, VAR_19->c_ospeed, VAR_20);
 if (VAR_22 != 0)
  return (VAR_22);

 if (VAR_19->c_cflag & VAR_2)
  VAR_20->lcr = VAR_10;
 else
  VAR_20->lcr = VAR_9;

 if (VAR_19->c_cflag & VAR_14) {
  if (VAR_19->c_cflag & VAR_15) {
   VAR_20->lcr |= VAR_8;
  } else {
   VAR_20->lcr |= VAR_6;
  }
 } else {
  VAR_20->lcr |= VAR_7;
 }

 switch (VAR_19->c_cflag & VAR_1) {
 case 131:
  VAR_20->lcr |= FUNC_0(5);
  break;

 case 130:
  VAR_20->lcr |= FUNC_0(6);
  break;

 case 129:
  VAR_20->lcr |= FUNC_0(7);
  break;

 case 128:
  VAR_20->lcr |= FUNC_0(8);
  break;
 }

 if (VAR_19->c_cflag & VAR_0) {
  VAR_20->v_flow = VAR_5;
 } else if (VAR_19->c_iflag & (VAR_13 | VAR_12)) {
  VAR_20->v_flow = VAR_11;
  VAR_20->v_start = VAR_19->c_cc[VAR_16];
  VAR_20->v_stop = VAR_19->c_cc[VAR_17];
 } else {
  VAR_20->v_flow = VAR_4;
 }

 return (0);
}
