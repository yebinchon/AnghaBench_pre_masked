
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct tty* tp; } ;
struct TYPE_5__ {TYPE_1__ u_tty; } ;
struct uart_softc {int sc_isquelch; int sc_hwiflow; TYPE_2__ sc_u; int sc_ttypend; scalar_t__ sc_leaving; } ;
struct TYPE_6__ {int c_cflag; } ;
struct tty {TYPE_3__ t_termios; } ;


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
 int FUNC_0 (struct uart_softc*,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tty*) ;
 int FUNC_3 (struct tty*) ;
 int FUNC_4 (struct tty*,int) ;
 scalar_t__ FUNC_5 (struct tty*,int,int) ;
 int FUNC_6 (struct tty*) ;
 int FUNC_7 (struct uart_softc*) ;
 int FUNC_8 (struct uart_softc*) ;
 int FUNC_9 (struct uart_softc*) ;
 int FUNC_10 (struct tty*) ;

void
FUNC_11(void *VAR_18)
{
 struct uart_softc *VAR_19 = VAR_18;
 struct tty *VAR_20;
 int VAR_21, VAR_22 = 0, VAR_23, VAR_24, VAR_25;

 if (VAR_19->sc_leaving)
  return;

 VAR_23 = FUNC_1(&VAR_19->sc_ttypend);
 if (!(VAR_23 & VAR_6))
  return;

 VAR_20 = VAR_19->sc_u.u_tty.tp;
 FUNC_2(VAR_20);

 if (VAR_23 & VAR_7) {
  while (!FUNC_7(VAR_19) && !VAR_19->sc_isquelch) {
   VAR_25 = FUNC_9(VAR_19);
   VAR_21 = VAR_25 & 0xff;
   if (VAR_25 & VAR_15)
    VAR_22 |= VAR_12;
   if (VAR_25 & VAR_16)
    VAR_22 |= VAR_13;
   if (VAR_25 & VAR_17)
    VAR_22 |= VAR_14;
   if (FUNC_5(VAR_20, VAR_21, VAR_22) != 0) {
    VAR_19->sc_isquelch = 1;
    if ((VAR_20->t_termios.c_cflag & VAR_0) &&
        !VAR_19->sc_hwiflow)
     FUNC_0(VAR_19, VAR_4);
   } else
    FUNC_8(VAR_19);
  }
 }

 if (VAR_23 & VAR_5)
  FUNC_5(VAR_20, 0, VAR_11);

 if (VAR_23 & VAR_8) {
  VAR_24 = VAR_23 & VAR_9;
  if (VAR_24 & VAR_3)
   FUNC_4(VAR_20, VAR_24 & VAR_1);
  if (VAR_24 & VAR_2)
   FUNC_10(VAR_20);
 }

 if (VAR_23 & VAR_10)
  FUNC_10(VAR_20);
 FUNC_6(VAR_20);
 FUNC_3(VAR_20);
}
