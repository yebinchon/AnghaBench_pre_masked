
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt1310_gpio_softc {int lg_busdev; } ;
typedef int device_t ;


 struct rt1310_gpio_softc* FUNC_0 (int ) ;

__attribute__((used)) static device_t
FUNC_1(device_t VAR_0)
{
 struct rt1310_gpio_softc *VAR_1;

 VAR_1 = FUNC_0(VAR_0);

 return (VAR_1->lg_busdev);
}
