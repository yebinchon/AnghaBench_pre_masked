
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_softc {int sc_dev; int sc_txfifosz; int sc_rxfifosz; int sc_bas; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct uart_softc*) ;

__attribute__((used)) static int
FUNC_3(struct uart_softc *VAR_6)
{
 int VAR_7;

 VAR_7 = -1;




 if (VAR_7 < 0)
  VAR_7 = FUNC_0(&VAR_6->sc_bas, VAR_5) >> 4;

 if (VAR_7 <= 2) {
  VAR_6->sc_rxfifosz = VAR_0;
  VAR_6->sc_txfifosz = VAR_2;
 } else {
  VAR_6->sc_rxfifosz = VAR_1;
  VAR_6->sc_txfifosz = VAR_3;
 }

 FUNC_1(VAR_6->sc_dev, "PrimeCell UART (PL011)");

 return (0);
}
