
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_softc {scalar_t__ sc_isquelch; int sc_hwiflow; scalar_t__ sc_leaving; } ;
struct TYPE_2__ {int c_cflag; } ;
struct tty {TYPE_1__ t_termios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct uart_softc*,int) ;
 struct uart_softc* FUNC_1 (struct tty*) ;
 int FUNC_2 (struct uart_softc*,int ) ;

__attribute__((used)) static void
FUNC_3(struct tty *VAR_4)
{
 struct uart_softc *VAR_5;

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5 == ((void*)0) || VAR_5->sc_leaving)
  return;

 if (VAR_5->sc_isquelch) {
  if ((VAR_4->t_termios.c_cflag & VAR_0) && !VAR_5->sc_hwiflow)
   FUNC_0(VAR_5, VAR_1|VAR_3);
  VAR_5->sc_isquelch = 0;
  FUNC_2(VAR_5, VAR_2);
 }
}
