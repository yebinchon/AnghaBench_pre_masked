
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
 int FUNC_0 (struct uart_bas*,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct uart_softc*) ;
 int FUNC_3 (struct uart_softc*,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct uart_softc *VAR_8)
{
 struct uart_bas *VAR_9;
 uint32_t VAR_10, VAR_11;
 int VAR_12;

 VAR_9 = &VAR_8->sc_bas;
 FUNC_1(VAR_8->sc_hwmtx);

 for (;;) {
  VAR_10 = FUNC_0(VAR_9, VAR_4);
  if (VAR_10 & VAR_2)
   break;
  if (FUNC_2(VAR_8)) {
   VAR_8->sc_rxbuf[VAR_8->sc_rxput] = VAR_6;
   break;
  }

  VAR_11 = FUNC_0(VAR_9, VAR_3);
  VAR_12 = VAR_11 & 0xff;

  if (VAR_11 & VAR_0)
   VAR_12 |= VAR_5;
  if (VAR_11 & VAR_1)
   VAR_12 |= VAR_7;

  FUNC_3(VAR_8, VAR_12);
 }

 FUNC_4(VAR_8->sc_hwmtx);

 return (0);
}
