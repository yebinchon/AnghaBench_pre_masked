
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct mtk_gpio_softc {size_t num_pins; int * res; int * intrhand; int * busdev; TYPE_1__* pins; int regs; int dev; } ;
typedef int phandle_t ;
typedef int num_pins ;
typedef int device_t ;
struct TYPE_2__ {int pin_caps; char* pin_name; int intr_trigger; int intr_polarity; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct mtk_gpio_softc*) ;
 int FUNC_1 (struct mtk_gpio_softc*) ;
 size_t VAR_13 ;
 scalar_t__ FUNC_2 (int ,char*,size_t*,int) ;
 scalar_t__ FUNC_3 (int ,char*,int ,int ) ;
 scalar_t__ FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (int ,int ,int *) ;
 scalar_t__ FUNC_8 (int ,int ,int,int ,int *,struct mtk_gpio_softc*,int **) ;
 int FUNC_9 (int ,int ,int *) ;
 struct mtk_gpio_softc* FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*) ;
 int * FUNC_13 (int ) ;
 int FUNC_14 (int ,int ) ;
 int * FUNC_15 (int ,int ) ;
 int VAR_14 ;
 int FUNC_16 (struct mtk_gpio_softc*,size_t) ;
 int VAR_15 ;
 scalar_t__ FUNC_17 (struct mtk_gpio_softc*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (char*,int,char*,int,size_t) ;

__attribute__((used)) static int
FUNC_22(device_t VAR_16)
{
 struct mtk_gpio_softc *VAR_17;
 phandle_t VAR_18;
 uint32_t VAR_19, VAR_20;

 VAR_17 = FUNC_10(VAR_16);
 VAR_17->dev = VAR_16;

 if (FUNC_6(VAR_16, VAR_15, VAR_17->res)) {
  FUNC_12(VAR_16, "could not allocate resources for device\n");
  return (VAR_0);
 }

 FUNC_1(VAR_17);

 VAR_18 = FUNC_20(VAR_16);

 if (FUNC_4(VAR_18, "clocks"))
  FUNC_19(VAR_16);
 if (FUNC_4(VAR_18, "resets"))
  FUNC_18(VAR_16);

 if (FUNC_3(VAR_18, "ralink,register-map", VAR_17->regs,
     VAR_8) <= 0) {
  FUNC_12(VAR_16, "Failed to read register map\n");
  return (VAR_0);
 }

 if (FUNC_4(VAR_18, "ralink,num-gpios") && (FUNC_2(VAR_18,
     "ralink,num-gpios", &VAR_20, sizeof(VAR_20)) >= 0))
  VAR_17->num_pins = VAR_20;
 else
  VAR_17->num_pins = VAR_13;

 for (VAR_19 = 0; VAR_19 < VAR_17->num_pins; VAR_19++) {
  VAR_17->pins[VAR_19].pin_caps |= VAR_4 | VAR_7 |
      VAR_5 | VAR_6 |
      VAR_3 | VAR_2;
  VAR_17->pins[VAR_19].intr_polarity = VAR_10;
  VAR_17->pins[VAR_19].intr_trigger = VAR_11;

  FUNC_21(VAR_17->pins[VAR_19].pin_name, VAR_1 - 1, "gpio%c%d",
      FUNC_11(VAR_16) + 'a', VAR_19);
  VAR_17->pins[VAR_19].pin_name[VAR_1 - 1] = '\0';

  FUNC_16(VAR_17, VAR_19);
 }

 if (FUNC_17(VAR_17) != 0) {
  FUNC_12(VAR_16, "could not register PIC ISRCs\n");
  goto fail;
 }

 if (FUNC_15(VAR_16, FUNC_5(VAR_18)) == ((void*)0)) {
  FUNC_12(VAR_16, "could not register PIC\n");
  goto fail;
 }

 if (FUNC_8(VAR_16, VAR_17->res[1], VAR_12 | VAR_9,
     VAR_14, ((void*)0), VAR_17, &VAR_17->intrhand) != 0)
  goto fail_pic;

 VAR_17->busdev = FUNC_13(VAR_16);
 if (VAR_17->busdev == ((void*)0))
  goto fail_pic;

 return (0);
fail_pic:
 FUNC_14(VAR_16, FUNC_5(VAR_18));
fail:
 if(VAR_17->intrhand != ((void*)0))
  FUNC_9(VAR_16, VAR_17->res[1], VAR_17->intrhand);
 FUNC_7(VAR_16, VAR_15, VAR_17->res);
 FUNC_0(VAR_17);
 return (VAR_0);
}
