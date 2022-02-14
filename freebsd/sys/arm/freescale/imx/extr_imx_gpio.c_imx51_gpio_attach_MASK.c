
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imx51_gpio_softc {int gpio_npins; int * sc_busdev; TYPE_1__* gpio_pins; int * gpio_ih; int * sc_res; int sc_ioh; int sc_iot; int sc_mtx; int dev; } ;
typedef int device_t ;
struct TYPE_2__ {int gp_pin; int gp_name; int gp_flags; int gp_caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (struct imx51_gpio_softc*,int ) ;
 int FUNC_2 (struct imx51_gpio_softc*,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int ,int *) ;
 scalar_t__ FUNC_5 (int ,int ,int ,int ,int *,struct imx51_gpio_softc*,int *) ;
 int FUNC_6 (int ) ;
 struct imx51_gpio_softc* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*) ;
 int VAR_10 ;
 int FUNC_10 (struct imx51_gpio_softc*) ;
 int * FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int VAR_11 ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int ,int *,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,int ,char*,int,int) ;

__attribute__((used)) static int
FUNC_20(device_t VAR_12)
{
 struct imx51_gpio_softc *VAR_13;
 int VAR_14, VAR_15, VAR_16;

 VAR_13 = FUNC_7(VAR_12);
 VAR_13->dev = VAR_12;
 VAR_13->gpio_npins = VAR_9;

 FUNC_15(&VAR_13->sc_mtx, FUNC_6(VAR_13->dev), ((void*)0), VAR_8);

 if (FUNC_3(VAR_12, VAR_11, VAR_13->sc_res)) {
  FUNC_9(VAR_12, "could not allocate resources\n");
  FUNC_4(VAR_12, VAR_11, VAR_13->sc_res);
  FUNC_14(&VAR_13->sc_mtx);
  return (VAR_1);
 }

 VAR_13->sc_iot = FUNC_18(VAR_13->sc_res[0]);
 VAR_13->sc_ioh = FUNC_17(VAR_13->sc_res[0]);



 FUNC_2(VAR_13, VAR_5, 0);
 for (VAR_15 = 0; VAR_15 < 2; VAR_15++) {
 }

 VAR_16 = FUNC_8(VAR_12);
 for (VAR_14 = 0; VAR_14 < VAR_13->gpio_npins; VAR_14++) {
   VAR_13->gpio_pins[VAR_14].gp_pin = VAR_14;
   VAR_13->gpio_pins[VAR_14].gp_caps = VAR_0;
   VAR_13->gpio_pins[VAR_14].gp_flags =
       (FUNC_1(VAR_13, VAR_6) & (1U << VAR_14)) ? VAR_4 :
       VAR_3;
   FUNC_19(VAR_13->gpio_pins[VAR_14].gp_name, VAR_2,
       "GPIO%d_IO%02d", VAR_16 + 1, VAR_14);
 }





 VAR_13->sc_busdev = FUNC_11(VAR_12);

 if (VAR_13->sc_busdev == ((void*)0)) {
  FUNC_12(VAR_12);
  return (VAR_1);
 }

 return (0);
}
