
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct z8530_softc {int tpc; } ;
struct uart_bas {int dummy; } ;
struct uart_softc {int sc_hwsig; int sc_hwmtx; struct uart_bas sc_bas; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int,int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int*,int,int) ;
 int FUNC_2 (struct uart_bas*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct uart_bas*,int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct uart_softc *VAR_7, int VAR_8)
{
 struct z8530_softc *VAR_9 = (struct z8530_softc*)VAR_7;
 struct uart_bas *VAR_10;
 uint32_t VAR_11, VAR_12;

 VAR_10 = &VAR_7->sc_bas;
 do {
  VAR_12 = VAR_7->sc_hwsig;
  VAR_11 = VAR_12;
  if (VAR_8 & VAR_0) {
   FUNC_0(VAR_8 & VAR_2, VAR_11, VAR_2,
       VAR_0);
  }
  if (VAR_8 & VAR_1) {
   FUNC_0(VAR_8 & VAR_3, VAR_11, VAR_3,
       VAR_1);
  }
 } while (!FUNC_1(&VAR_7->sc_hwsig, VAR_12, VAR_11));

 FUNC_3(VAR_7->sc_hwmtx);
 if (VAR_11 & VAR_2)
  VAR_9->tpc |= VAR_4;
 else
  VAR_9->tpc &= ~VAR_4;
 if (VAR_11 & VAR_3)
  VAR_9->tpc |= VAR_5;
 else
  VAR_9->tpc &= ~VAR_5;
 FUNC_4(VAR_10, VAR_6, VAR_9->tpc);
 FUNC_2(VAR_10);
 FUNC_5(VAR_7->sc_hwmtx);
 return (0);
}
