
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {int dummy; } ;
struct uart_softc {int sc_hwmtx; struct uart_bas sc_bas; } ;


 int VAR_0 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct uart_softc *VAR_1, int VAR_2, intptr_t VAR_3)
{
 struct uart_bas *VAR_4;
 int VAR_5;

 VAR_4 = &VAR_1->sc_bas;
 VAR_5 = 0;
 FUNC_0(VAR_1->sc_hwmtx);
 switch (VAR_2) {
 case 128:
  break;
 case 129:
  *(int*)VAR_3 = 115200;
  break;
 default:
  VAR_5 = VAR_0;
  break;
 }
 FUNC_1(VAR_1->sc_hwmtx);

 return (VAR_5);
}
