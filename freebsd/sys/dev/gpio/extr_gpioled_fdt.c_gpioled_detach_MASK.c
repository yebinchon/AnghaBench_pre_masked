
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpioleds_softc {int sc_total_leds; int * sc_leds; } ;
typedef int device_t ;


 int VAR_0 ;
 struct gpioleds_softc* FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1)
{
 struct gpioleds_softc *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_0(VAR_1);

 for (VAR_3 = 0; VAR_3 < VAR_2->sc_total_leds; VAR_3++)
  FUNC_2(&VAR_2->sc_leds[VAR_3]);

 if (VAR_2->sc_leds)
  FUNC_1(VAR_2->sc_leds, VAR_0);

 return (0);
}
