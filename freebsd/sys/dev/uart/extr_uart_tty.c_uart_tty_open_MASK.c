
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_softc {int sc_opened; scalar_t__ sc_leaving; } ;
struct tty {int dummy; } ;


 int VAR_0 ;
 struct uart_softc* FUNC_0 (struct tty*) ;

__attribute__((used)) static int
FUNC_1(struct tty *VAR_1)
{
 struct uart_softc *VAR_2;

 VAR_2 = FUNC_0(VAR_1);

 if (VAR_2 == ((void*)0) || VAR_2->sc_leaving)
  return (VAR_0);

 VAR_2->sc_opened = 1;
 return (0);
}
