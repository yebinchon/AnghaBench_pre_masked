
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ti_spi_softc {int sc_numcs; int sc_mtx; void* sc_mem_res; void* sc_irq_res; int sc_intrhand; int sc_bsh; int sc_bst; int sc_dev; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
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
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ FUNC_2 (int ,char*,int*,int) ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_3 (struct ti_spi_softc*,int ) ;
 int FUNC_4 (struct ti_spi_softc*,int ,int) ;
 void* FUNC_5 (int ,int ,int*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ,void*) ;
 scalar_t__ FUNC_8 (int ,void*,int,int *,int ,struct ti_spi_softc*,int *) ;
 int FUNC_9 (int ,char*,int) ;
 struct ti_spi_softc* FUNC_10 (int ) ;
 int FUNC_11 (int ,char*,...) ;
 int FUNC_12 (int *,char*,int *,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (void*) ;
 int FUNC_15 (void*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int ) ;
 int VAR_33 ;
 int FUNC_19 (int ) ;
 int FUNC_20 (struct ti_spi_softc*,int,int) ;

__attribute__((used)) static int
FUNC_21(device_t VAR_34)
{
 int VAR_35, VAR_36, VAR_37, VAR_38, VAR_39;
 struct ti_spi_softc *VAR_40;
 uint32_t VAR_41;

 VAR_40 = FUNC_10(VAR_34);
 VAR_40->sc_dev = VAR_34;







 VAR_35 = FUNC_16(VAR_34);
 if (VAR_35 == VAR_4) {
  FUNC_11(VAR_34,
      "failed to get clock based on hwmods property\n");
  return (VAR_0);
 }


 VAR_36 = FUNC_17(VAR_35);
 if (VAR_36) {
  FUNC_11(VAR_34, "Error: failed to activate source clock\n");
  return (VAR_36);
 }


 if ((FUNC_2(FUNC_13(VAR_34), "ti,spi-num-cs",
     &VAR_40->sc_numcs, sizeof(VAR_40->sc_numcs))) <= 0) {
  VAR_40->sc_numcs = 2;
 }

 VAR_38 = 0;
 VAR_40->sc_mem_res = FUNC_5(VAR_34, VAR_32, &VAR_38,
     VAR_30);
 if (!VAR_40->sc_mem_res) {
  FUNC_11(VAR_34, "cannot allocate memory window\n");
  return (VAR_1);
 }

 VAR_40->sc_bst = FUNC_15(VAR_40->sc_mem_res);
 VAR_40->sc_bsh = FUNC_14(VAR_40->sc_mem_res);

 VAR_38 = 0;
 VAR_40->sc_irq_res = FUNC_5(VAR_34, VAR_31, &VAR_38,
     VAR_30);
 if (!VAR_40->sc_irq_res) {
  FUNC_7(VAR_34, VAR_32, 0, VAR_40->sc_mem_res);
  FUNC_11(VAR_34, "cannot allocate interrupt\n");
  return (VAR_1);
 }


 if (FUNC_8(VAR_34, VAR_40->sc_irq_res, VAR_3 | VAR_2,
     ((void*)0), VAR_33, VAR_40, &VAR_40->sc_intrhand)) {
  FUNC_7(VAR_34, VAR_31, 0, VAR_40->sc_irq_res);
  FUNC_7(VAR_34, VAR_32, 0, VAR_40->sc_mem_res);
  FUNC_11(VAR_34, "cannot setup the interrupt handler\n");
  return (VAR_1);
 }

 FUNC_12(&VAR_40->sc_mtx, "ti_spi", ((void*)0), VAR_29);


 FUNC_4(VAR_40, VAR_25, VAR_26);
 VAR_39 = 1000;
 while (!(FUNC_3(VAR_40, VAR_27) &
     VAR_28)) {
  if (--VAR_39 == 0) {
   FUNC_11(VAR_34,
       "Error: Controller reset operation timed out\n");
   FUNC_18(VAR_34);
   return (VAR_1);
  }
  FUNC_0(100);
 }


 VAR_41 = FUNC_3(VAR_40, VAR_12);
 FUNC_11(VAR_34,
     "scheme: %#x func: %#x rtl: %d rev: %d.%d custom rev: %d\n",
     (VAR_41 >> VAR_24) & VAR_23,
     (VAR_41 >> VAR_16) & VAR_15,
     (VAR_41 >> VAR_22) & VAR_21,
     (VAR_41 >> VAR_18) & VAR_17,
     (VAR_41 >> VAR_20) & VAR_19,
     (VAR_41 >> VAR_14) & VAR_13);


 FUNC_4(VAR_40, VAR_10, VAR_11);


 FUNC_4(VAR_40, VAR_8, 0x0);
 FUNC_4(VAR_40, VAR_9, 0xffff);

 for (VAR_37 = 0; VAR_37 < VAR_40->sc_numcs; VAR_37++) {




  FUNC_4(VAR_40, FUNC_1(VAR_37),
      VAR_5 | VAR_6 |
      (8 - 1) << VAR_7);

  FUNC_20(VAR_40, VAR_37, 500000);
 }





 FUNC_9(VAR_34, "spibus", -1);

 return (FUNC_6(VAR_34));
}
