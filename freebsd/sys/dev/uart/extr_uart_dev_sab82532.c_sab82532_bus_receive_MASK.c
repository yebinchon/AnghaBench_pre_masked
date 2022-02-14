
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct uart_bas {int dummy; } ;
struct uart_softc {size_t sc_rxput; int sc_hwmtx; int * sc_rxbuf; struct uart_bas sc_bas; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct uart_bas*) ;
 int FUNC_1 (struct uart_bas*,scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct uart_softc*) ;
 int FUNC_4 (struct uart_softc*,int) ;
 int FUNC_5 (struct uart_bas*,int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct uart_softc *VAR_12)
{
 struct uart_bas *VAR_13;
 int VAR_14, VAR_15, VAR_16;
 uint8_t VAR_17;

 VAR_13 = &VAR_12->sc_bas;
 FUNC_2(VAR_12->sc_hwmtx);
 if (FUNC_1(VAR_13, VAR_6) & VAR_8) {
  VAR_15 = FUNC_1(VAR_13, VAR_2) & 31;
  if (VAR_15 == 0)
   VAR_15 = 32;
  for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14 += 2) {
   if (FUNC_3(VAR_12)) {
    VAR_12->sc_rxbuf[VAR_12->sc_rxput] = VAR_10;
    break;
   }
   VAR_16 = FUNC_1(VAR_13, VAR_3);
   VAR_17 = FUNC_1(VAR_13, VAR_3 + 1);
   if (VAR_17 & VAR_4)
    VAR_16 |= VAR_9;
   if (VAR_17 & VAR_5)
    VAR_16 |= VAR_11;
   FUNC_4(VAR_12, VAR_16);
  }
 }

 while (FUNC_1(VAR_13, VAR_6) & VAR_7)
  ;
 FUNC_5(VAR_13, VAR_0, VAR_1);
 FUNC_0(VAR_13);
 FUNC_6(VAR_12->sc_hwmtx);
 return (0);
}
