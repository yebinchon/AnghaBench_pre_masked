
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct uart_bas {int dummy; } ;
struct uart_softc {size_t sc_rxput; int sc_hwmtx; int * sc_rxbuf; struct uart_bas sc_bas; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct uart_bas*) ;
 int FUNC_1 (struct uart_bas*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct uart_softc*,int ) ;
 scalar_t__ FUNC_4 (struct uart_softc*) ;
 int FUNC_5 (struct uart_softc*,int) ;
 int FUNC_6 (int ) ;

int
FUNC_7(struct uart_softc *VAR_9)
{
 struct uart_bas *VAR_10;
 uint32_t VAR_11;
 int VAR_12, VAR_13;

 VAR_10 = &VAR_9->sc_bas;
 FUNC_2(VAR_9->sc_hwmtx);

 while (!(FUNC_1(VAR_10, VAR_7) & VAR_4)) {
  if (FUNC_4(VAR_9)) {
   VAR_9->sc_rxbuf[VAR_9->sc_rxput] = VAR_8;
   break;
  }

  VAR_11 = FUNC_1(VAR_10, VAR_6);
  VAR_12 = VAR_11 & 0xff;
  VAR_13 = VAR_11 & 0xf000;




  VAR_13 = (VAR_13 & VAR_0) >> 7 |
      (VAR_13 & VAR_1) >> 5 |
      (VAR_13 & VAR_3) >> 2 |
      (VAR_13 & VAR_2) >> 2;

  FUNC_5(VAR_9, VAR_12 | VAR_13);
  FUNC_0(VAR_10);
 }






 if (!(FUNC_1(VAR_10, VAR_7) & VAR_4)) {
  FUNC_3(VAR_9, VAR_5);
 }

 FUNC_6(VAR_9->sc_hwmtx);
 return (0);
}
