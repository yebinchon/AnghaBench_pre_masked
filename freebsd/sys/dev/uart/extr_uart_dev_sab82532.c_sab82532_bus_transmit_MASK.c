
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {int dummy; } ;
struct uart_softc {int sc_txdatasz; int sc_txbusy; int sc_hwmtx; int * sc_txbuf; struct uart_bas sc_bas; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct uart_bas*) ;
 int FUNC_1 (struct uart_bas*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct uart_bas*,scalar_t__,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct uart_softc *VAR_6)
{
 struct uart_bas *VAR_7;
 int VAR_8;

 VAR_7 = &VAR_6->sc_bas;
 FUNC_2(VAR_6->sc_hwmtx);
 while (!(FUNC_1(VAR_7, VAR_2) & VAR_4))
  ;
 for (VAR_8 = 0; VAR_8 < VAR_6->sc_txdatasz; VAR_8++)
  FUNC_3(VAR_7, VAR_5 + VAR_8, VAR_6->sc_txbuf[VAR_8]);
 FUNC_0(VAR_7);
 while (FUNC_1(VAR_7, VAR_2) & VAR_3)
  ;
 FUNC_3(VAR_7, VAR_0, VAR_1);
 VAR_6->sc_txbusy = 1;
 FUNC_4(VAR_6->sc_hwmtx);
 return (0);
}
