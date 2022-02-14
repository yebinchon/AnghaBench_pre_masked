
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_softc {int sc_hwsig; scalar_t__ sc_txdatasz; int sc_txfifosz; int sc_txbuf; int sc_hwoflow; scalar_t__ sc_txbusy; scalar_t__ sc_leaving; } ;
struct TYPE_2__ {int c_cflag; } ;
struct tty {TYPE_1__ t_termios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct uart_softc*) ;
 struct uart_softc* FUNC_1 (struct tty*) ;
 scalar_t__ FUNC_2 (struct tty*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct tty *VAR_2)
{
 struct uart_softc *VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3 == ((void*)0) || VAR_3->sc_leaving)
  return;

 if (VAR_3->sc_txbusy)
  return;





 if ((VAR_2->t_termios.c_cflag & VAR_0) && !VAR_3->sc_hwoflow &&
     !(VAR_3->sc_hwsig & VAR_1))
  return;

 VAR_3->sc_txdatasz = FUNC_2(VAR_2, VAR_3->sc_txbuf, VAR_3->sc_txfifosz);
 if (VAR_3->sc_txdatasz != 0)
  FUNC_0(VAR_3);
}
