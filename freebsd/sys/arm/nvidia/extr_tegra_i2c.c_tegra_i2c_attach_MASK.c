
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct tegra_i2c_softc {int bus_freq; int * mem_res; int * irq_res; int * irq_h; int * iicbus; int clk; scalar_t__ core_freq; int dev; int reset; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tegra_i2c_softc*) ;
 int FUNC_1 (struct tegra_i2c_softc*) ;
 int FUNC_2 (int ,char*,int*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_3 (int ,int ,int*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,int *) ;
 int FUNC_6 (int ,int *,int,int *,int ,struct tegra_i2c_softc*,int **) ;
 int FUNC_7 (int ,int *,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,char*,int *) ;
 int FUNC_10 (int ,scalar_t__*) ;
 int FUNC_11 (int ,int,int ) ;
 int * FUNC_12 (int ,char*,int) ;
 struct tegra_i2c_softc* FUNC_13 (int ) ;
 int FUNC_14 (int ,char*,...) ;
 int FUNC_15 (int ,int ,char*,int *) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct tegra_i2c_softc*) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_18(device_t VAR_8)
{
 int VAR_9, VAR_10;
 phandle_t VAR_11;
 struct tegra_i2c_softc *VAR_12;
 uint64_t VAR_13;

 VAR_12 = FUNC_13(VAR_8);
 VAR_12->dev = VAR_8;
 VAR_11 = FUNC_16(VAR_8);

 FUNC_1(VAR_12);


 VAR_10 = 0;
 VAR_12->mem_res = FUNC_3(VAR_8, VAR_6, &VAR_10,
     VAR_4);
 if (VAR_12->mem_res == ((void*)0)) {
  FUNC_14(VAR_8, "Cannot map registers.\n");
  VAR_9 = VAR_1;
  goto fail;
 }


 VAR_10 = 0;
 VAR_12->irq_res = FUNC_3(VAR_8, VAR_5, &VAR_10,
     VAR_4);
 if (VAR_12->irq_res == ((void*)0)) {
  FUNC_14(VAR_8, "Cannot allocate interrupt.\n");
  VAR_9 = VAR_1;
  goto fail;
 }


 VAR_9 = FUNC_9(VAR_8, 0, "div-clk", &VAR_12->clk);
 if (VAR_9 != 0) {
  FUNC_14(VAR_8, "Cannot get i2c clock: %d\n", VAR_9);
  goto fail;
 }
 VAR_9 = FUNC_15(VAR_12->dev, 0, "i2c", &VAR_12->reset);
 if (VAR_9 != 0) {
  FUNC_14(VAR_12->dev, "Cannot get i2c reset\n");
  return (VAR_1);
 }
 VAR_9 = FUNC_2(VAR_11, "clock-frequency", &VAR_12->bus_freq,
     sizeof(VAR_12->bus_freq));
 if (VAR_9 != sizeof(VAR_12->bus_freq)) {
  VAR_12->bus_freq = 100000;
  goto fail;
 }


 VAR_9 = FUNC_11(VAR_12->clk, 136000000, VAR_0);
 if (VAR_9 != 0) {
  FUNC_14(VAR_8, "Cannot set clock frequency\n");
  goto fail;
 }
 VAR_9 = FUNC_10(VAR_12->clk, &VAR_13);
 if (VAR_9 != 0) {
  FUNC_14(VAR_8, "Cannot get clock frequency\n");
  goto fail;
 }
 VAR_12->core_freq = (uint32_t)VAR_13;

 VAR_9 = FUNC_8(VAR_12->clk);
 if (VAR_9 != 0) {
  FUNC_14(VAR_8, "Cannot enable clock: %d\n", VAR_9);
  goto fail;
 }


 VAR_9 = FUNC_17(VAR_12);
 if (VAR_9) {
  FUNC_14(VAR_8, "tegra_i2c_activate failed\n");
  goto fail;
 }


 VAR_9 = FUNC_6(VAR_8, VAR_12->irq_res, VAR_3 | VAR_2,
     ((void*)0), VAR_7, VAR_12, &VAR_12->irq_h);
 if (VAR_9) {
  FUNC_14(VAR_8, "Cannot setup interrupt.\n");
  goto fail;
 }


 VAR_12->iicbus = FUNC_12(VAR_8, "iicbus", -1);
 if (VAR_12->iicbus == ((void*)0)) {
  FUNC_14(VAR_8, "Could not allocate iicbus instance.\n");
  VAR_9 = VAR_1;
  goto fail;
 }


 return (FUNC_4(VAR_8));

fail:
 if (VAR_12->irq_h != ((void*)0))
  FUNC_7(VAR_8, VAR_12->irq_res, VAR_12->irq_h);
 if (VAR_12->irq_res != ((void*)0))
  FUNC_5(VAR_8, VAR_5, 0, VAR_12->irq_res);
 if (VAR_12->mem_res != ((void*)0))
  FUNC_5(VAR_8, VAR_6, 0, VAR_12->mem_res);
 FUNC_0(VAR_12);

 return (VAR_9);
}
