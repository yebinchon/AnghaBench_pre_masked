
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int regshft; int bsh; int bst; } ;
struct uart_softc {TYPE_1__ sc_bas; int * sc_class; TYPE_2__* sc_sysdev; } ;
typedef int device_t ;
struct TYPE_4__ {int bas; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*,int) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,int *) ;
 struct uart_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ,int ,int ,int,int ) ;
 int VAR_1 ;
 int FUNC_7 (int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_8(device_t VAR_4)
{
 struct uart_softc *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_5(VAR_4);
 VAR_5 = FUNC_4(VAR_4);
 VAR_5->sc_class = &VAR_2;






 VAR_5->sc_sysdev = FUNC_1(&VAR_3);
 FUNC_2(&VAR_5->sc_sysdev->bas, &VAR_5->sc_bas, sizeof(VAR_5->sc_bas));
 VAR_5->sc_bas.bst = VAR_1;




 if (FUNC_3(VAR_5->sc_bas.bst, FUNC_0(0),
     FUNC_7(VAR_5->sc_class), 0, &VAR_5->sc_bas.bsh) != 0)
  return (VAR_0);
 return (FUNC_6(VAR_4, VAR_5->sc_bas.regshft, 0, 0, 0, VAR_6, 0));
}
