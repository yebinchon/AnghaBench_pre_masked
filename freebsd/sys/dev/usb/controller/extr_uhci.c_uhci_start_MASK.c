
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int bdev; } ;
struct TYPE_7__ {TYPE_6__ sc_bus; } ;
typedef TYPE_1__ uhci_softc_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_6__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_6(uhci_softc_t *VAR_6)
{
 FUNC_1(&VAR_6->sc_bus, VAR_0);

 FUNC_0(2, "enabling\n");



 FUNC_2(VAR_6, VAR_1,
     (VAR_5 |
     VAR_3 |
     VAR_2 |
     VAR_4));

 if (FUNC_4(VAR_6)) {
  FUNC_3(VAR_6->sc_bus.bdev,
      "cannot start HC controller\n");
 }


 FUNC_5(VAR_6);
}
