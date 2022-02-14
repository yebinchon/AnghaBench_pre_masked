
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {int regiowidth; } ;
struct uart_softc {int sc_txfifosz; int sc_rxfifosz; int sc_dev; struct uart_bas sc_bas; } ;


 int FUNC_0 (int ,char*) ;

int
FUNC_1(struct uart_softc *VAR_0)
{
 struct uart_bas *VAR_1;

 VAR_1 = &VAR_0->sc_bas;
 VAR_1->regiowidth = 4;

 VAR_0->sc_txfifosz = 64;
 VAR_0->sc_rxfifosz = 64;

 FUNC_0(VAR_0->sc_dev, "Qualcomm HSUART");

 return (0);
}
