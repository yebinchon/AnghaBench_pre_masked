
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jzsmb_softc {scalar_t__ bus_freq; int i2c_freq; int mtx; int * clk; int res; int * iicbus; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,char*,int*,int) ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int ,int **) ;
 int FUNC_6 (int *,scalar_t__*) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int ,char*,int) ;
 int FUNC_9 (int ) ;
 struct jzsmb_softc* FUNC_10 (int ) ;
 int FUNC_11 (int ,char*) ;
 int VAR_2 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int ,char*,int ) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static int
FUNC_15(device_t VAR_3)
{
 struct jzsmb_softc *VAR_4;
 phandle_t VAR_5;
 int VAR_6;

 VAR_4 = FUNC_10(VAR_3);
 VAR_5 = FUNC_14(VAR_3);
 FUNC_13(&VAR_4->mtx, FUNC_9(VAR_3), "jzsmb", VAR_1);

 VAR_6 = FUNC_5(VAR_3, 0, 0, &VAR_4->clk);
 if (VAR_6 != 0) {
  FUNC_11(VAR_3, "cannot get clock\n");
  goto fail;
 }
 VAR_6 = FUNC_4(VAR_4->clk);
 if (VAR_6 != 0) {
  FUNC_11(VAR_3, "cannot enable clock\n");
  goto fail;
 }
 VAR_6 = FUNC_6(VAR_4->clk, &VAR_4->bus_freq);
 if (VAR_6 != 0 || VAR_4->bus_freq == 0) {
  FUNC_11(VAR_3, "cannot get bus frequency\n");
  return (VAR_6);
 }

 if (FUNC_1(VAR_3, VAR_2, &VAR_4->res) != 0) {
  FUNC_11(VAR_3, "cannot allocate resources for device\n");
  VAR_6 = VAR_0;
  goto fail;
 }

 if (FUNC_0(VAR_5, "clock-frequency", &VAR_4->i2c_freq,
     sizeof(VAR_4->i2c_freq)) != 0 || VAR_4->i2c_freq == 0)
  VAR_4->i2c_freq = 100000;

 VAR_4->iicbus = FUNC_8(VAR_3, "iicbus", -1);
 if (VAR_4->iicbus == ((void*)0)) {
  FUNC_11(VAR_3, "cannot add iicbus child device\n");
  VAR_6 = VAR_0;
  goto fail;
 }

 FUNC_2(VAR_3);

 return (0);

fail:
 FUNC_3(VAR_3, VAR_2, &VAR_4->res);
 if (VAR_4->clk != ((void*)0))
  FUNC_7(VAR_4->clk);
 FUNC_12(&VAR_4->mtx);
 return (VAR_6);
}
