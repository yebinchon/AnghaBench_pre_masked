
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {int dummy; } ;
struct uart_softc {int sc_txdatasz; int sc_txbusy; int sc_hwmtx; int * sc_txbuf; struct uart_bas sc_bas; } ;
struct msm_uart_softc {int ier; } ;


 int FUNC_0 (struct uart_bas*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct uart_bas*,int ) ;
 int FUNC_2 (struct uart_bas*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct uart_softc *VAR_2)
{
 struct msm_uart_softc *VAR_3 = (struct msm_uart_softc *)VAR_2;
 struct uart_bas *VAR_4 = &VAR_2->sc_bas;
 int VAR_5;

 FUNC_3(VAR_2->sc_hwmtx);


 for (VAR_5 = 0; VAR_5 < VAR_2->sc_txdatasz; VAR_5++) {

  FUNC_1(VAR_4, VAR_2->sc_txbuf[VAR_5]);
  FUNC_2(VAR_4);
 }


 VAR_3->ier |= VAR_1;
 FUNC_0(VAR_4, VAR_0, VAR_3->ier);
 FUNC_2(VAR_4);





 VAR_2->sc_txbusy = 1;
 FUNC_4(VAR_2->sc_hwmtx);

 return (0);
}
