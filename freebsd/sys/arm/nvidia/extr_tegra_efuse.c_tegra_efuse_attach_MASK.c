
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_efuse_softc {int * mem_res; int * reset; int * clk; int fuse_begin; int dev; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_0 (int ,int ,int*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,char*,int **) ;
 int FUNC_5 (int *) ;
 struct tegra_efuse_softc* VAR_5 ;
 struct tegra_efuse_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ,char*,int **) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct tegra_efuse_softc*,int *) ;
 int FUNC_13 () ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_14(device_t VAR_7)
{
 int VAR_8, VAR_9;
 phandle_t VAR_10;
 struct tegra_efuse_softc *VAR_11;

 VAR_11 = FUNC_6(VAR_7);
 VAR_11->dev = VAR_7;
 VAR_10 = FUNC_11(VAR_7);


 VAR_9 = 0;
 VAR_11->mem_res = FUNC_0(VAR_7, VAR_2, &VAR_9,
     VAR_1);
 if (VAR_11->mem_res == ((void*)0)) {
  FUNC_7(VAR_7, "Cannot map registers.\n");
  VAR_8 = VAR_0;
  goto fail;
 }


 VAR_8 = FUNC_4(VAR_7, 0, "fuse", &VAR_11->clk);
 if (VAR_8 != 0) {
  FUNC_7(VAR_7, "Cannot get fuse clock: %d\n", VAR_8);
  goto fail;
 }
 VAR_8 = FUNC_3(VAR_11->clk);
 if (VAR_8 != 0) {
  FUNC_7(VAR_7, "Cannot enable clock: %d\n", VAR_8);
  goto fail;
 }
 VAR_8 = FUNC_9(VAR_11->dev, 0, "fuse", &VAR_11->reset);
 if (VAR_8 != 0) {
  FUNC_7(VAR_7, "Cannot get fuse reset\n");
  goto fail;
 }
 VAR_8 = FUNC_8(VAR_11->reset);
 if (VAR_8 != 0) {
  FUNC_7(VAR_11->dev, "Cannot clear reset\n");
  goto fail;
 }


 VAR_11->fuse_begin = VAR_3;
 FUNC_12(VAR_11, &VAR_6);

 VAR_5 = VAR_11;

 if (VAR_4)
  FUNC_13();
 return (FUNC_1(VAR_7));

fail:
 VAR_5 = ((void*)0);
 if (VAR_11->clk != ((void*)0))
  FUNC_5(VAR_11->clk);
 if (VAR_11->reset != ((void*)0))
  FUNC_10(VAR_11->reset);
 if (VAR_11->mem_res != ((void*)0))
  FUNC_2(VAR_7, VAR_2, 0, VAR_11->mem_res);

 return (VAR_8);
}
