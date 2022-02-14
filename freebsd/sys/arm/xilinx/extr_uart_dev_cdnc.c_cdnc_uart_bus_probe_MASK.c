
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_softc {int sc_dev; scalar_t__ sc_hwoflow; scalar_t__ sc_hwiflow; void* sc_rxfifosz; void* sc_txfifosz; } ;


 void* VAR_0 ;
 int FUNC_0 (int ,char*) ;

int
FUNC_1(struct uart_softc *VAR_1)
{

 VAR_1->sc_txfifosz = VAR_0;
 VAR_1->sc_rxfifosz = VAR_0;
 VAR_1->sc_hwiflow = 0;
 VAR_1->sc_hwoflow = 0;

 FUNC_0(VAR_1->sc_dev, "Cadence UART");

 return (0);
}
