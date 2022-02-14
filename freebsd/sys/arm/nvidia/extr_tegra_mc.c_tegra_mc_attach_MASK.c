
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_mc_softc {int * mem_res; int * irq_res; int * irq_h; int * clk; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tegra_mc_softc*) ;
 int FUNC_1 (struct tegra_mc_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct tegra_mc_softc*,int ,int ) ;
 void* FUNC_3 (int ,int ,int*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,int *) ;
 int FUNC_6 (int ,int *,int,int *,int ,struct tegra_mc_softc*,int **) ;
 int FUNC_7 (int ,int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ,char*,int **) ;
 int FUNC_10 (int *) ;
 struct tegra_mc_softc* FUNC_11 (int ) ;
 int FUNC_12 (int ,char*,...) ;
 int FUNC_13 (struct tegra_mc_softc*) ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_14(device_t VAR_9)
{
 int VAR_10, VAR_11;
 struct tegra_mc_softc *VAR_12;

 VAR_12 = FUNC_11(VAR_9);
 VAR_12->dev = VAR_9;

 FUNC_1(VAR_12);


 VAR_11 = 0;
 VAR_12->mem_res = FUNC_3(VAR_9, VAR_7, &VAR_11,
     VAR_5);
 if (VAR_12->mem_res == ((void*)0)) {
  FUNC_12(VAR_9, "Cannot map registers.\n");
  VAR_10 = VAR_0;
  goto fail;
 }


 VAR_11 = 0;
 VAR_12->irq_res = FUNC_3(VAR_9, VAR_6, &VAR_11,
     VAR_5);
 if (VAR_12->irq_res == ((void*)0)) {
  FUNC_12(VAR_9, "Cannot allocate interrupt.\n");
  VAR_10 = VAR_0;
  goto fail;
 }


 VAR_10 = FUNC_9(VAR_9, 0, "mc", &VAR_12->clk);
 if (VAR_10 != 0) {
  FUNC_12(VAR_9, "Cannot get mc clock: %d\n", VAR_10);
  goto fail;
 }
 VAR_10 = FUNC_8(VAR_12->clk);
 if (VAR_10 != 0) {
  FUNC_12(VAR_9, "Cannot enable clock: %d\n", VAR_10);
  goto fail;
 }


 FUNC_13(VAR_12);


 VAR_10 = FUNC_6(VAR_9, VAR_12->irq_res, VAR_2 | VAR_1,
     ((void*)0), VAR_8, VAR_12, &VAR_12->irq_h);
 if (VAR_10) {
  FUNC_12(VAR_9, "Cannot setup interrupt.\n");
  goto fail;
 }


 FUNC_2(VAR_12, VAR_3, VAR_4);

 return (FUNC_4(VAR_9));

fail:
 if (VAR_12->clk != ((void*)0))
  FUNC_10(VAR_12->clk);
 if (VAR_12->irq_h != ((void*)0))
  FUNC_7(VAR_9, VAR_12->irq_res, VAR_12->irq_h);
 if (VAR_12->irq_res != ((void*)0))
  FUNC_5(VAR_9, VAR_6, 0, VAR_12->irq_res);
 if (VAR_12->mem_res != ((void*)0))
  FUNC_5(VAR_9, VAR_7, 0, VAR_12->mem_res);
 FUNC_0(VAR_12);

 return (VAR_10);
}
