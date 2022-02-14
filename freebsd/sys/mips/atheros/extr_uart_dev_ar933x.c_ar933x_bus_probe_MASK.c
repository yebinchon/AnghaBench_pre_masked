
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {int dummy; } ;
struct uart_softc {int sc_rxfifosz; int sc_txfifosz; struct uart_bas sc_bas; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct uart_bas*,int) ;
 int FUNC_1 (struct uart_bas*) ;

__attribute__((used)) static int
FUNC_2(struct uart_softc *VAR_2)
{
 struct uart_bas *VAR_3;
 int VAR_4;

 VAR_3 = &VAR_2->sc_bas;

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4)
  return (VAR_4);


 FUNC_0(VAR_3, VAR_0|VAR_1);


 VAR_2->sc_rxfifosz = 16;
 VAR_2->sc_txfifosz = 16;

 return (0);
}
