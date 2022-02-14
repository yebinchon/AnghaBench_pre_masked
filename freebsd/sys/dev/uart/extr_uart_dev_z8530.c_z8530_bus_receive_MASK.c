
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
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct uart_bas*) ;
 int FUNC_1 (struct uart_bas*,int ) ;
 int FUNC_2 (struct uart_bas*,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct uart_softc*) ;
 int FUNC_5 (struct uart_softc*,int) ;
 int FUNC_6 (struct uart_bas*,int ,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(struct uart_softc *VAR_12)
{
 struct uart_bas *VAR_13;
 int VAR_14;
 uint8_t VAR_15, VAR_16;

 VAR_13 = &VAR_12->sc_bas;
 FUNC_3(VAR_12->sc_hwmtx);
 VAR_15 = FUNC_1(VAR_13, VAR_4);
 while (VAR_15 & VAR_0) {
  if (FUNC_4(VAR_12)) {
   VAR_12->sc_rxbuf[VAR_12->sc_rxput] = VAR_10;
   break;
  }
  VAR_14 = FUNC_2(VAR_13, VAR_3);
  FUNC_0(VAR_13);
  VAR_16 = FUNC_1(VAR_13, VAR_5);
  if (VAR_16 & VAR_6)
   VAR_14 |= VAR_9;
  if (VAR_16 & VAR_8)
   VAR_14 |= VAR_11;
  if (VAR_16 & VAR_7)
   VAR_14 |= VAR_10;
  FUNC_5(VAR_12, VAR_14);
  if (VAR_16 & (VAR_6 | VAR_8 | VAR_7)) {
   FUNC_6(VAR_13, VAR_2, VAR_1);
   FUNC_0(VAR_13);
  }
  VAR_15 = FUNC_1(VAR_13, VAR_4);
 }

 while (VAR_15 & VAR_0) {
  (void)FUNC_2(VAR_13, VAR_3);
  FUNC_0(VAR_13);
  VAR_16 = FUNC_1(VAR_13, VAR_5);
  if (VAR_16 & (VAR_6 | VAR_8 | VAR_7)) {
   FUNC_6(VAR_13, VAR_2, VAR_1);
   FUNC_0(VAR_13);
  }
  VAR_15 = FUNC_1(VAR_13, VAR_4);
 }
 FUNC_7(VAR_12->sc_hwmtx);
 return (0);
}
