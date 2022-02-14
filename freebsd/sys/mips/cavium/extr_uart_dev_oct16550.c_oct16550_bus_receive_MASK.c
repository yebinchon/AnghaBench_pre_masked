
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
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
 int FUNC_0 (struct uart_bas*) ;
 int FUNC_1 (struct uart_bas*,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct uart_softc*) ;
 int FUNC_4 (struct uart_softc*,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6 (struct uart_softc *VAR_8)
{
 struct uart_bas *VAR_9;
 int VAR_10;
 uint8_t VAR_11;

 VAR_9 = &VAR_8->sc_bas;
 FUNC_2(VAR_8->sc_hwmtx);
 VAR_11 = FUNC_1(VAR_9, VAR_4);

 while (VAR_11 & VAR_2) {
  if (FUNC_3(VAR_8)) {
   VAR_8->sc_rxbuf[VAR_8->sc_rxput] = VAR_6;
   break;
  }
  VAR_10 = FUNC_1(VAR_9, VAR_3);
  if (VAR_11 & VAR_0)
   VAR_10 |= VAR_5;
  if (VAR_11 & VAR_1)
   VAR_10 |= VAR_7;
  FUNC_4(VAR_8, VAR_10);
  VAR_11 = FUNC_1(VAR_9, VAR_4);
 }






        (void)FUNC_1(VAR_9, VAR_3);
 while (VAR_11 & VAR_2) {
  (void)FUNC_1(VAR_9, VAR_3);
  FUNC_0(VAR_9);
  VAR_11 = FUNC_1(VAR_9, VAR_4);
 }
 FUNC_5(VAR_8->sc_hwmtx);
  return (0);
}
