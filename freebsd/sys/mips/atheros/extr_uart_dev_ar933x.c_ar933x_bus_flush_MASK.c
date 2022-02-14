
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {int dummy; } ;
struct uart_softc {int sc_hwmtx; struct uart_bas sc_bas; } ;


 int FUNC_0 (struct uart_bas*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct uart_softc *VAR_0, int VAR_1)
{
 struct uart_bas *VAR_2;

 VAR_2 = &VAR_0->sc_bas;
 FUNC_1(VAR_0->sc_hwmtx);
 FUNC_0(VAR_2, VAR_1);
 FUNC_2(VAR_0->sc_hwmtx);

 return (0);
}
