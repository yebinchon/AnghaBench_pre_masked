
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {int dummy; } ;
struct uart_softc {int sc_txdatasz; int* sc_txbuf; int sc_txbusy; int sc_hwmtx; struct uart_bas sc_bas; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct uart_bas*) ;
 int FUNC_1 (struct uart_bas*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct uart_bas*,int ,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct uart_softc *VAR_3)
{
 struct uart_bas *VAR_4 = &VAR_3->sc_bas;
 int VAR_5;
 int VAR_6;

 VAR_4 = &VAR_3->sc_bas;
 FUNC_2(VAR_3->sc_hwmtx);


 for (VAR_5 = 0; VAR_5 < VAR_3->sc_txdatasz; VAR_5++) {
  FUNC_3(VAR_4, VAR_2, VAR_3->sc_txbuf[VAR_5] & 0xff);
  FUNC_0(&VAR_3->sc_bas);
 }

 VAR_3->sc_txbusy = 1;


 VAR_6 = FUNC_1(VAR_4, VAR_0);
 VAR_6 |= (VAR_1);
 FUNC_3(VAR_4, VAR_0, VAR_6);

 FUNC_4(VAR_3->sc_hwmtx);

 return (0);
}
