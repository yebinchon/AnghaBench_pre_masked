
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm_gpio_softc {int ** sc_intrhand; int * sc_res; } ;
typedef int device_t ;


 int FUNC_0 (struct bcm_gpio_softc*) ;
 int FUNC_1 (int ,int ,int *) ;
 struct bcm_gpio_softc* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_0)
{
 struct bcm_gpio_softc *VAR_1;

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1->sc_intrhand[0] != ((void*)0))
  FUNC_1(VAR_0, VAR_1->sc_res[1], VAR_1->sc_intrhand[0]);
 if (VAR_1->sc_intrhand[1] != ((void*)0))
  FUNC_1(VAR_0, VAR_1->sc_res[2], VAR_1->sc_intrhand[1]);

 FUNC_0(VAR_1);
}
