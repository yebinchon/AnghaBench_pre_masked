
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_softc {int sc_rxfifosz; int sc_txfifosz; int sc_dev; int sc_bas; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(struct uart_softc *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(&VAR_0->sc_bas);
 if (VAR_1)
  return (VAR_1);







 VAR_0->sc_rxfifosz = 2048;
 VAR_0->sc_txfifosz = 2048;

 FUNC_0(VAR_0->sc_dev, "lowRISC UART");

 return (0);
}
