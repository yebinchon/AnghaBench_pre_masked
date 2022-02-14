
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct jz4780_gpio_softc {int * res; int * intrhand; int * busdev; TYPE_1__* pins; int dev; } ;
typedef int pu_pins ;
typedef int phandle_t ;
typedef int pd_pins ;
typedef int device_t ;
struct TYPE_2__ {size_t pin_num; int pin_caps; char* pin_name; int intr_trigger; int intr_polarity; } ;


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
 int FUNC_0 (struct jz4780_gpio_softc*) ;
 int FUNC_1 (struct jz4780_gpio_softc*) ;
 size_t VAR_10 ;
 int FUNC_2 (int ,char*,size_t*,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ,int ,int *) ;
 scalar_t__ FUNC_6 (int ,int ,int,int ,int *,struct jz4780_gpio_softc*,int **) ;
 int FUNC_7 (int ,int ,int *) ;
 struct jz4780_gpio_softc* FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*) ;
 int * FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 int * FUNC_13 (int ,int ) ;
 int VAR_11 ;
 int FUNC_14 (struct jz4780_gpio_softc*,size_t) ;
 scalar_t__ FUNC_15 (struct jz4780_gpio_softc*) ;
 int VAR_12 ;
 int FUNC_16 (int ) ;
 int FUNC_17 (char*,int,char*,int,size_t) ;

__attribute__((used)) static int
FUNC_18(device_t VAR_13)
{
 struct jz4780_gpio_softc *VAR_14 = FUNC_8(VAR_13);
 phandle_t VAR_15;
 uint32_t VAR_16, VAR_17, VAR_18;

 VAR_14->dev = VAR_13;

 if (FUNC_4(VAR_13, VAR_12, VAR_14->res)) {
  FUNC_10(VAR_13, "could not allocate resources for device\n");
  return (VAR_0);
 }

 FUNC_1(VAR_14);

 VAR_15 = FUNC_16(VAR_13);
 FUNC_2(VAR_15, "ingenic,pull-ups", &VAR_18, sizeof(VAR_18));
 FUNC_2(VAR_15, "ingenic,pull-downs", &VAR_17, sizeof(VAR_17));

 for (VAR_16 = 0; VAR_16 < VAR_10; VAR_16++) {
  VAR_14->pins[VAR_16].pin_num = VAR_16;
  VAR_14->pins[VAR_16].pin_caps |= VAR_2 | VAR_3;
  if (VAR_18 & (1 << VAR_16))
   VAR_14->pins[VAR_16].pin_caps |= VAR_5;
  if (VAR_17 & (1 << VAR_16))
   VAR_14->pins[VAR_16].pin_caps |= VAR_4;
  VAR_14->pins[VAR_16].intr_polarity = VAR_7;
  VAR_14->pins[VAR_16].intr_trigger = VAR_8;

  FUNC_17(VAR_14->pins[VAR_16].pin_name, VAR_1 - 1, "gpio%c%d",
      FUNC_9(VAR_13) + 'a', VAR_16);
  VAR_14->pins[VAR_16].pin_name[VAR_1 - 1] = '\0';

  FUNC_14(VAR_14, VAR_16);
 }

 if (FUNC_15(VAR_14) != 0)
  goto fail;

 if (FUNC_13(VAR_13, FUNC_3(VAR_15)) == ((void*)0)) {
  FUNC_10(VAR_13, "could not register PIC\n");
  goto fail;
 }

 if (FUNC_6(VAR_13, VAR_14->res[1], VAR_9 | VAR_6,
     VAR_11, ((void*)0), VAR_14, &VAR_14->intrhand) != 0)
  goto fail_pic;

 VAR_14->busdev = FUNC_11(VAR_13);
 if (VAR_14->busdev == ((void*)0))
  goto fail_pic;

 return (0);
fail_pic:
 FUNC_12(VAR_13, FUNC_3(VAR_15));
fail:
 if (VAR_14->intrhand != ((void*)0))
  FUNC_7(VAR_13, VAR_14->res[1], VAR_14->intrhand);
 FUNC_5(VAR_13, VAR_12, VAR_14->res);
 FUNC_0(VAR_14);
 return (VAR_0);
}
