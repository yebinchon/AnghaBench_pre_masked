
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {int dummy; } ;
struct uart_softc {scalar_t__ sc_txbusy; struct uart_bas sc_bas; } ;
struct uart_mu_softc {int aux_ier; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct uart_bas*,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct uart_softc *VAR_6)
{
 struct uart_mu_softc *VAR_7;
 struct uart_bas *VAR_8;

 VAR_7 = (struct uart_mu_softc *)VAR_6;
 VAR_8 = &VAR_6->sc_bas;

 FUNC_0(VAR_8, VAR_1, VAR_5);

 VAR_7->aux_ier = (VAR_3|VAR_4|VAR_2);
 FUNC_0(VAR_8, VAR_0, VAR_7->aux_ier);
 VAR_6->sc_txbusy = 0;

 return (0);
}
