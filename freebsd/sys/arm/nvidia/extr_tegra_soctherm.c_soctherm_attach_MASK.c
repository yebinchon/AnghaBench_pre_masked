
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soctherm_softc {int ntsensors; int * mem_res; int * irq_res; int * reset; int * soctherm_clk; int * tsensor_clk; int * irq_ih; int dev; scalar_t__ tsensors; } ;
struct soctherm_shared_cal {int dummy; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct soctherm_softc*,int ,int ) ;
 void* FUNC_3 (int ,int ,int*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,int *) ;
 int FUNC_6 (int ,int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ,char*,int **) ;
 int FUNC_9 (int *) ;
 struct soctherm_softc* FUNC_10 (int ) ;
 int FUNC_11 (int ,char*,...) ;
 int FUNC_12 (struct soctherm_softc*,struct soctherm_shared_cal*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,int ,char*,int **) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (scalar_t__) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (struct soctherm_softc*) ;
 int FUNC_20 (struct soctherm_softc*,scalar_t__,struct soctherm_shared_cal*) ;
 int VAR_8 ;
 int FUNC_21 (int *) ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static int
FUNC_22(device_t VAR_10)
{
 struct soctherm_softc *VAR_11;
 phandle_t VAR_12;
 int VAR_13, VAR_14, VAR_15;
 struct soctherm_shared_cal VAR_16;

 VAR_11 = FUNC_10(VAR_10);
 VAR_11->dev = VAR_10;
 VAR_12 = FUNC_18(VAR_11->dev);

 VAR_14 = 0;
 VAR_11->mem_res = FUNC_3(VAR_10, VAR_3, &VAR_14,
     VAR_1);
 if (VAR_11->mem_res == ((void*)0)) {
  FUNC_11(VAR_10, "Cannot allocate memory resources\n");
  goto fail;
 }

 VAR_14 = 0;
 VAR_11->irq_res = FUNC_3(VAR_10, VAR_2, &VAR_14, VAR_1);
 if (VAR_11->irq_res == ((void*)0)) {
  FUNC_11(VAR_10, "Cannot allocate IRQ resources\n");
  goto fail;
 }
 VAR_15 = FUNC_15(VAR_10, 0, "soctherm", &VAR_11->reset);
 if (VAR_15 != 0) {
  FUNC_11(VAR_10, "Cannot get fuse reset\n");
  goto fail;
 }
 VAR_15 = FUNC_8(VAR_10, 0, "tsensor", &VAR_11->tsensor_clk);
 if (VAR_15 != 0) {
  FUNC_11(VAR_10, "Cannot get 'tsensor' clock: %d\n", VAR_15);
  goto fail;
 }
 VAR_15 = FUNC_8(VAR_10, 0, "soctherm", &VAR_11->soctherm_clk);
 if (VAR_15 != 0) {
  FUNC_11(VAR_10, "Cannot get 'soctherm' clock: %d\n", VAR_15);
  goto fail;
 }

 VAR_15 = FUNC_13(VAR_11->reset);
 if (VAR_15 != 0) {
  FUNC_11(VAR_10, "Cannot assert reset\n");
  goto fail;
 }
 VAR_15 = FUNC_7(VAR_11->tsensor_clk);
 if (VAR_15 != 0) {
  FUNC_11(VAR_10, "Cannot enable 'tsensor' clock: %d\n", VAR_15);
  goto fail;
 }
 VAR_15 = FUNC_7(VAR_11->soctherm_clk);
 if (VAR_15 != 0) {
  FUNC_11(VAR_10, "Cannot enable 'soctherm' clock: %d\n", VAR_15);
  goto fail;
 }
 VAR_15 = FUNC_14(VAR_11->reset);
 if (VAR_15 != 0) {
  FUNC_11(VAR_10, "Cannot clear reset\n");
  goto fail;
 }


 VAR_11->tsensors = VAR_9;
 VAR_11->ntsensors = FUNC_17(VAR_9);
 FUNC_12(VAR_11, &VAR_16);

 FUNC_2(VAR_11, VAR_6, VAR_7);
 FUNC_2(VAR_11, VAR_4, VAR_5);

 for (VAR_13 = 0; VAR_13 < VAR_11->ntsensors; VAR_13++)
  FUNC_20(VAR_11, VAR_11->tsensors + VAR_13, &VAR_16);

 VAR_15 = FUNC_19(VAR_11);
 if (VAR_15 != 0) {
  FUNC_11(VAR_11->dev, "Cannot initialize sysctls\n");
  goto fail;
 }

 FUNC_0(FUNC_1(VAR_12), VAR_10);
 return (FUNC_4(VAR_10));

fail:
 if (VAR_11->irq_ih != ((void*)0))
  FUNC_6(VAR_10, VAR_11->irq_res, VAR_11->irq_ih);
 FUNC_21(&VAR_8);
 if (VAR_11->tsensor_clk != ((void*)0))
  FUNC_9(VAR_11->tsensor_clk);
 if (VAR_11->soctherm_clk != ((void*)0))
  FUNC_9(VAR_11->soctherm_clk);
 if (VAR_11->reset != ((void*)0))
  FUNC_16(VAR_11->reset);
 if (VAR_11->irq_res != ((void*)0))
  FUNC_5(VAR_10, VAR_2, 0, VAR_11->irq_res);
 if (VAR_11->mem_res != ((void*)0))
  FUNC_5(VAR_10, VAR_3, 0, VAR_11->mem_res);

 return (VAR_0);
}
