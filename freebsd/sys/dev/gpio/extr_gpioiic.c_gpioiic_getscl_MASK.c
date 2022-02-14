
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpioiic_softc {int scl_pin; } ;
typedef int device_t ;


 struct gpioiic_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct gpioiic_softc*,int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0)
{
 struct gpioiic_softc *VAR_1 = FUNC_0(VAR_0);

 return (FUNC_1(VAR_1, VAR_1->scl_pin));
}
