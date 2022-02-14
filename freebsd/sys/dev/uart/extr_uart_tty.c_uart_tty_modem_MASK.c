
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_softc {int sc_hwsig; } ;
struct tty {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct uart_softc*,int) ;
 struct uart_softc* FUNC_2 (struct tty*) ;

__attribute__((used)) static int
FUNC_3(struct tty *VAR_0, int VAR_1, int VAR_2)
{
 struct uart_softc *VAR_3;

 VAR_3 = FUNC_2(VAR_0);
 if (VAR_1 != 0 || VAR_2 != 0)
  FUNC_1(VAR_3, FUNC_0(VAR_2 | VAR_1) | VAR_1);
 return (VAR_3->sc_hwsig);
}
