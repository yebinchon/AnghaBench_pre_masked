
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct a37x0_gpio_softc {scalar_t__ sc_npins; scalar_t__ sc_max_pins; int * sc_busdev; int syscon; } ;
typedef scalar_t__ pcell_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,void**) ;
 int FUNC_1 (scalar_t__*) ;
 struct a37x0_gpio_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_1)
{
 int VAR_2, VAR_3;
 pcell_t *VAR_4;
 struct a37x0_gpio_softc *VAR_5;

 VAR_5 = FUNC_2(VAR_1);

 VAR_2 = FUNC_6(VAR_1, &VAR_5->syscon);
 if (VAR_2 != 0) {
  FUNC_3(VAR_1, "Cannot get syscon handle from parent\n");
  return (VAR_0);
 }


 VAR_3 = FUNC_0(FUNC_5(VAR_1), "gpio-ranges",
     (void **)&VAR_4);
 if (VAR_3 == -1)
  return (VAR_0);
 if (VAR_3 != sizeof(*VAR_4) * 4 || VAR_4[1] != 0 || VAR_4[2] != 0) {
  FUNC_1(VAR_4);
  return (VAR_0);
 }
 VAR_5->sc_npins = VAR_4[3];
 FUNC_1(VAR_4);


 if (VAR_5->sc_npins > VAR_5->sc_max_pins)
  return (VAR_0);

 VAR_5->sc_busdev = FUNC_4(VAR_1);
 if (VAR_5->sc_busdev == ((void*)0))
  return (VAR_0);

 return (0);
}
