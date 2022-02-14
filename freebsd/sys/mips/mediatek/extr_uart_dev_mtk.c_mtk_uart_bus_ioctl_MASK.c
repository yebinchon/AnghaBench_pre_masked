
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {int rclk; } ;
struct uart_softc {int sc_hwmtx; struct uart_bas sc_bas; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct uart_bas*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct uart_softc *VAR_2, int VAR_3, intptr_t VAR_4)
{
 struct uart_bas *VAR_5;
 int VAR_6, VAR_7, VAR_8;

 VAR_5 = &VAR_2->sc_bas;
 VAR_8 = 0;
 FUNC_1(VAR_2->sc_hwmtx);
 switch (VAR_3) {
 case 128:

  break;
 case 129:
  VAR_7 = FUNC_0(VAR_5, VAR_1);
  VAR_6 = VAR_5->rclk / (VAR_7 * 16);
  *(int*)VAR_4 = VAR_6;
  break;
 default:
  VAR_8 = VAR_0;
  break;
 }
 FUNC_2(VAR_2->sc_hwmtx);
 return (VAR_8);
}
