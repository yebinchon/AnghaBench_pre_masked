
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {void* bsh; void* bst; scalar_t__ regshft; } ;
struct uart_softc {TYPE_2__ sc_bas; TYPE_3__* sc_sysdev; int * sc_class; } ;
typedef int device_t ;
struct TYPE_4__ {void* bsh; void* bst; scalar_t__ regshft; } ;
struct TYPE_6__ {TYPE_1__ bas; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*,int) ;
 struct uart_softc* FUNC_4 (int ) ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ,int,int ,int ,int ,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_6(device_t VAR_4)
{
 struct uart_softc *VAR_5;
 uint64_t VAR_6;

 VAR_6 = FUNC_2();

 VAR_5 = FUNC_4(VAR_4);
 VAR_5->sc_sysdev = FUNC_1(&VAR_3);
 VAR_5->sc_class = &VAR_2;
 FUNC_3(&VAR_5->sc_sysdev->bas, &VAR_5->sc_bas, sizeof(VAR_5->sc_bas));
 VAR_5->sc_sysdev->bas.regshft = 0;
 VAR_5->sc_sysdev->bas.bst = VAR_1;
 VAR_5->sc_sysdev->bas.bsh = FUNC_0(VAR_0);
 VAR_5->sc_bas.regshft = 0;
 VAR_5->sc_bas.bst = VAR_1;
 VAR_5->sc_bas.bsh = FUNC_0(VAR_0);

 return (FUNC_5(VAR_4, 2, 0, VAR_6, 0, 0, 0));
}
