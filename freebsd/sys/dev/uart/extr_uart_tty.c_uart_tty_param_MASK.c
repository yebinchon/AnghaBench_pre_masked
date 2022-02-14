
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_softc {scalar_t__ sc_hwoflow; scalar_t__ sc_isquelch; int sc_hwiflow; scalar_t__ sc_leaving; } ;
struct tty {int dummy; } ;
struct termios {int c_cflag; int c_ospeed; int c_ispeed; } ;


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
 int FUNC_0 (struct uart_softc*,int ,int) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_1 (struct uart_softc*,int ,int,int,int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (struct uart_softc*,int) ;
 struct uart_softc* FUNC_3 (struct tty*) ;

__attribute__((used)) static int
FUNC_4(struct tty *VAR_18, struct termios *VAR_19)
{
 struct uart_softc *VAR_20;
 int VAR_21, VAR_22, VAR_23;

 VAR_20 = FUNC_3(VAR_18);
 if (VAR_20 == ((void*)0) || VAR_20->sc_leaving)
  return (VAR_6);
 if (VAR_19->c_ispeed != VAR_19->c_ospeed && VAR_19->c_ospeed != 0)
  return (VAR_5);
 if (VAR_19->c_ospeed == 0) {
  FUNC_2(VAR_20, VAR_9 | VAR_10);
  return (0);
 }
 switch (VAR_19->c_cflag & VAR_3) {
 case 130: VAR_21 = 5; break;
 case 129: VAR_21 = 6; break;
 case 128: VAR_21 = 7; break;
 default: VAR_21 = 8; break;
 }
 VAR_23 = (VAR_19->c_cflag & VAR_4) ? 2 : 1;
 if (VAR_19->c_cflag & VAR_7)
  VAR_22 = (VAR_19->c_cflag & VAR_8) ? VAR_17 :
      VAR_15;
 else
  VAR_22 = VAR_16;
 if (FUNC_1(VAR_20, VAR_19->c_ospeed, VAR_21, VAR_23, VAR_22) != 0)
  return (VAR_5);
 if ((VAR_19->c_cflag & VAR_1) == 0)
  FUNC_2(VAR_20, VAR_9 | VAR_11);

 if (!VAR_20->sc_hwiflow) {
  if ((VAR_19->c_cflag & VAR_2) && VAR_20->sc_isquelch)
   FUNC_2(VAR_20, VAR_10);
  else {
   if ((VAR_19->c_cflag & VAR_1) == 0)
    FUNC_2(VAR_20, VAR_10 | VAR_12);
  }
 } else
  FUNC_0(VAR_20, VAR_13, (VAR_19->c_cflag & VAR_2));

 if (VAR_20->sc_hwoflow)
  FUNC_0(VAR_20, VAR_14, (VAR_19->c_cflag & VAR_0));

 return (0);
}
