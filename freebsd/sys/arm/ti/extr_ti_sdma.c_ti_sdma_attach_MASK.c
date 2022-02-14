
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_sdma_softc {int sc_active_channels; int sc_hw_rev; int * sc_irq_res; int sc_dev; int * sc_mem_res; } ;
typedef int device_t ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct ti_sdma_softc*) ;
 void* FUNC_2 (int ,int ,int*,int) ;
 int FUNC_3 (int ,int *,int,int *,int ,int *,void**) ;
 int FUNC_4 (int ) ;
 struct ti_sdma_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,...) ;
 int VAR_12 ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (int ) ;
 int VAR_13 ;
 scalar_t__ FUNC_10 (struct ti_sdma_softc*) ;
 int FUNC_11 (struct ti_sdma_softc*) ;
 int FUNC_12 (struct ti_sdma_softc*,int ) ;
 struct ti_sdma_softc* VAR_14 ;
 int FUNC_13 (struct ti_sdma_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_14(device_t VAR_15)
{
 struct ti_sdma_softc *VAR_16 = FUNC_5(VAR_15);
 unsigned int VAR_17;
 unsigned int VAR_18;
 int VAR_19;
 void *VAR_20;
 int VAR_21;


 VAR_16->sc_dev = VAR_15;


 VAR_16->sc_active_channels = 0x00000000;


 FUNC_1(VAR_16);


 VAR_19 = 0;
 VAR_16->sc_mem_res = FUNC_2(VAR_15, VAR_11, &VAR_19, VAR_7);
 if (VAR_16->sc_mem_res == ((void*)0))
  FUNC_7("%s: Cannot map registers", FUNC_4(VAR_15));


 FUNC_9(VAR_9);


 VAR_16->sc_hw_rev = FUNC_12(VAR_16, VAR_1);
 FUNC_6(VAR_15, "sDMA revision %08x\n", VAR_16->sc_hw_rev);

 if (!FUNC_11(VAR_16) && !FUNC_10(VAR_16)) {
  FUNC_6(VAR_16->sc_dev, "error - unknown sDMA H/W revision\n");
  return (VAR_3);
 }


 for (VAR_18 = 0; VAR_18 < VAR_6; VAR_18++) {
  FUNC_13(VAR_16, FUNC_0(VAR_18), 0x00000000);
 }


 if (FUNC_10(VAR_16)) {


  FUNC_13(VAR_16, VAR_0, 0x0002);


  VAR_17 = (VAR_12 < 10) ? 1 : ((100 * VAR_12) / 1000);


  while ((FUNC_12(VAR_16, VAR_2) & 0x1) == 0x0) {


   FUNC_8("DMARESET", 1);

   if (VAR_17-- == 0) {
    FUNC_6(VAR_16->sc_dev, "sDMA reset operation timed out\n");
    return (VAR_3);
   }
  }
 }





 VAR_19 = 0;
 VAR_16->sc_irq_res = FUNC_2(VAR_15, VAR_10, &VAR_19,
     VAR_7 | VAR_8);
 if (VAR_16->sc_irq_res == ((void*)0))
  FUNC_7("Unable to setup the dma irq handler.\n");

 VAR_21 = FUNC_3(VAR_15, VAR_16->sc_irq_res, VAR_5 | VAR_4,
     ((void*)0), VAR_13, ((void*)0), &VAR_20);
 if (VAR_21)
  FUNC_7("%s: Cannot register IRQ", FUNC_4(VAR_15));


 VAR_14 = VAR_16;

 return (0);
}
