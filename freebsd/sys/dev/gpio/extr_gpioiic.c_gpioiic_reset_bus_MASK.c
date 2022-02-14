
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpioiic_softc {int scl_pin; int sc_dev; int sc_busdev; int sda_pin; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;
 struct gpioiic_softc* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_1)
{
 struct gpioiic_softc *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_2->sc_busdev, VAR_2->sc_dev, VAR_2->sda_pin,
     VAR_0);
 FUNC_0(VAR_2->sc_busdev, VAR_2->sc_dev, VAR_2->scl_pin,
     VAR_0);
}
