
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {char* rm_descr; void* rm_type; } ;
struct gt_pci_softc {int sc_mem; int sc_imask; int sc_elcr; unsigned int sc_reserved; int sc_ih; int * sc_irq; void* sc_ioh_elcr; int sc_st; void* sc_ioh_icu2; void* sc_ioh_icu1; scalar_t__ sc_io; TYPE_1__ sc_irq_rman; TYPE_1__ sc_mem_rman; TYPE_1__ sc_io_rman; scalar_t__ sc_busno; int sc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_0 (scalar_t__) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 void* VAR_17 ;
 int VAR_18 ;
 int * FUNC_1 (int ,int ,int*,int ,int ,int,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int *,int ,int ,int *,struct gt_pci_softc*,int *) ;
 scalar_t__ FUNC_4 (int ,int,int,int ,void**) ;
 int FUNC_5 (int ,void*,int,int) ;
 int FUNC_6 (int ,char*,int) ;
 struct gt_pci_softc* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (TYPE_1__*,int,int) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_21)
{

 uint32_t VAR_22;
 struct gt_pci_softc *VAR_23 = FUNC_7(VAR_21);
 int VAR_24;

 VAR_22 = 0;
 VAR_23->sc_dev = VAR_21;
 VAR_23->sc_busno = VAR_22;
 VAR_23->sc_st = VAR_20;


 VAR_23->sc_io = VAR_7;
 VAR_23->sc_io_rman.rm_type = VAR_17;
 VAR_23->sc_io_rman.rm_descr = "GT64120 PCI I/O Ports";




 if (FUNC_10(&VAR_23->sc_io_rman) != 0 ||
     FUNC_11(&VAR_23->sc_io_rman, 0x100, 0xffff) != 0) {
  FUNC_9("gt_pci_attach: failed to set up I/O rman");
 }


 VAR_23->sc_mem = VAR_8;
 VAR_23->sc_mem_rman.rm_type = VAR_17;
 VAR_23->sc_mem_rman.rm_descr = "GT64120 PCI Memory";
 if (FUNC_10(&VAR_23->sc_mem_rman) != 0 ||
     FUNC_11(&VAR_23->sc_mem_rman,
     VAR_23->sc_mem, VAR_23->sc_mem + VAR_9) != 0) {
  FUNC_9("gt_pci_attach: failed to set up memory rman");
 }
 VAR_23->sc_irq_rman.rm_type = VAR_17;
 VAR_23->sc_irq_rman.rm_descr = "GT64120 PCI IRQs";
 if (FUNC_10(&VAR_23->sc_irq_rman) != 0 ||
     FUNC_11(&VAR_23->sc_irq_rman, 1, 31) != 0)
  FUNC_9("gt_pci_attach: failed to set up IRQ rman");
 VAR_23->sc_ioh_elcr = FUNC_0(VAR_23->sc_io + 0x4d0);
 VAR_23->sc_ioh_icu1 = FUNC_0(VAR_23->sc_io + VAR_5);
 VAR_23->sc_ioh_icu2 = FUNC_0(VAR_23->sc_io + VAR_6);




 VAR_23->sc_imask = 0xffff;


 VAR_23->sc_elcr = 0;





 FUNC_5(VAR_23->sc_st, VAR_23->sc_ioh_icu1, 0,
     VAR_2 | VAR_1);



 FUNC_5(VAR_23->sc_st, VAR_23->sc_ioh_icu1, 1,
     0 );
 FUNC_5(VAR_23->sc_st, VAR_23->sc_ioh_icu1, 1,
     1 << 2);
 FUNC_5(VAR_23->sc_st, VAR_23->sc_ioh_icu1, 1,
     VAR_3);


 FUNC_5(VAR_23->sc_st, VAR_23->sc_ioh_icu1, 1,
     VAR_23->sc_imask & 0xff);


 FUNC_5(VAR_23->sc_st, VAR_23->sc_ioh_icu1, 0,
     VAR_13 | VAR_11 | VAR_14);


 FUNC_5(VAR_23->sc_st, VAR_23->sc_ioh_icu1, 0,
     VAR_13 | VAR_12);


 FUNC_5(VAR_23->sc_st, VAR_23->sc_ioh_icu2, 0,
     VAR_2 | VAR_1);
 FUNC_5(VAR_23->sc_st, VAR_23->sc_ioh_icu2, 1,
     0 );
 FUNC_5(VAR_23->sc_st, VAR_23->sc_ioh_icu2, 1,
     1 << 2);
 FUNC_5(VAR_23->sc_st, VAR_23->sc_ioh_icu2, 1,
     VAR_3);


 FUNC_5(VAR_23->sc_st, VAR_23->sc_ioh_icu2, 1,
     VAR_23->sc_imask & 0xff);


 FUNC_5(VAR_23->sc_st, VAR_23->sc_ioh_icu2, 0,
     VAR_13 | VAR_11 | VAR_14);


 FUNC_5(VAR_23->sc_st, VAR_23->sc_ioh_icu2, 0,
     VAR_13 | VAR_12);




 FUNC_5(VAR_23->sc_st, VAR_23->sc_ioh_elcr, 0,
     VAR_23->sc_elcr & 0xff);
 FUNC_5(VAR_23->sc_st, VAR_23->sc_ioh_elcr, 1,
     (VAR_23->sc_elcr >> 8) & 0xff);





 VAR_23->sc_reserved =
  (1U << 0) |
  (1U << 1) |
  (1U << 2) |
  (1U << 3) |
  (1U << 4) |
  (1U << 6) |
  (1U << 7) |
  (1U << 8) |
  (1U << 9) |
  (1U << 12) |
  (1U << 14) |
  (1U << 15);


 if ((VAR_23->sc_irq = FUNC_1(VAR_21, VAR_18, &VAR_24,
     VAR_10, VAR_10, 1,
     VAR_16 | VAR_15)) == ((void*)0)) {
  FUNC_8(VAR_21, "unable to allocate IRQ resource\n");
  return VAR_0;
 }

 if ((FUNC_3(VAR_21, VAR_23->sc_irq, VAR_4,
       VAR_19, ((void*)0), VAR_23, &VAR_23->sc_ih))) {
  FUNC_8(VAR_21,
      "WARNING: unable to register interrupt handler\n");
  return VAR_0;
 }


 FUNC_6(VAR_21, "pci", -1);
 return (FUNC_2(VAR_21));
}
