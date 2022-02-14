
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra124_car_softc {int * clkdom; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct tegra124_car_softc* FUNC_5 (int ) ;
 int FUNC_6 (struct tegra124_car_softc*,int ,int ) ;
 int FUNC_7 (struct tegra124_car_softc*,int ,int ) ;
 int FUNC_8 (struct tegra124_car_softc*,int ,int ) ;
 int FUNC_9 (struct tegra124_car_softc*,int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (struct tegra124_car_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_13 (struct tegra124_car_softc*) ;
 int VAR_4 ;
 int FUNC_14 (struct tegra124_car_softc*) ;
 int FUNC_15 (struct tegra124_car_softc*) ;

__attribute__((used)) static void
FUNC_16(device_t VAR_5)
{
 struct tegra124_car_softc *VAR_6;

 VAR_6 = FUNC_5(VAR_5);
 VAR_6->clkdom = FUNC_0(VAR_5);
 if (VAR_6->clkdom == ((void*)0))
  FUNC_11("clkdom == NULL");

 FUNC_13(VAR_6);
 FUNC_7(VAR_6, VAR_2, FUNC_10(VAR_2));
 FUNC_9(VAR_6, VAR_4, FUNC_10(VAR_4));
 FUNC_6(VAR_6, VAR_1, FUNC_10(VAR_1));
 FUNC_8(VAR_6, VAR_3, FUNC_10(VAR_3));
 FUNC_14(VAR_6);
 FUNC_15(VAR_6);
 FUNC_2(VAR_6->clkdom);
 FUNC_4(VAR_6->clkdom);
 FUNC_12(VAR_6);
 FUNC_3(VAR_6->clkdom);
 if (VAR_0)
  FUNC_1(VAR_6->clkdom);
}
