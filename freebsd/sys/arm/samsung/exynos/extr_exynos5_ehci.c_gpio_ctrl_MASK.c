
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_ehci_softc {int dev; } ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int
FUNC_5(struct exynos_ehci_softc *VAR_5, int VAR_6, int VAR_7)
{
 device_t VAR_8;


 VAR_8 = FUNC_3(FUNC_2("gpio"), 0);
 if (VAR_8 == ((void*)0)) {
  FUNC_4(VAR_5->dev, "cant find gpio_dev\n");
  return (1);
 }

 if (VAR_7)
  FUNC_0(VAR_8, VAR_4, VAR_0);
 else
  FUNC_0(VAR_8, VAR_4, VAR_2);

 if (VAR_6)
  FUNC_1(VAR_8, VAR_4, VAR_3);
 else
  FUNC_1(VAR_8, VAR_4, VAR_1);

 return (0);
}
