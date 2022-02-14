
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






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
 int FUNC_3 (struct uart_bas*,int ,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct uart_softc *VAR_5, int VAR_6, intptr_t VAR_7)
{
 struct uart_bas *VAR_8;
 int VAR_9, VAR_10 = 0;
 int VAR_11, VAR_12;

 VAR_8 = &VAR_5->sc_bas;
 FUNC_2(VAR_5->sc_hwmtx);
 switch (VAR_6) {
 case 128:
  VAR_9 = FUNC_1(VAR_8, VAR_4);
  if (VAR_7)
   VAR_9 |= VAR_1;
  else
   VAR_9 &=~ VAR_1;
  FUNC_3(VAR_8, VAR_4, VAR_9);
  FUNC_0(VAR_8);
  break;

 case 129:
  VAR_11 = FUNC_1(VAR_8, VAR_3) & VAR_0;
  VAR_12 = VAR_8->rclk/(VAR_11 * 16);
  *(int *)VAR_7 = VAR_12;
  break;

 default:
  VAR_10 = VAR_2;
  break;
 }
 FUNC_4(VAR_5->sc_hwmtx);

 return (VAR_10);
}
