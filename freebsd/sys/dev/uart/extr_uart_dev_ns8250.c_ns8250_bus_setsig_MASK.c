
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct uart_bas {int dummy; } ;
struct uart_softc {int sc_hwsig; int sc_hwmtx; struct uart_bas sc_bas; } ;
struct ns8250_softc {int mcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int*,int,int) ;
 int FUNC_1 (struct uart_bas*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct uart_bas*,int ,int) ;
 int FUNC_4 (int ) ;

int
FUNC_5(struct uart_softc *VAR_7, int VAR_8)
{
 struct ns8250_softc *VAR_9 = (struct ns8250_softc*)VAR_7;
 struct uart_bas *VAR_10;
 uint32_t VAR_11, VAR_12;

 VAR_10 = &VAR_7->sc_bas;
 do {
  VAR_12 = VAR_7->sc_hwsig;
  VAR_11 = VAR_12;
  if (VAR_8 & VAR_3) {
   VAR_11 = (VAR_11 & ~VAR_5) | (VAR_8 & (VAR_5 | VAR_3));
  }
  if (VAR_8 & VAR_4) {
   VAR_11 = (VAR_11 & ~VAR_6) | (VAR_8 & (VAR_6 | VAR_4));
  }
 } while (!FUNC_0(&VAR_7->sc_hwsig, VAR_12, VAR_11));
 FUNC_2(VAR_7->sc_hwmtx);
 VAR_9->mcr &= ~(VAR_0|VAR_1);
 if (VAR_11 & VAR_5)
  VAR_9->mcr |= VAR_0;
 if (VAR_11 & VAR_6)
  VAR_9->mcr |= VAR_1;
 FUNC_3(VAR_10, VAR_2, VAR_9->mcr);
 FUNC_1(VAR_10);
 FUNC_4(VAR_7->sc_hwmtx);
 return (0);
}
