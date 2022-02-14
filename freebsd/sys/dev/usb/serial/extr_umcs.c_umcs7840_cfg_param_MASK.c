
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
struct umcs7840_softc {TYPE_1__* sc_ports; } ;
struct ucom_softc {size_t sc_portno; struct umcs7840_softc* sc_parent; } ;
struct termios {int c_cflag; int c_ospeed; } ;
struct TYPE_2__ {size_t sc_lcr; size_t sc_mcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_1 (struct umcs7840_softc*,size_t,int ,size_t) ;
 int FUNC_2 (struct umcs7840_softc*,size_t,int ) ;

__attribute__((used)) static void
FUNC_3(struct ucom_softc *VAR_22, struct termios *VAR_23)
{
 struct umcs7840_softc *VAR_24 = VAR_22->sc_parent;
 uint8_t VAR_25 = VAR_22->sc_portno;
 uint8_t VAR_26 = VAR_24->sc_ports[VAR_25].sc_lcr;
 uint8_t VAR_27 = VAR_24->sc_ports[VAR_25].sc_mcr;

 FUNC_0("Port %d config:\n", VAR_25);
 if (VAR_23->c_cflag & VAR_4) {
  FUNC_0("  2 stop bits\n");
  VAR_26 |= VAR_15;
 } else {
  VAR_26 |= VAR_14;
  FUNC_0("  1 stop bit\n");
 }

 VAR_26 &= ~VAR_11;
 if (VAR_23->c_cflag & VAR_20) {
  VAR_26 |= VAR_13;
  if (VAR_23->c_cflag & VAR_21) {
   VAR_26 = VAR_12;
   FUNC_0("  parity on - odd\n");
  } else {
   VAR_26 = VAR_10;
   FUNC_0("  parity on - even\n");
  }
 } else {
  VAR_26 &= ~VAR_13;
  FUNC_0("  parity off\n");
 }

 VAR_26 &= ~VAR_9;
 switch (VAR_23->c_cflag & VAR_3) {
 case 131:
  VAR_26 |= VAR_5;
  FUNC_0("  5 bit\n");
  break;
 case 130:
  VAR_26 |= VAR_6;
  FUNC_0("  6 bit\n");
  break;
 case 129:
  VAR_26 |= VAR_7;
  FUNC_0("  7 bit\n");
  break;
 case 128:
  VAR_26 |= VAR_8;
  FUNC_0("  8 bit\n");
  break;
 }

 if (VAR_23->c_cflag & VAR_2) {
  VAR_27 |= VAR_16;
  FUNC_0("  CTS/RTS\n");
 } else
  VAR_27 &= ~VAR_16;

 if (VAR_23->c_cflag & (VAR_1 | VAR_0)) {
  VAR_27 |= VAR_17;
  FUNC_0("  DTR/DSR\n");
 } else
  VAR_27 &= ~VAR_17;

 VAR_24->sc_ports[VAR_25].sc_lcr = VAR_26;
 FUNC_1(VAR_24, VAR_25, VAR_18, VAR_24->sc_ports[VAR_25].sc_lcr);
 FUNC_0("Port %d LCR=%02x\n", VAR_25, VAR_24->sc_ports[VAR_25].sc_lcr);

 VAR_24->sc_ports[VAR_25].sc_mcr = VAR_27;
 FUNC_1(VAR_24, VAR_25, VAR_19, VAR_24->sc_ports[VAR_25].sc_mcr);
 FUNC_0("Port %d MCR=%02x\n", VAR_25, VAR_24->sc_ports[VAR_25].sc_mcr);

 FUNC_2(VAR_24, VAR_25, VAR_23->c_ospeed);
}
