
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {int dummy; } ;
struct uart_softc {size_t sc_rxput; int sc_hwmtx; int * sc_rxbuf; struct uart_bas sc_bas; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct uart_bas*,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct uart_softc*) ;
 int FUNC_3 (struct uart_softc*,int) ;
 int FUNC_4 (struct uart_bas*,int ,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct uart_softc *VAR_6)
{
 struct uart_bas *VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_7 = &VAR_6->sc_bas;
 FUNC_1(VAR_6->sc_hwmtx);


 while (FUNC_0(VAR_7, VAR_3) & VAR_4) {
  if (FUNC_2(VAR_6)) {

   VAR_6->sc_rxbuf[VAR_6->sc_rxput] = VAR_5;
   break;
  }

  VAR_9 = FUNC_0(VAR_7, VAR_2);
  FUNC_3(VAR_6, VAR_9);
 }


 VAR_8 = FUNC_0(VAR_7, VAR_0);
 VAR_8 |= (VAR_1);
 FUNC_4(VAR_7, VAR_0, VAR_8);

 FUNC_5(VAR_6->sc_hwmtx);
 return (0);
}
