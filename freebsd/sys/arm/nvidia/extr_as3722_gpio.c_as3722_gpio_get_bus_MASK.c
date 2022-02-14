
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct as3722_softc {int gpio_busdev; } ;
typedef int device_t ;


 struct as3722_softc* FUNC_0 (int ) ;

device_t
FUNC_1(device_t VAR_0)
{
 struct as3722_softc *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 return (VAR_1->gpio_busdev);
}
