
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {int dummy; } ;
struct uart_softc {int sc_hwmtx; struct uart_bas sc_bas; } ;
struct uart_mu_softc {int aux_ier; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct uart_bas*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct uart_softc *VAR_4)
{
 struct uart_mu_softc *VAR_5;
 struct uart_bas *VAR_6;

 VAR_5 = (struct uart_mu_softc *)VAR_4;
 VAR_6 = &VAR_4->sc_bas;


 FUNC_1(VAR_4->sc_hwmtx);
 FUNC_0(VAR_6, VAR_0, VAR_2|VAR_3);
 FUNC_0(VAR_6, VAR_1, VAR_5->aux_ier);
 FUNC_2(VAR_4->sc_hwmtx);
}
