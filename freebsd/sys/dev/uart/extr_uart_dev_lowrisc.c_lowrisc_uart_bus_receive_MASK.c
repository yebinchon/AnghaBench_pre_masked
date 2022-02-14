
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct uart_bas {int dummy; } ;
struct uart_softc {size_t sc_rxput; int sc_hwmtx; int * sc_rxbuf; struct uart_bas sc_bas; } ;


 int VAR_0 ;
 int FUNC_0 (struct uart_bas*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct uart_bas*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct uart_softc*) ;
 int FUNC_4 (struct uart_softc*,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct uart_softc *VAR_5)
{
 struct uart_bas *VAR_6;
 uint32_t VAR_7;

 VAR_6 = &VAR_5->sc_bas;

 FUNC_2(VAR_5->sc_hwmtx);

 do {
  if (FUNC_3(VAR_5)) {

   VAR_5->sc_rxbuf[VAR_5->sc_rxput] = VAR_4;
   break;
  }
  VAR_7 = FUNC_0(VAR_6, VAR_2);
  FUNC_1(VAR_6, VAR_3, VAR_1);
  FUNC_4(VAR_5, VAR_7 & 0xff);
 } while ((VAR_7 & VAR_0) == 0);

 FUNC_5(VAR_5->sc_hwmtx);

 return (0);
}
