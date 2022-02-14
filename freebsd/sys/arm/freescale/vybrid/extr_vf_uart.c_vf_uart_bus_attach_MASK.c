
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_bas {int dummy; } ;
struct uart_softc {TYPE_1__* sc_sysdev; scalar_t__ sc_hwoflow; scalar_t__ sc_hwiflow; struct uart_bas sc_bas; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct uart_bas*,int ) ;
 int FUNC_1 (struct uart_softc*,int,int) ;
 int FUNC_2 (struct uart_bas*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct uart_softc *VAR_3)
{
 struct uart_bas *VAR_4;
 int VAR_5;

 VAR_4 = &VAR_3->sc_bas;

 VAR_3->sc_hwiflow = 0;
 VAR_3->sc_hwoflow = 0;

 FUNC_1(VAR_3, 66000000, 115200);

 VAR_5 = FUNC_0(VAR_4, VAR_0);
 if (VAR_3->sc_sysdev != ((void*)0) && VAR_3->sc_sysdev->type == VAR_2) {
  VAR_5 &= ~VAR_1;
 } else {
  VAR_5 |= VAR_1;
 }
 FUNC_2(VAR_4, VAR_0, VAR_5);

 return (0);
}
