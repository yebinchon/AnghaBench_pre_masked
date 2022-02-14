
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {int dummy; } ;
struct uart_softc {int sc_txdatasz; int* sc_txbuf; int sc_txbusy; int sc_hwmtx; struct uart_bas sc_bas; } ;
struct oct16550_softc {int ier; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct uart_bas*) ;
 int FUNC_1 (struct uart_bas*,int) ;
 int FUNC_2 (struct uart_bas*,int,int ) ;
 int FUNC_3 (struct uart_bas*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct uart_bas*,int ,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7 (struct uart_softc *VAR_3)
{
 struct oct16550_softc *VAR_4 = (struct oct16550_softc*)VAR_3;
 struct uart_bas *VAR_5;
 int VAR_6;

 VAR_5 = &VAR_3->sc_bas;
 FUNC_4(VAR_3->sc_hwmtx);






        FUNC_2(VAR_5, 100, FUNC_0(VAR_5));
 FUNC_5(VAR_5, VAR_2, VAR_4->ier | VAR_0);
 FUNC_3(VAR_5);

 for (VAR_6 = 0; VAR_6 < VAR_3->sc_txdatasz; VAR_6++) {
  FUNC_5(VAR_5, VAR_1, VAR_3->sc_txbuf[VAR_6]);
  FUNC_3(VAR_5);
 }
 VAR_3->sc_txbusy = 1;

 FUNC_6(VAR_3->sc_hwmtx);
 return (0);
}
