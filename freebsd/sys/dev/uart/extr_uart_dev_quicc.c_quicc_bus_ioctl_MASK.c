
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct uart_bas {int rclk; int chan; } ;
struct uart_softc {int sc_hwmtx; struct uart_bas sc_bas; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;


 int FUNC_1 (struct uart_bas*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct uart_softc *VAR_1, int VAR_2, intptr_t VAR_3)
{
 struct uart_bas *VAR_4;
 uint32_t VAR_5;
 int VAR_6, VAR_7;

 VAR_4 = &VAR_1->sc_bas;
 VAR_7 = 0;
 FUNC_2(VAR_1->sc_hwmtx);
 switch (VAR_2) {
 case 128:
  break;
 case 129:
  VAR_5 = FUNC_1(VAR_4, FUNC_0(VAR_4->chan - 1)) & 0x1fff;
  VAR_5 = (VAR_5 & 1) ? (VAR_5 + 1) << 3 : (VAR_5 + 2) >> 1;
  VAR_6 = VAR_4->rclk / (VAR_5 * 16);
  *(int*)VAR_3 = VAR_6;
  break;
 default:
  VAR_7 = VAR_0;
  break;
 }
 FUNC_3(VAR_1->sc_hwmtx);
 return (VAR_7);
}
