
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_softc {int sc_rxfifosz; int sc_txfifosz; int sc_dev; } ;


 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int
FUNC_1(struct uart_softc *VAR_0)
{


 VAR_0->sc_rxfifosz = 8;
 VAR_0->sc_txfifosz = 8;
 FUNC_0(VAR_0->sc_dev, "BCM2835 Mini-UART");

 return (0);
}
