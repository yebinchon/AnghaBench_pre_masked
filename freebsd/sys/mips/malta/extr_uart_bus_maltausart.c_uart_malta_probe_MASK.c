
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {void* bsh; void* bst; } ;
struct uart_softc {TYPE_2__ sc_bas; TYPE_3__* sc_sysdev; int * sc_class; } ;
typedef int device_t ;
struct TYPE_4__ {void* bsh; void* bst; } ;
struct TYPE_6__ {TYPE_1__ bas; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*,int) ;
 struct uart_softc* FUNC_3 (int ) ;
 void* VAR_1 ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_5(device_t VAR_4)
{
 struct uart_softc *VAR_5;

 VAR_5 = FUNC_3(VAR_4);
 VAR_5->sc_sysdev = FUNC_1(&VAR_3);
 VAR_5->sc_class = &VAR_2;
 FUNC_2(&VAR_5->sc_sysdev->bas, &VAR_5->sc_bas, sizeof(VAR_5->sc_bas));
 VAR_5->sc_sysdev->bas.bst = VAR_1;
 VAR_5->sc_sysdev->bas.bsh = FUNC_0(VAR_0);
 VAR_5->sc_bas.bst = VAR_1;
 VAR_5->sc_bas.bsh = FUNC_0(VAR_0);
 return(FUNC_4(VAR_4, 0, 0, 0, 0, 0, 0));
}
