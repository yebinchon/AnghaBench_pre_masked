
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {int dummy; } ;
struct uart_softc {size_t sc_rxput; int sc_hwmtx; int * sc_rxbuf; struct uart_bas sc_bas; } ;
struct msm_uart_softc {int ier; } ;


 int FUNC_0 (struct uart_bas*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct uart_bas*) ;
 int FUNC_3 (struct uart_bas*,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct uart_softc*) ;
 int FUNC_6 (struct uart_softc*,int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(struct uart_softc *VAR_8)
{
 struct msm_uart_softc *VAR_9 = (struct msm_uart_softc *)VAR_8;
 struct uart_bas *VAR_10;
 int VAR_11;

 VAR_10 = &VAR_8->sc_bas;
 FUNC_4(VAR_8->sc_hwmtx);


 FUNC_0(VAR_10, VAR_0, VAR_2);
 FUNC_0(VAR_10, VAR_0, VAR_6);
 VAR_9->ier |= VAR_3;
 FUNC_0(VAR_10, VAR_1, VAR_9->ier);


 while (FUNC_3(VAR_10, VAR_4) & VAR_5) {
  if (FUNC_5(VAR_8)) {

   VAR_8->sc_rxbuf[VAR_8->sc_rxput] = VAR_7;
   break;
  }


  VAR_11 = FUNC_3(VAR_10, FUNC_1(0));
  FUNC_2(VAR_10);

  FUNC_6(VAR_8, VAR_11);
 }

 FUNC_7(VAR_8->sc_hwmtx);

 return (0);
}
