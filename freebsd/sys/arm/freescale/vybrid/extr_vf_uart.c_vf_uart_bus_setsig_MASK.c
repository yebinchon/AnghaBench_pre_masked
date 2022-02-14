
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_bas {int dummy; } ;
struct uart_softc {TYPE_1__* sc_sysdev; struct uart_bas sc_bas; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct uart_bas*,int ) ;
 int FUNC_1 (struct uart_bas*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct uart_softc *VAR_3, int VAR_4)
{
 struct uart_bas *VAR_5;
 int VAR_6;





 VAR_5 = &VAR_3->sc_bas;
 if (VAR_3->sc_sysdev != ((void*)0) && VAR_3->sc_sysdev->type == VAR_2) {
  VAR_6 = FUNC_0(VAR_5, VAR_0);
  VAR_6 |= (VAR_1);
  FUNC_1(VAR_5, VAR_0, VAR_6);
 }

 return (0);
}
