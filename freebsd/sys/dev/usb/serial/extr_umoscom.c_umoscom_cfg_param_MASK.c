
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct umoscom_softc {int sc_lcr; } ;
struct ucom_softc {struct umoscom_softc* sc_parent; } ;
struct termios {int c_cflag; scalar_t__ c_ospeed; } ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (struct umoscom_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct ucom_softc *VAR_15, struct termios *VAR_16)
{
 struct umoscom_softc *VAR_17 = VAR_15->sc_parent;
 uint16_t VAR_18;

 FUNC_0("speed=%d\n", VAR_16->c_ospeed);

 VAR_18 = ((uint32_t)VAR_6) / ((uint32_t)VAR_16->c_ospeed);

 if (VAR_18 == 0) {
  FUNC_0("invalid baud rate!\n");
  return;
 }
 FUNC_2(VAR_17, VAR_7,
     VAR_8 | VAR_14);

 FUNC_2(VAR_17, VAR_5,
     (VAR_18 & 0xFF) | VAR_14);

 FUNC_2(VAR_17, VAR_4,
     ((VAR_18 >> 8) & 0xFF) | VAR_14);

 if (VAR_16->c_cflag & VAR_1)
  VAR_18 = VAR_13;
 else
  VAR_18 = VAR_12;

 if (VAR_16->c_cflag & VAR_2) {
  if (VAR_16->c_cflag & VAR_3)
   VAR_18 |= VAR_11;
  else
   VAR_18 |= VAR_9;
 } else
  VAR_18 |= VAR_10;

 switch (VAR_16->c_cflag & VAR_0) {
 case 131:
  VAR_18 |= FUNC_1(5);
  break;
 case 130:
  VAR_18 |= FUNC_1(6);
  break;
 case 129:
  VAR_18 |= FUNC_1(7);
  break;
 case 128:
  VAR_18 |= FUNC_1(8);
  break;
 }

 VAR_17->sc_lcr = VAR_18;
 FUNC_2(VAR_17, VAR_7, VAR_18 | VAR_14);
}
