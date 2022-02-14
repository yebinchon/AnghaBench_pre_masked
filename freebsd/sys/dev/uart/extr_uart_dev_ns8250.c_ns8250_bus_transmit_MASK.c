
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {int dummy; } ;
struct uart_softc {int sc_txdatasz; int* sc_txbuf; int sc_txbusy; int sc_hwmtx; struct uart_bas sc_bas; } ;
struct ns8250_softc {int ier; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct uart_bas*,int ) ;
 int FUNC_2 (struct uart_bas*) ;
 int FUNC_3 (struct uart_bas*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct uart_softc*,int ) ;
 int FUNC_6 (struct uart_bas*,int ,int) ;
 int FUNC_7 (int ) ;

int
FUNC_8(struct uart_softc *VAR_8)
{
 struct ns8250_softc *VAR_9 = (struct ns8250_softc*)VAR_8;
 struct uart_bas *VAR_10;
 int VAR_11;

 VAR_10 = &VAR_8->sc_bas;
 FUNC_4(VAR_8->sc_hwmtx);
 while ((FUNC_3(VAR_10, VAR_4) & VAR_1) == 0)
  FUNC_0(4);
 for (VAR_11 = 0; VAR_11 < VAR_8->sc_txdatasz; VAR_11++) {
  FUNC_6(VAR_10, VAR_2, VAR_8->sc_txbuf[VAR_11]);
  FUNC_2(VAR_10);
 }
 FUNC_6(VAR_10, VAR_3, VAR_9->ier | VAR_0);
 FUNC_2(VAR_10);
 if (VAR_7)
  FUNC_1(VAR_10, VAR_6);
 else
  VAR_8->sc_txbusy = 1;
 FUNC_7(VAR_8->sc_hwmtx);
 if (VAR_7)
  FUNC_5(VAR_8, VAR_5);
 return (0);
}
