
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {int dummy; } ;
struct uart_softc {size_t sc_rxput; int sc_hwmtx; int * sc_rxbuf; struct uart_bas sc_bas; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct uart_bas*,int ) ;
 scalar_t__ FUNC_1 (struct uart_bas*) ;
 int FUNC_2 (struct uart_bas*,int ,int ) ;
 int FUNC_3 (struct uart_bas*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct uart_softc*) ;
 int FUNC_6 (struct uart_softc*,int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(struct uart_softc *VAR_3)
{
 struct uart_bas *VAR_4 = &VAR_3->sc_bas;
 int VAR_5;

 FUNC_4(VAR_3->sc_hwmtx);


 while (FUNC_1(VAR_4)) {
  if (FUNC_5(VAR_3)) {
   VAR_3->sc_rxbuf[VAR_3->sc_rxput] = VAR_2;
   break;
  }


  VAR_5 = FUNC_0(VAR_4, VAR_0) & 0xff;


  FUNC_2(VAR_4, VAR_0,
      VAR_1);
  FUNC_3(VAR_4);


  FUNC_6(VAR_3, VAR_5);
 }






 FUNC_7(VAR_3->sc_hwmtx);

 return (0);
}
