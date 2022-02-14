
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct bcm_gpio_softc {int sc_gpio_npins; int sc_mtx; int * sc_res; int * sc_busdev; TYPE_1__* sc_gpio_pins; int sc_dev; int sc_bsh; int sc_bst; } ;
typedef int phandle_t ;
typedef int device_t ;
struct TYPE_2__ {int gp_pin; int gp_flags; int gp_caps; int gp_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bcm_gpio_softc*,int) ;
 int FUNC_3 (struct bcm_gpio_softc*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_5 ;
 struct bcm_gpio_softc* VAR_6 ;
 int FUNC_6 (struct bcm_gpio_softc*) ;
 scalar_t__ FUNC_7 (int ,int ,int *) ;
 int FUNC_8 (int ,int ,int *) ;
 struct bcm_gpio_softc* FUNC_9 (int ) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*) ;
 int * FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,char*,char*,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,int ,char*,int) ;

__attribute__((used)) static int
FUNC_20(device_t VAR_7)
{
 int VAR_8, VAR_9;
 phandle_t VAR_10;
 struct bcm_gpio_softc *VAR_11;
 uint32_t VAR_12;

 if (VAR_6 != ((void*)0))
  return (VAR_2);

 VAR_6 = VAR_11 = FUNC_9(VAR_7);
  VAR_11->sc_dev = VAR_7;
 FUNC_15(&VAR_11->sc_mtx, "bcm gpio", "gpio", VAR_4);
 if (FUNC_7(VAR_7, VAR_5, VAR_11->sc_res) != 0) {
  FUNC_10(VAR_7, "cannot allocate resources\n");
  goto fail;
 }
 VAR_11->sc_bst = FUNC_18(VAR_11->sc_res[0]);
 VAR_11->sc_bsh = FUNC_17(VAR_11->sc_res[0]);

 if (FUNC_4(VAR_7)) {
  FUNC_10(VAR_7, "unable to setup the gpio irq handler\n");
  goto fail;
 }

 VAR_10 = FUNC_16(VAR_11->sc_dev);
 if (!FUNC_0(VAR_10, "gpio-controller"))

  goto fail;




 if (FUNC_3(VAR_11) == -1)
  goto fail;

 for (VAR_8 = 0, VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  FUNC_19(VAR_11->sc_gpio_pins[VAR_8].gp_name, VAR_3,
      "pin %d", VAR_9);
  VAR_12 = FUNC_2(VAR_11, VAR_9);
  VAR_11->sc_gpio_pins[VAR_8].gp_pin = VAR_9;
  VAR_11->sc_gpio_pins[VAR_8].gp_caps = VAR_0;
  VAR_11->sc_gpio_pins[VAR_8].gp_flags = FUNC_1(VAR_12);
  VAR_8++;
 }
 VAR_11->sc_gpio_npins = VAR_8;
 FUNC_6(VAR_11);
 VAR_11->sc_busdev = FUNC_13(VAR_7);
 if (VAR_11->sc_busdev == ((void*)0))
  goto fail;

 FUNC_12(VAR_7, "brcm,pins");
 FUNC_11(VAR_7);

 return (0);

fail:
 FUNC_5(VAR_7);
 FUNC_8(VAR_7, VAR_5, VAR_11->sc_res);
 FUNC_14(&VAR_11->sc_mtx);

 return (VAR_2);
}
