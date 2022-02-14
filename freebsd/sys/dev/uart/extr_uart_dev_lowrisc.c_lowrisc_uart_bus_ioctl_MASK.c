
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct uart_bas {int dummy; } ;
struct uart_softc {int sc_hwmtx; struct uart_bas sc_bas; } ;


 int VAR_0 ;


 int FUNC_0 (struct uart_bas*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct uart_softc *VAR_1, int VAR_2, intptr_t VAR_3)
{
 struct uart_bas *VAR_4;
 int VAR_5;

 VAR_4 = &VAR_1->sc_bas;
 VAR_5 = 0;
 FUNC_1(VAR_1->sc_hwmtx);
 switch (VAR_2) {
 case 128:

  break;
 case 129:
  *(u_int*)VAR_3 = FUNC_0(VAR_4);
  break;
 default:
  VAR_5 = VAR_0;
  break;
 }
 FUNC_2(VAR_1->sc_hwmtx);

 return (VAR_5);
}
