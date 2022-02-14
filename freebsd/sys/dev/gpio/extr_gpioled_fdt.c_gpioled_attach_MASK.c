
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpioleds_softc {size_t sc_total_leds; int * sc_leds; int sc_busdev; int sc_dev; } ;
struct gpioled {int dummy; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 struct gpioleds_softc* FUNC_4 (int ) ;
 int FUNC_5 (struct gpioleds_softc*,int,int *) ;
 int * FUNC_6 (int,int ,int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_4)
{
 struct gpioleds_softc *VAR_5;
 phandle_t VAR_6, VAR_7;
 int VAR_8;

 if ((VAR_7 = FUNC_7(VAR_4)) == -1)
  return (VAR_0);

 VAR_5 = FUNC_4(VAR_4);
 VAR_5->sc_dev = VAR_4;
 VAR_5->sc_busdev = FUNC_3(VAR_4);


 VAR_8 = 0;
 for (VAR_6 = FUNC_0(VAR_7); VAR_6 != 0; VAR_6 = FUNC_2(VAR_6)) {
  if (!FUNC_1(VAR_6, "gpios"))
   continue;
  VAR_8++;
 }

 if (VAR_8) {
  VAR_5->sc_leds = FUNC_6(sizeof(struct gpioled) * VAR_8,
      VAR_1, VAR_2 | VAR_3);

  VAR_5->sc_total_leds = 0;

  for (VAR_6 = FUNC_0(VAR_7); VAR_6 != 0; VAR_6 = FUNC_2(VAR_6)) {
   if (!FUNC_1(VAR_6, "gpios"))
    continue;
   FUNC_5(VAR_5, VAR_6, &VAR_5->sc_leds[VAR_5->sc_total_leds]);
   VAR_5->sc_total_leds++;
  }
 }

 return (0);
}
