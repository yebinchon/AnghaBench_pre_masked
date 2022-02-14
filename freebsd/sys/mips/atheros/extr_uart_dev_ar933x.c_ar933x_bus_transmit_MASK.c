
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {int dummy; } ;
struct uart_softc {int sc_txdatasz; int* sc_txbuf; int sc_txbusy; int sc_hwmtx; struct uart_bas sc_bas; } ;
struct ar933x_softc {int u_ier; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct uart_bas*,int ) ;
 int FUNC_1 (struct uart_bas*,int ,int) ;
 int FUNC_2 (struct uart_bas*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct uart_softc *VAR_6)
{
 struct uart_bas *VAR_7 = &VAR_6->sc_bas;
 struct ar933x_softc *VAR_8 = (struct ar933x_softc *)VAR_6;
 int VAR_9;

 FUNC_3(VAR_6->sc_hwmtx);


 while (FUNC_0(VAR_7, VAR_0) &
     VAR_1)
  ;




 for (VAR_9 = 0; VAR_9 < VAR_6->sc_txdatasz; VAR_9++) {

  FUNC_1(VAR_7, VAR_2,
      (VAR_6->sc_txbuf[VAR_9] & 0xff) | VAR_3);
  FUNC_2(VAR_7);
 }





 VAR_8->u_ier |= VAR_5;
 FUNC_1(VAR_7, VAR_4, VAR_8->u_ier);
 FUNC_2(VAR_7);






 VAR_6->sc_txbusy = 1;
 FUNC_4(VAR_6->sc_hwmtx);

 return (0);
}
