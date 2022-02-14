
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_softc {scalar_t__ sc_opened; int * sc_sysdev; scalar_t__ sc_hwoflow; scalar_t__ sc_hwiflow; scalar_t__ sc_leaving; } ;
struct tty {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct uart_softc*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct uart_softc*,int) ;
 struct uart_softc* FUNC_2 (struct tty*) ;
 int FUNC_3 (struct uart_softc*) ;

__attribute__((used)) static void
FUNC_4(struct tty *VAR_4)
{
 struct uart_softc *VAR_5;

 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5 == ((void*)0) || VAR_5->sc_leaving || !VAR_5->sc_opened)
  return;

 if (VAR_5->sc_hwiflow)
  FUNC_0(VAR_5, VAR_2, 0);
 if (VAR_5->sc_hwoflow)
  FUNC_0(VAR_5, VAR_3, 0);
 if (VAR_5->sc_sysdev == ((void*)0))
  FUNC_1(VAR_5, VAR_0 | VAR_1);

 FUNC_3(VAR_5);
 VAR_5->sc_opened = 0;
}
