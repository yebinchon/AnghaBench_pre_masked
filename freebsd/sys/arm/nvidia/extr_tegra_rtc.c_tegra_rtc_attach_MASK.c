
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_rtc_softc {int * mem_res; int * irq_res; int * irq_h; int * clk; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tegra_rtc_softc*) ;
 int FUNC_1 (struct tegra_rtc_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct tegra_rtc_softc*,int ,int) ;
 void* FUNC_3 (int ,int ,int*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,int *) ;
 int FUNC_6 (int ,int *,int,int *,int ,struct tegra_rtc_softc*,int **) ;
 int FUNC_7 (int ,int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ,int ,int **) ;
 int FUNC_10 (int *) ;
 struct tegra_rtc_softc* FUNC_11 (int ) ;
 int FUNC_12 (int ,char*,...) ;
 int VAR_10 ;

__attribute__((used)) static int
FUNC_13(device_t VAR_11)
{
 int VAR_12, VAR_13;
 struct tegra_rtc_softc *VAR_14;

 VAR_14 = FUNC_11(VAR_11);
 VAR_14->dev = VAR_11;

 FUNC_1(VAR_14);


 VAR_13 = 0;
 VAR_14->mem_res = FUNC_3(VAR_11, VAR_9, &VAR_13,
     VAR_3);
 if (VAR_14->mem_res == ((void*)0)) {
  FUNC_12(VAR_11, "Cannot map registers.\n");
  VAR_12 = VAR_0;
  goto fail;
 }


 VAR_13 = 0;
 VAR_14->irq_res = FUNC_3(VAR_11, VAR_8, &VAR_13,
     VAR_3);
 if (VAR_14->irq_res == ((void*)0)) {
  FUNC_12(VAR_11, "Cannot allocate interrupt.\n");
  VAR_12 = VAR_0;
  goto fail;
 }


 VAR_12 = FUNC_9(VAR_11, 0, 0, &VAR_14->clk);
 if (VAR_12 != 0) {
  FUNC_12(VAR_11, "Cannot get i2c clock: %d\n", VAR_12);
  goto fail;
 }
 VAR_12 = FUNC_8(VAR_14->clk);
 if (VAR_12 != 0) {
  FUNC_12(VAR_11, "Cannot enable clock: %d\n", VAR_12);
  goto fail;
 }


 FUNC_2(VAR_14, VAR_6, 0);
 FUNC_2(VAR_14, VAR_7, 0);
 FUNC_2(VAR_14, VAR_5, 0xFFFFFFFF);
 FUNC_2(VAR_14, VAR_4, 0);


 VAR_12 = FUNC_6(VAR_11, VAR_14->irq_res, VAR_2 | VAR_1,
     ((void*)0), VAR_10, VAR_14, &VAR_14->irq_h);
 if (VAR_12) {
  FUNC_12(VAR_11, "Cannot setup interrupt.\n");
  goto fail;
 }
 return (FUNC_4(VAR_11));

fail:
 if (VAR_14->clk != ((void*)0))
  FUNC_10(VAR_14->clk);
 if (VAR_14->irq_h != ((void*)0))
  FUNC_7(VAR_11, VAR_14->irq_res, VAR_14->irq_h);
 if (VAR_14->irq_res != ((void*)0))
  FUNC_5(VAR_11, VAR_8, 0, VAR_14->irq_res);
 if (VAR_14->mem_res != ((void*)0))
  FUNC_5(VAR_11, VAR_9, 0, VAR_14->mem_res);
 FUNC_0(VAR_14);

 return (VAR_12);
}
