
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
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
 int FUNC_0 (struct uart_bas*) ;
 int FUNC_1 (struct uart_bas*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct uart_bas*,int ,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct uart_softc *VAR_9)
{
 struct uart_bas *VAR_10;
 int VAR_11;
 uint32_t VAR_12;
 uint32_t VAR_13;

 VAR_10 = &VAR_9->sc_bas;
 FUNC_2(VAR_9->sc_hwmtx);

 VAR_11 = 0;
 VAR_12 = FUNC_1(VAR_10, VAR_2);
 VAR_13 = FUNC_1(VAR_10, VAR_0);

 if ((VAR_12 & VAR_4) != 0)
  VAR_11 |= VAR_6;

 if ((VAR_12 & VAR_5) != 0 &&
     (VAR_13 & VAR_1) != 0) {
  VAR_11 |= VAR_8;

  VAR_13 &= ~VAR_1;
  FUNC_3(VAR_10, VAR_0, VAR_13);
  FUNC_0(VAR_10);
 }

 if ((VAR_12 & VAR_3) == 0)
  VAR_11 |= VAR_7;

 FUNC_4(VAR_9->sc_hwmtx);

 return (VAR_11);
}
