
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z8530_softc {int tpc; } ;
struct uart_bas {int rclk; } ;
struct uart_softc {int sc_hwmtx; struct uart_bas sc_bas; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int FUNC_0 (struct uart_bas*) ;
 int FUNC_1 (struct uart_bas*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct uart_bas*,int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct uart_softc *VAR_5, int VAR_6, intptr_t VAR_7)
{
 struct z8530_softc *VAR_8 = (struct z8530_softc*)VAR_5;
 struct uart_bas *VAR_9;
 int VAR_10, VAR_11, VAR_12;

 VAR_9 = &VAR_5->sc_bas;
 VAR_12 = 0;
 FUNC_2(VAR_5->sc_hwmtx);
 switch (VAR_6) {
 case 128:
  if (VAR_7)
   VAR_8->tpc |= VAR_3;
  else
   VAR_8->tpc &= ~VAR_3;
  FUNC_3(VAR_9, VAR_4, VAR_8->tpc);
  FUNC_0(VAR_9);
  break;
 case 129:
  VAR_11 = FUNC_1(VAR_9, VAR_1);
  VAR_11 = (VAR_11 << 8) | FUNC_1(VAR_9, VAR_2);
  VAR_10 = VAR_9->rclk / 2 / (VAR_11 + 2);
  *(int*)VAR_7 = VAR_10;
  break;
 default:
  VAR_12 = VAR_0;
  break;
 }
 FUNC_4(VAR_5->sc_hwmtx);
 return (VAR_12);
}
