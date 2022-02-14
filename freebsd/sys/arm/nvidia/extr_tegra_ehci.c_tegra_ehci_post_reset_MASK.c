
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int bdev; } ;
struct ehci_softc {TYPE_1__ sc_bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ehci_softc*,int ) ;
 int FUNC_1 (struct ehci_softc*,int ,int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void
FUNC_3(struct ehci_softc *VAR_3)
{
 uint32_t VAR_4;


 VAR_4 = FUNC_0(VAR_3, VAR_2);
 VAR_4 &= ~VAR_0;
 VAR_4 |= VAR_1;
 FUNC_2(VAR_3->sc_bus.bdev, "set host controller mode\n");
 FUNC_1(VAR_3, VAR_2, VAR_4);
}
