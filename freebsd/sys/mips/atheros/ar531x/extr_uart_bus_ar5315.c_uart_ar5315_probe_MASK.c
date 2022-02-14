
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int regshft; void* bsh; void* bst; } ;
struct uart_softc {TYPE_2__ sc_bas; TYPE_3__* sc_sysdev; int * sc_class; } ;
typedef int device_t ;
struct TYPE_4__ {int regshft; void* bsh; void* bst; } ;
struct TYPE_6__ {TYPE_1__ bas; } ;


 TYPE_3__* FUNC_0 (int *) ;
 int FUNC_1 () ;
 void* FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*,int) ;
 struct uart_softc* FUNC_4 (int ) ;
 void* VAR_0 ;
 int FUNC_5 (int ,int,int ,int ,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_6(device_t VAR_3)
{
 struct uart_softc *VAR_4;
 uint64_t VAR_5;

 VAR_5 = FUNC_1();

 VAR_4 = FUNC_4(VAR_3);
 VAR_4->sc_sysdev = FUNC_0(&VAR_2);
 VAR_4->sc_class = &VAR_1;
 FUNC_3(&VAR_4->sc_sysdev->bas, &VAR_4->sc_bas, sizeof(VAR_4->sc_bas));
 VAR_4->sc_sysdev->bas.regshft = 2;
 VAR_4->sc_sysdev->bas.bst = VAR_0;
 VAR_4->sc_sysdev->bas.bsh = FUNC_2() + 3;
 VAR_4->sc_bas.regshft = 2;
 VAR_4->sc_bas.bst = VAR_0;
 VAR_4->sc_bas.bsh = FUNC_2() + 3;

 return (FUNC_5(VAR_3, 2, 0, VAR_5, 0, 0, 0));
}
