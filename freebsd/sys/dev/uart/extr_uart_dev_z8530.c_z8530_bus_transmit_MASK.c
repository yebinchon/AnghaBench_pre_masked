
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z8530_softc {int txidle; } ;
struct uart_bas {int dummy; } ;
struct uart_softc {int sc_txbusy; int sc_hwmtx; int * sc_txbuf; struct uart_bas sc_bas; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct uart_bas*) ;
 int FUNC_1 (struct uart_bas*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct uart_bas*,int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct uart_softc *VAR_3)
{
 struct z8530_softc *VAR_4 = (struct z8530_softc*)VAR_3;
 struct uart_bas *VAR_5;

 VAR_5 = &VAR_3->sc_bas;
 FUNC_2(VAR_3->sc_hwmtx);
 while (!(FUNC_1(VAR_5, VAR_2) & VAR_0))
  ;
 FUNC_3(VAR_5, VAR_1, VAR_3->sc_txbuf[0]);
 FUNC_0(VAR_5);
 VAR_3->sc_txbusy = 1;
 VAR_4->txidle = 1;
 FUNC_4(VAR_3->sc_hwmtx);
 return (0);
}
