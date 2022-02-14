
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {int dummy; } ;
struct uart_softc {int* sc_rxbuf; size_t sc_rxput; int sc_hwmtx; struct uart_bas sc_bas; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct uart_bas*,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct uart_bas*,int ) ;
 scalar_t__ FUNC_3 (struct uart_bas*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct uart_softc*) ;
 int FUNC_7 (struct uart_softc*,int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(struct uart_softc *VAR_15)
{
 struct uart_bas *VAR_16;
 int VAR_17, VAR_18;

 VAR_16 = &VAR_15->sc_bas;
 FUNC_5(VAR_15->sc_hwmtx);







 while (FUNC_3(VAR_16, VAR_14, VAR_5)) {
  if (FUNC_6(VAR_15)) {

   VAR_15->sc_rxbuf[VAR_15->sc_rxput] = VAR_9;
   break;
  }
  VAR_17 = FUNC_2(VAR_16, FUNC_4(VAR_13));
  VAR_18 = VAR_17 & 0x000000ff;
  if (VAR_17 & FUNC_1(VAR_13, VAR_2))
   VAR_18 |= VAR_8;
  if (VAR_17 & FUNC_1(VAR_13, VAR_4))
   VAR_18 |= VAR_10;
  if (VAR_17 & FUNC_1(VAR_13, VAR_3))
   VAR_18 |= VAR_9;
  if (VAR_17 & FUNC_1(VAR_13, VAR_1))
   VAR_18 |= VAR_7;

  FUNC_7(VAR_15, VAR_18);
 }
 FUNC_0(VAR_16, VAR_11, VAR_6);
 FUNC_0(VAR_16, VAR_12, VAR_0);

 FUNC_8(VAR_15->sc_hwmtx);
 return (0);
}
