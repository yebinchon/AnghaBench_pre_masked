
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk_gpio_softc {int * sc_busdev; int clk; int * sc_res; int sc_bsh; int sc_bst; int sc_mtx; int sc_dev; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int *) ;
 int FUNC_5 (int ) ;
 struct rk_gpio_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,...) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,char*,char*,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int VAR_2 ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static int
FUNC_15(device_t VAR_3)
{
 struct rk_gpio_softc *VAR_4;
 phandle_t VAR_5;
 int VAR_6;

 VAR_4 = FUNC_6(VAR_3);
 VAR_4->sc_dev = VAR_3;

 VAR_5 = FUNC_11(VAR_4->sc_dev);
 if (!FUNC_0(VAR_5, "gpio-controller"))
  return (VAR_0);

 FUNC_10(&VAR_4->sc_mtx, "rk gpio", "gpio", VAR_1);

 if (FUNC_1(VAR_3, VAR_2, VAR_4->sc_res)) {
  FUNC_7(VAR_3, "could not allocate resources\n");
  FUNC_2(VAR_3, VAR_2, VAR_4->sc_res);
  FUNC_9(&VAR_4->sc_mtx);
  return (VAR_0);
 }

 VAR_4->sc_bst = FUNC_14(VAR_4->sc_res[0]);
 VAR_4->sc_bsh = FUNC_13(VAR_4->sc_res[0]);

 if (FUNC_4(VAR_3, 0, 0, &VAR_4->clk) != 0) {
  FUNC_7(VAR_3, "Cannot get clock\n");
  FUNC_12(VAR_3);
  return (VAR_0);
 }
 VAR_6 = FUNC_3(VAR_4->clk);
 if (VAR_6 != 0) {
  FUNC_7(VAR_3, "Could not enable clock %s\n",
      FUNC_5(VAR_4->clk));
  FUNC_12(VAR_3);
  return (VAR_0);
 }

 VAR_4->sc_busdev = FUNC_8(VAR_3);
 if (VAR_4->sc_busdev == ((void*)0)) {
  FUNC_12(VAR_3);
  return (VAR_0);
 }

 return (0);
}
