
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {int dummy; } ;
struct uart_softc {int sc_txdatasz; int sc_txbusy; int sc_hwmtx; int * sc_txbuf; struct uart_bas sc_bas; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct uart_softc*) ;
 int FUNC_1 (struct uart_bas*) ;
 int FUNC_2 (struct uart_bas*,int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (struct uart_bas*,int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct uart_softc *VAR_4)
{
 struct uart_bas *VAR_5 = &VAR_4->sc_bas;
 int VAR_6;

 if (!VAR_3) return (0);

 VAR_5 = &VAR_4->sc_bas;
 FUNC_3(VAR_4->sc_hwmtx);
 while ((FUNC_2(VAR_5, VAR_0) & VAR_1) == 0);
 FUNC_0(VAR_4);
 for (VAR_6 = 0; VAR_6 < VAR_4->sc_txdatasz; VAR_6++) {
  FUNC_4(VAR_5, VAR_2, VAR_4->sc_txbuf[VAR_6]);
  FUNC_1(VAR_5);
 }
 VAR_4->sc_txbusy = 1;
 FUNC_5(VAR_4->sc_hwmtx);
 return (0);
}
