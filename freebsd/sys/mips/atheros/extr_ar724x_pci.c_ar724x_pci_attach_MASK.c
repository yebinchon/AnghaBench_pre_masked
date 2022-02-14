
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* rm_descr; void* rm_type; } ;
struct ar71xx_pci_softc {int sc_ih; int * sc_irq; TYPE_1__ sc_irq_rman; TYPE_1__ sc_mem_rman; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 void* VAR_20 ;
 int VAR_21 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_22 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ,int ,int ,int,int) ;
 int * FUNC_7 (int ,int ,int*,int) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int *,int ,int ,int *,struct ar71xx_pci_softc*,int *) ;
 int FUNC_10 (int ,char*,int) ;
 struct ar71xx_pci_softc* FUNC_11 (int ) ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (char*) ;
 scalar_t__ FUNC_14 (TYPE_1__*) ;
 scalar_t__ FUNC_15 (TYPE_1__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_16(device_t VAR_23)
{
 struct ar71xx_pci_softc *VAR_24 = FUNC_11(VAR_23);
 int VAR_25 = 0;

 VAR_24->sc_mem_rman.rm_type = VAR_20;
 VAR_24->sc_mem_rman.rm_descr = "ar724x PCI memory window";
 if (FUNC_14(&VAR_24->sc_mem_rman) != 0 ||
     FUNC_15(&VAR_24->sc_mem_rman, VAR_2,
  VAR_2 + VAR_3 - 1) != 0) {
  FUNC_13("ar724x_pci_attach: failed to set up I/O rman");
 }

 VAR_24->sc_irq_rman.rm_type = VAR_20;
 VAR_24->sc_irq_rman.rm_descr = "ar724x PCI IRQs";
 if (FUNC_14(&VAR_24->sc_irq_rman) != 0 ||
     FUNC_15(&VAR_24->sc_irq_rman, VAR_1,
         VAR_0) != 0)
  FUNC_13("ar724x_pci_attach: failed to set up IRQ rman");


 FUNC_0(VAR_5, 0);
 FUNC_0(VAR_4, 0);


 if ((VAR_24->sc_irq = FUNC_7(VAR_23, VAR_21, &VAR_25,
     VAR_19 | VAR_18)) == ((void*)0)) {
  FUNC_12(VAR_23, "unable to allocate IRQ resource\n");
  return (VAR_9);
 }

 if ((FUNC_9(VAR_23, VAR_24->sc_irq, VAR_10,
       VAR_22, ((void*)0), VAR_24, &VAR_24->sc_ih))) {
  FUNC_12(VAR_23,
      "WARNING: unable to register interrupt handler\n");
  return (VAR_9);
 }


 FUNC_3(VAR_6);
 FUNC_3(VAR_7);
 FUNC_3(VAR_8);
 FUNC_1(100);

 FUNC_2(VAR_8);
 FUNC_1(100);
 FUNC_2(VAR_7);
 FUNC_2(VAR_6);

 if (FUNC_4(VAR_23))
  return (VAR_9);






 FUNC_6(VAR_23, 0, 0, 0, VAR_17,
            VAR_12 | VAR_13
     | VAR_16 | VAR_11
     | VAR_15 | VAR_14, 2);

 FUNC_10(VAR_23, "pci", -1);
 return (FUNC_8(VAR_23));
}
