
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {int dummy; } ;
struct uart_softc {int sc_rxfifosz; int sc_hwmtx; struct uart_bas sc_bas; } ;
struct ns8250_softc {int fcr; } ;


 int VAR_0 ;
 int FUNC_0 (struct uart_bas*,int) ;
 int FUNC_1 (struct uart_bas*,int) ;
 int FUNC_2 (struct uart_bas*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct uart_bas*,int ,int ) ;
 int FUNC_5 (int ) ;

int
FUNC_6(struct uart_softc *VAR_1, int VAR_2)
{
 struct ns8250_softc *VAR_3 = (struct ns8250_softc*)VAR_1;
 struct uart_bas *VAR_4;
 int VAR_5;

 VAR_4 = &VAR_1->sc_bas;
 FUNC_3(VAR_1->sc_hwmtx);
 if (VAR_1->sc_rxfifosz > 1) {
  FUNC_1(VAR_4, VAR_2);
  FUNC_4(VAR_4, VAR_0, VAR_3->fcr);
  FUNC_2(VAR_4);
  VAR_5 = 0;
 } else
  VAR_5 = FUNC_0(VAR_4, VAR_2);
 FUNC_5(VAR_1->sc_hwmtx);
 return (VAR_5);
}
