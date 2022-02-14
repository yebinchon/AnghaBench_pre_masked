
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct uart_bas {int dummy; } ;
struct uart_softc {int* sc_rxbuf; size_t sc_rxput; int sc_hwmtx; struct uart_bas sc_bas; } ;


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
 scalar_t__ FUNC_3 (struct uart_softc*) ;
 int FUNC_4 (struct uart_softc*,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct uart_softc *VAR_9)
{
 struct uart_bas *VAR_10;
 int VAR_11;
 uint8_t VAR_12;

 VAR_10 = &VAR_9->sc_bas;
 FUNC_2(VAR_9->sc_hwmtx);
 VAR_12 = FUNC_1(VAR_10, VAR_4);
 while ((VAR_12 & VAR_0)) {
  if (FUNC_3(VAR_9)) {
   VAR_9->sc_rxbuf[VAR_9->sc_rxput] = VAR_7;
   break;
  }
  VAR_11 = 0;
  VAR_11 = FUNC_1(VAR_10, VAR_5);
  if (VAR_12 & VAR_1)
   VAR_11 |= VAR_6;
  if (VAR_12 & VAR_3)
   VAR_11 |= VAR_8;
  if (VAR_12 & VAR_2)
   VAR_11 |= VAR_7;
  FUNC_0(VAR_10);
  FUNC_4(VAR_9, VAR_11);
  VAR_12 = FUNC_1(VAR_10, VAR_4);
 }

 FUNC_5(VAR_9->sc_hwmtx);
 return (0);
}
