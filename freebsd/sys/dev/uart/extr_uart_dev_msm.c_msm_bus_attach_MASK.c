
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {int dummy; } ;
struct uart_softc {scalar_t__ sc_hwoflow; scalar_t__ sc_hwiflow; struct uart_bas sc_bas; } ;
struct msm_uart_softc {int ier; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct uart_bas*,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct uart_softc *VAR_2)
{
 struct msm_uart_softc *VAR_3 = (struct msm_uart_softc *)VAR_2;
 struct uart_bas *VAR_4 = &VAR_2->sc_bas;

 VAR_2->sc_hwiflow = 0;
 VAR_2->sc_hwoflow = 0;


 VAR_3->ier = VAR_1;


 FUNC_0(VAR_4, VAR_0, VAR_3->ier);

 return (0);
}
