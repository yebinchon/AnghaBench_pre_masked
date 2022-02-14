
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct uart_softc {int sc_opened; int sc_softih; int * sc_sysdev; int sc_dev; } ;
struct TYPE_3__ {int sc_kbd; struct uart_softc* sc_uart; int * sc_sysdev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *,int ,int ,TYPE_1__*,int ,int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_5(struct uart_softc *VAR_6)
{





 if (VAR_2.sc_sysdev == ((void*)0)) {
  FUNC_1(VAR_6->sc_dev, "keyboard not present\n");
  return (0);
 }

 if (VAR_6->sc_sysdev != ((void*)0)) {
  VAR_2.sc_uart = VAR_6;




  FUNC_3(&VAR_2.sc_kbd);

  FUNC_4(&VAR_4, VAR_5, VAR_3,
      &VAR_2, VAR_1, VAR_0, &VAR_6->sc_softih);

  VAR_6->sc_opened = 1;
  FUNC_0(&VAR_2.sc_kbd);
 }

 return (0);
}
