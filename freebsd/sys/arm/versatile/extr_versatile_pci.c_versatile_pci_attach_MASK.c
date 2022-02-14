
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {char* rm_descr; void* rm_type; } ;
struct versatile_pci_softc {int pcib_slot; int pci_iinfo; int mtx; TYPE_1__ irq_rman; TYPE_1__ io_rman; TYPE_1__ mem_rman; int mem_res; } ;
typedef int phandle_t ;
typedef int device_t ;
typedef int cell_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 void* VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ) ;
 struct versatile_pci_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (int *,int ,char*,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int *,int) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (TYPE_1__*) ;
 scalar_t__ FUNC_13 (TYPE_1__*,int,scalar_t__) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (scalar_t__,int) ;
 int FUNC_16 (int ,int) ;
 int VAR_29 ;
 int FUNC_17 (scalar_t__) ;
 int FUNC_18 (scalar_t__,int ) ;
 int FUNC_19 (int ,int) ;

__attribute__((used)) static int
FUNC_20(device_t VAR_30)
{
 struct versatile_pci_softc *VAR_31 = FUNC_6(VAR_30);
 int VAR_32;
 int VAR_33;
 uint32_t VAR_34, VAR_35;
 uint32_t VAR_36;
 phandle_t VAR_37;

 VAR_37 = FUNC_9(VAR_30);


 VAR_32 = FUNC_1(VAR_30, VAR_29,
  VAR_31->mem_res);
 if (VAR_32) {
  FUNC_7(VAR_30, "Error: could not allocate memory resources\n");
  return (VAR_0);
 }




 FUNC_16(VAR_9, (VAR_17 >> 28));
 FUNC_16(VAR_10, (VAR_19 >> 28));
 FUNC_16(VAR_11, (VAR_20 >> 28));





 FUNC_16(VAR_13, (VAR_17 >> 28));
 FUNC_16(VAR_14, (VAR_19 >> 28));
 FUNC_16(VAR_15, (VAR_19 >> 28));

 FUNC_19(VAR_23, 1);

 for (VAR_33 = 0; VAR_33 <= VAR_21; VAR_33++) {
  VAR_34 = FUNC_17((VAR_33 << 11) + VAR_7);
  VAR_35 = FUNC_17((VAR_33 << 11) + VAR_8);
  if ((VAR_34 == VAR_25) &&
      (VAR_35 == VAR_24))
   break;
 }

 if (VAR_33 == (VAR_21 + 1)) {
  FUNC_3(VAR_30, VAR_29,
      VAR_31->mem_res);
  FUNC_7(VAR_30, "Versatile PCI core not found\n");
  return (VAR_0);
 }

 VAR_31->pcib_slot = VAR_33;
 FUNC_7(VAR_30, "PCI core at slot #%d\n", VAR_33);

 FUNC_16(VAR_12, VAR_33);
 VAR_36 = FUNC_14((VAR_33 << 11) + VAR_6);
 VAR_36 |= (VAR_2 | VAR_3 | VAR_4);
 FUNC_15((VAR_33 << 11) + VAR_6, VAR_36);


 FUNC_18((VAR_33 << 11) + FUNC_0(0), 0);
 FUNC_18((VAR_33 << 11) + FUNC_0(1), 0);
 FUNC_18((VAR_33 << 11) + FUNC_0(2), 0);


 VAR_31->mem_rman.rm_type = VAR_22;
 VAR_31->mem_rman.rm_descr = "versatile PCI memory window";
 if (FUNC_12(&VAR_31->mem_rman) != 0 ||
     FUNC_13(&VAR_31->mem_rman, VAR_19,
  VAR_19 + VAR_18 - 1) != 0) {
  FUNC_11("versatile_pci_attach: failed to set up memory rman");
 }

 VAR_28 = 1;
 VAR_31->io_rman.rm_type = VAR_22;
 VAR_31->io_rman.rm_descr = "versatile PCI IO window";
 if (FUNC_12(&VAR_31->io_rman) != 0 ||
     FUNC_13(&VAR_31->io_rman, VAR_17,
  VAR_17 + VAR_16 - 1) != 0) {
  FUNC_11("versatile_pci_attach: failed to set up I/O rman");
 }

 VAR_31->irq_rman.rm_type = VAR_22;
 VAR_31->irq_rman.rm_descr = "versatile PCI IRQs";
 if (FUNC_12(&VAR_31->irq_rman) != 0 ||
     FUNC_13(&VAR_31->irq_rman, VAR_27,
         VAR_26) != 0) {
  FUNC_11("versatile_pci_attach: failed to set up IRQ rman");
 }

 FUNC_8(&VAR_31->mtx, FUNC_5(VAR_30), "versatilepci",
   VAR_1);

 VAR_36 = FUNC_14((12 << 11) + VAR_6);

 for (VAR_33 = 0; VAR_33 <= VAR_21; VAR_33++) {
  VAR_34 = FUNC_17((VAR_33 << 11) + VAR_7);
  VAR_35 = FUNC_17((VAR_33 << 11) + VAR_8);

  if (VAR_33 == VAR_31->pcib_slot)
   continue;

  if ((VAR_34 == 0xffffffff) &&
      (VAR_35 == 0xffffffff))
   continue;

  VAR_36 = FUNC_14((VAR_33 << 11) + VAR_6);
  VAR_36 |= VAR_3 | VAR_5;
  FUNC_15((VAR_33 << 11) + VAR_6, VAR_36);
 }

 FUNC_10(VAR_37, &VAR_31->pci_iinfo, sizeof(cell_t));

 FUNC_4(VAR_30, "pci", -1);
 return (FUNC_2(VAR_30));
}
