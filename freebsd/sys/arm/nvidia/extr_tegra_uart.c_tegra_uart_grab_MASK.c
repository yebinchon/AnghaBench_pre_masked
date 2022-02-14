
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct uart_bas {int dummy; } ;
struct uart_softc {int sc_hwmtx; struct uart_bas sc_bas; } ;
struct ns8250_softc {int ier_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct uart_bas*) ;
 int FUNC_1 (struct uart_bas*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct uart_bas*,int ,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct uart_softc *VAR_2)
{
 struct uart_bas *VAR_3 = &VAR_2->sc_bas;
 struct ns8250_softc *VAR_4 = (struct ns8250_softc*)VAR_2;
 u_char VAR_5;






 FUNC_2(VAR_2->sc_hwmtx);
 VAR_5 = FUNC_1(VAR_3, VAR_1);
 FUNC_3(VAR_3, VAR_1, VAR_5 & VAR_4->ier_mask);
 FUNC_3(VAR_3, VAR_0, 0);
 FUNC_0(VAR_3);
 FUNC_4(VAR_2->sc_hwmtx);
}
