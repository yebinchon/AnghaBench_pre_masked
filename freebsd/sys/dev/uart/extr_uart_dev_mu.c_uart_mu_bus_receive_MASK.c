
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct uart_bas {int dummy; } ;
struct uart_softc {size_t sc_rxput; int sc_hwmtx; int * sc_rxbuf; struct uart_bas sc_bas; } ;
struct uart_mu_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct uart_bas*,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct uart_softc*) ;
 int FUNC_3 (struct uart_softc*,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct uart_softc *VAR_4)
{
 struct uart_mu_softc *VAR_5;
 struct uart_bas *VAR_6;
 uint32_t VAR_7, VAR_8;
 int VAR_9;

 VAR_6 = &VAR_4->sc_bas;
 FUNC_1(VAR_4->sc_hwmtx);
 VAR_5 = (struct uart_mu_softc *)VAR_4;

 VAR_7 = FUNC_0(VAR_6, VAR_1);
 while (VAR_7 & VAR_2) {
  VAR_8 = FUNC_0(VAR_6, VAR_0);
  VAR_9 = VAR_8 & 0xff;
  if (FUNC_2(VAR_4)) {
   VAR_4->sc_rxbuf[VAR_4->sc_rxput] = VAR_3;
   break;
  }
  FUNC_3(VAR_4, VAR_9);
  VAR_7 = FUNC_0(VAR_6, VAR_1);
 }
 FUNC_4(VAR_4->sc_hwmtx);

 return (0);
}
