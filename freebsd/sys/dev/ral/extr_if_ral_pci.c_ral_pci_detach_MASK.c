
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rt2560_softc {int sc_invalid; } ;
struct TYPE_4__ {struct rt2560_softc sc_rt2560; } ;
struct ral_pci_softc {int mem; int irq; TYPE_1__* sc_opns; int * sc_ih; TYPE_2__ u; } ;
typedef int device_t ;
struct TYPE_3__ {int (* detach ) (struct ral_pci_softc*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int *) ;
 struct ral_pci_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ral_pci_softc*) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_2)
{
 struct ral_pci_softc *VAR_3 = FUNC_4(VAR_2);
 struct rt2560_softc *VAR_4 = &VAR_3->u.sc_rt2560;


 VAR_4->sc_invalid = !FUNC_0(VAR_2);

 if (VAR_3->sc_ih != ((void*)0))
  FUNC_3(VAR_2, VAR_3->irq, VAR_3->sc_ih);
 (*VAR_3->sc_opns->detach)(VAR_3);

 FUNC_1(VAR_2);
 FUNC_2(VAR_2, VAR_0, FUNC_6(VAR_3->irq),
     VAR_3->irq);
 FUNC_5(VAR_2);

 FUNC_2(VAR_2, VAR_1, FUNC_6(VAR_3->mem),
     VAR_3->mem);

 return 0;
}
