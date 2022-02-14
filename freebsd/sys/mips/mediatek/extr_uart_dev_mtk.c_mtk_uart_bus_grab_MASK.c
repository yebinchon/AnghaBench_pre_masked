
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {int dummy; } ;
struct uart_softc {int sc_hwmtx; struct uart_bas sc_bas; } ;
struct uart_mtk_softc {int ier; int ier_mask; } ;


 int VAR_0 ;
 int FUNC_0 (struct uart_bas*) ;
 int FUNC_1 (struct uart_bas*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct uart_bas*,int ,int) ;
 int FUNC_4 (int ) ;

void
FUNC_5(struct uart_softc *VAR_1)
{
 struct uart_bas *VAR_2 = &VAR_1->sc_bas;
 struct uart_mtk_softc *VAR_3 = (struct uart_mtk_softc *)VAR_1;

 FUNC_2(VAR_1->sc_hwmtx);
 VAR_3->ier = FUNC_1(VAR_2, VAR_0);
 FUNC_3(VAR_2, VAR_0, VAR_3->ier & VAR_3->ier_mask);
 FUNC_0(VAR_2);
 FUNC_4(VAR_1->sc_hwmtx);
}
