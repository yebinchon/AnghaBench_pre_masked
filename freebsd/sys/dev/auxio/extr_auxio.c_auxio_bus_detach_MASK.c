
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auxio_softc {int sc_led_stat; int sc_led_dev; } ;
typedef int device_t ;


 int FUNC_0 (struct auxio_softc*) ;
 int FUNC_1 (struct auxio_softc*,int ) ;
 struct auxio_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_0)
{
 struct auxio_softc *VAR_1;

 VAR_1 = FUNC_2(VAR_0);
 FUNC_3(VAR_1->sc_led_dev);
 FUNC_1(VAR_1, VAR_1->sc_led_stat);
 FUNC_0(VAR_1);

 return (0);
}
