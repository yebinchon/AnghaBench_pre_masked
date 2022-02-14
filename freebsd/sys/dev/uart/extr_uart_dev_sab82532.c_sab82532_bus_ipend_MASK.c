
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct uart_bas {int dummy; } ;
struct uart_softc {int sc_hwmtx; struct uart_bas sc_bas; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct uart_bas*) ;
 int FUNC_1 (struct uart_bas*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct uart_bas*,int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct uart_softc *VAR_19)
{
 struct uart_bas *VAR_20;
 int VAR_21;
 uint8_t VAR_22, VAR_23;

 VAR_20 = &VAR_19->sc_bas;
 FUNC_2(VAR_19->sc_hwmtx);
 VAR_22 = FUNC_1(VAR_20, VAR_2);
 VAR_23 = FUNC_1(VAR_20, VAR_8);
 FUNC_0(VAR_20);
 if (VAR_22 & VAR_7) {
  while (FUNC_1(VAR_20, VAR_12) & VAR_13)
   ;
  FUNC_3(VAR_20, VAR_0, VAR_1);
  FUNC_0(VAR_20);
 }
 FUNC_4(VAR_19->sc_hwmtx);

 VAR_21 = 0;
 if (VAR_23 & VAR_10)
  VAR_21 |= VAR_14;
 if (VAR_22 & VAR_4)
  VAR_21 |= VAR_15;
 if (VAR_22 & (VAR_6|VAR_5))
  VAR_21 |= VAR_16;
 if ((VAR_22 & VAR_3) || (VAR_23 & VAR_11))
  VAR_21 |= VAR_17;
 if (VAR_23 & VAR_9)
  VAR_21 |= VAR_18;

 return (VAR_21);
}
