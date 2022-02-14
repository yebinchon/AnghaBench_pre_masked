
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
 int VAR_9 ;
 int FUNC_0 (struct uart_bas*) ;
 int FUNC_1 (struct uart_bas*,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct uart_softc*) ;
 int FUNC_4 (struct uart_softc*,int) ;
 int FUNC_5 (struct uart_bas*,int ,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct uart_softc *VAR_10)
{
 struct uart_bas *VAR_11;
 int VAR_12;
 uint32_t VAR_13;

 VAR_11 = &VAR_10->sc_bas;
 FUNC_2(VAR_10->sc_hwmtx);

 VAR_13 = FUNC_1(VAR_11, VAR_5);
 while ((VAR_13 & VAR_6) == 0) {
  if (FUNC_3(VAR_10)) {
   VAR_10->sc_rxbuf[VAR_10->sc_rxput] = VAR_8;
   break;
  }
  VAR_12 = FUNC_1(VAR_11, VAR_2) & 0xff;
  if (VAR_13 & VAR_3)
   VAR_12 |= VAR_7;
  if (VAR_13 & VAR_4)
   VAR_12 |= VAR_9;
  FUNC_4(VAR_10, VAR_12);
  VAR_13 = FUNC_1(VAR_11, VAR_5);
 }

 while ((VAR_13 & VAR_6) == 0) {
  (void)FUNC_1(VAR_11, VAR_2);
  VAR_13 = FUNC_1(VAR_11, VAR_5);
 }

 if ((VAR_13 & (VAR_3 | VAR_4)) != 0) {
  FUNC_5(VAR_11, VAR_1,
      (FUNC_1(VAR_11, VAR_1) |
      VAR_0));
  FUNC_0(VAR_11);
  FUNC_5(VAR_11, VAR_1,
      (FUNC_1(VAR_11, VAR_1) &
      ~VAR_0));
  FUNC_0(VAR_11);
 }

 FUNC_6(VAR_10->sc_hwmtx);

 return (0);
}
