
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {int dummy; } ;
struct uart_softc {int sc_txdatasz; int* sc_txbuf; int sc_hwmtx; struct uart_bas sc_bas; } ;


 int VAR_0 ;
 int FUNC_0 (struct uart_bas*,int ) ;
 int FUNC_1 (struct uart_bas*,int ,int) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct uart_softc *VAR_2)
{
 struct uart_bas *VAR_3;
 int VAR_4;

 VAR_3 = &VAR_2->sc_bas;

 FUNC_2(VAR_2->sc_hwmtx);
 for (VAR_4 = 0; VAR_4 < VAR_2->sc_txdatasz; VAR_4++) {
  while (FUNC_0(VAR_3, VAR_1) & VAR_0)
   ;
  FUNC_1(VAR_3, VAR_1, VAR_2->sc_txbuf[VAR_4] & 0xff);
 }
 FUNC_3(VAR_2->sc_hwmtx);

 return (0);
}
