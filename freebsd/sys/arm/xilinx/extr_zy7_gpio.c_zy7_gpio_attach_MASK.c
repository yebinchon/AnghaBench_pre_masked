
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zy7_gpio_softc {int * busdev; int * mem_res; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct zy7_gpio_softc*) ;
 int * FUNC_1 (int ,int ,int*,int ) ;
 struct zy7_gpio_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_3)
{
 struct zy7_gpio_softc *VAR_4 = FUNC_2(VAR_3);
 int VAR_5;

 VAR_4->dev = VAR_3;

 FUNC_0(VAR_4);


 VAR_5 = 0;
 VAR_4->mem_res = FUNC_1(VAR_3,
       VAR_2, &VAR_5, VAR_1);
 if (VAR_4->mem_res == ((void*)0)) {
  FUNC_3(VAR_3, "Can't allocate memory for device");
  FUNC_5(VAR_3);
  return (VAR_0);
 }

 VAR_4->busdev = FUNC_4(VAR_3);
 if (VAR_4->busdev == ((void*)0)) {
  FUNC_5(VAR_3);
  return (VAR_0);
 }

 return (0);
}
