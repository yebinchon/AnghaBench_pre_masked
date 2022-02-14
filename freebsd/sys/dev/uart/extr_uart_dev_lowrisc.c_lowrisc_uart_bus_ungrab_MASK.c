
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {int dummy; } ;
struct uart_softc {int sc_hwmtx; struct uart_bas sc_bas; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct uart_softc *VAR_0)
{
 struct uart_bas *VAR_1;

 VAR_1 = &VAR_0->sc_bas;

 FUNC_0(VAR_0->sc_hwmtx);

 FUNC_1(VAR_0->sc_hwmtx);
}
