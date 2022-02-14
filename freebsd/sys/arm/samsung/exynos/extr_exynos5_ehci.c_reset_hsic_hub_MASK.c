
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_ehci_softc {int dev; } ;
typedef int pin ;
typedef int phandle_t ;
typedef int pcell_t ;
typedef int * device_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ) ;
 scalar_t__ FUNC_2 (int ,char*,int *,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*) ;
 int * FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static int
FUNC_7(struct exynos_ehci_softc *VAR_2, phandle_t VAR_3)
{
 device_t VAR_4;
 pcell_t VAR_5;


 if (!FUNC_3(VAR_3, "freebsd,reset-gpio")) {
  return (1);
 }

 if (FUNC_2(VAR_3, "freebsd,reset-gpio", &VAR_5, sizeof(VAR_5)) < 0) {
  FUNC_6(VAR_2->dev,
      "failed to decode reset GPIO pin number for HSIC hub\n");
  return (1);
 }


 VAR_4 = FUNC_5(FUNC_4("gpio"), 0);
 if (VAR_4 == ((void*)0)) {
  FUNC_6(VAR_2->dev, "Cant find gpio device\n");
  return (1);
 }

 FUNC_1(VAR_4, VAR_5, VAR_1);
 FUNC_0(100);
 FUNC_1(VAR_4, VAR_5, VAR_0);

 return (0);
}
