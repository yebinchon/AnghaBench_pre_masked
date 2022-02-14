
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_softc {int sc_txfifosz; int sc_rxfifosz; } ;



int
FUNC_0(struct uart_softc *VAR_0)
{

 VAR_0->sc_txfifosz = 16;
 VAR_0->sc_rxfifosz = 16;

 return (0);
}
