
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct mtk_gpio_softc {size_t bank_id; size_t num_pins; int * res; int * intrhand; int * busdev; TYPE_1__* pins; int dev; } ;
typedef int phandle_t ;
typedef int num_pins ;
typedef int device_t ;
typedef int bank_id ;
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
 int FUNC_0 (struct mtk_gpio_softc*) ;
 int FUNC_1 (struct mtk_gpio_softc*) ;
 size_t VAR_10 ;
 scalar_t__ FUNC_2 (int ,char*,size_t*,int) ;
 scalar_t__ FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int ,int ,int *) ;
 scalar_t__ FUNC_7 (int ,int ,int,int ,int *,struct mtk_gpio_softc*,int **) ;
 int FUNC_8 (int ,int ,int *) ;
 struct mtk_gpio_softc* FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,char*) ;
 int * FUNC_12 (int ) ;
 int FUNC_13 (int ,int ) ;
 int * FUNC_14 (int ,int ) ;
 int VAR_11 ;
 int FUNC_15 (struct mtk_gpio_softc*,size_t) ;
 int VAR_12 ;
 scalar_t__ FUNC_16 (struct mtk_gpio_softc*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (char*,int,char*,int,size_t) ;

__attribute__((used)) static int
FUNC_21(device_t VAR_13)
{
 struct mtk_gpio_softc *VAR_14;
 phandle_t VAR_15;
 uint32_t VAR_16, VAR_17, VAR_18;

 VAR_14 = FUNC_9(VAR_13);
 VAR_14->dev = VAR_13;

 if (FUNC_5(VAR_13, VAR_12, VAR_14->res)) {
  FUNC_11(VAR_13, "could not allocate resources for device\n");
  return (VAR_0);
 }

 FUNC_1(VAR_14);

 VAR_15 = FUNC_19(VAR_13);

 if (FUNC_3(VAR_15, "clocks"))
  FUNC_18(VAR_13);
 if (FUNC_3(VAR_15, "resets"))
  FUNC_17(VAR_13);

 if (FUNC_3(VAR_15, "mtk,bank-id") && (FUNC_2(VAR_15,
     "mtk,bank-id", &VAR_18, sizeof(VAR_18)) >= 0))
  VAR_14->bank_id = VAR_18;
 else
  VAR_14->bank_id = FUNC_10(VAR_13);

 if (FUNC_3(VAR_15, "mtk,num-pins") && (FUNC_2(VAR_15,
     "mtk,num-pins", &VAR_17, sizeof(VAR_17)) >= 0))
  VAR_14->num_pins = VAR_17;
 else
  VAR_14->num_pins = VAR_10;

 for (VAR_16 = 0; VAR_16 < VAR_14->num_pins; VAR_16++) {
  VAR_14->pins[VAR_16].pin_caps |= VAR_2 | VAR_5 |
      VAR_3 | VAR_4;
  VAR_14->pins[VAR_16].intr_polarity = VAR_7;
  VAR_14->pins[VAR_16].intr_trigger = VAR_8;

  FUNC_20(VAR_14->pins[VAR_16].pin_name, VAR_1 - 1, "gpio%c%d",
      FUNC_10(VAR_13) + 'a', VAR_16);
  VAR_14->pins[VAR_16].pin_name[VAR_1 - 1] = '\0';

  FUNC_15(VAR_14, VAR_16);
 }

 if (FUNC_16(VAR_14) != 0) {
  FUNC_11(VAR_13, "could not register PIC ISRCs\n");
  goto fail;
 }

 if (FUNC_14(VAR_13, FUNC_4(VAR_15)) == ((void*)0)) {
  FUNC_11(VAR_13, "could not register PIC\n");
  goto fail;
 }

 if (FUNC_7(VAR_13, VAR_14->res[1], VAR_9 | VAR_6,
     VAR_11, ((void*)0), VAR_14, &VAR_14->intrhand) != 0)
  goto fail_pic;

 VAR_14->busdev = FUNC_12(VAR_13);
 if (VAR_14->busdev == ((void*)0))
  goto fail_pic;

 return (0);
fail_pic:
 FUNC_13(VAR_13, FUNC_4(VAR_15));
fail:
 if(VAR_14->intrhand != ((void*)0))
  FUNC_8(VAR_13, VAR_14->res[1], VAR_14->intrhand);
 FUNC_6(VAR_13, VAR_12, VAR_14->res);
 FUNC_0(VAR_14);
 return (VAR_0);
}
