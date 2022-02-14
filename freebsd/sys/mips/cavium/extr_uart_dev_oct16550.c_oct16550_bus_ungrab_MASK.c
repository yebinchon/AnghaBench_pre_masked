
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {int dummy; } ;
struct uart_softc {int sc_hwmtx; struct uart_bas sc_bas; } ;
struct oct16550_softc {int ier; } ;


 int VAR_0 ;
 int FUNC_0 (struct uart_bas*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct uart_bas*,int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct uart_softc *VAR_1)
{
 struct oct16550_softc *VAR_2 = (struct oct16550_softc*)VAR_1;
 struct uart_bas *VAR_3 = &VAR_1->sc_bas;




 FUNC_1(VAR_1->sc_hwmtx);
 FUNC_2(VAR_3, VAR_0, VAR_2->ier);
 FUNC_0(VAR_3);
 FUNC_3(VAR_1->sc_hwmtx);
}
