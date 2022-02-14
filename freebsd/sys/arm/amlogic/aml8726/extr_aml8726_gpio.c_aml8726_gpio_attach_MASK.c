
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aml8726_gpio_softc {int npins; int * res; int * busdev; int dev; } ;
typedef int prop ;
typedef int phandle_t ;
typedef int pcell_t ;
typedef int device_t ;


 int FUNC_0 (struct aml8726_gpio_softc*) ;
 int FUNC_1 (struct aml8726_gpio_softc*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ,char*,int*,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int ,int *) ;
 struct aml8726_gpio_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_2)
{
 struct aml8726_gpio_softc *VAR_3 = FUNC_5(VAR_2);
 phandle_t VAR_4;
 pcell_t VAR_5;

 VAR_3->dev = VAR_2;

 VAR_4 = FUNC_8(VAR_2);

 if (FUNC_2(VAR_4, "pin-count",
     &VAR_5, sizeof(VAR_5)) <= 0) {
  FUNC_6(VAR_2, "missing pin-count attribute in FDT\n");
  return (VAR_0);
 }
 VAR_3->npins = VAR_5;

 if (VAR_3->npins > 32)
  return (VAR_0);

 if (FUNC_3(VAR_2, VAR_1, VAR_3->res)) {
  FUNC_6(VAR_2, "can not allocate resources for device\n");
  return (VAR_0);
 }




 if (FUNC_9(VAR_3->res[1]) == FUNC_9(VAR_3->res[0]))
   if (VAR_3->npins > 16) {
  FUNC_6(VAR_2,
      "too many pins for overlapping OEN and OUT\n");
  FUNC_4(VAR_2, VAR_1, VAR_3->res);
  return (VAR_0);
  }

 FUNC_1(VAR_3);

 VAR_3->busdev = FUNC_7(VAR_2);
 if (VAR_3->busdev == ((void*)0)) {
  FUNC_0(VAR_3);
  FUNC_4(VAR_2, VAR_1, VAR_3->res);
  return (VAR_0);
 }

 return (0);
}
