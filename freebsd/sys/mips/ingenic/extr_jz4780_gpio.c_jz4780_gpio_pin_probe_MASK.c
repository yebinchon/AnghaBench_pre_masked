
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct jz4780_gpio_softc {TYPE_1__* pins; } ;
typedef enum pin_function { ____Placeholder_pin_function } pin_function ;
struct TYPE_2__ {int pin_flags; int pin_func; int pin_caps; int intr_polarity; int intr_trigger; } ;


 unsigned int FUNC_0 (struct jz4780_gpio_softc*,int ) ;
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
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static void
FUNC_1(struct jz4780_gpio_softc *VAR_15, uint32_t VAR_16)
{
 uint32_t VAR_17 = (1u << VAR_16);
 uint32_t VAR_18;


 VAR_15->pins[VAR_16].pin_flags = 0;


 VAR_18 = FUNC_0(VAR_15, VAR_11);
 if (VAR_18 & VAR_17) {

  VAR_18 = FUNC_0(VAR_15, VAR_14);
  if (VAR_18 & VAR_17)
   VAR_15->pins[VAR_16].intr_trigger = VAR_6;
  else
   VAR_15->pins[VAR_16].intr_trigger = VAR_7;

  VAR_18 = FUNC_0(VAR_15, VAR_13);
  if (VAR_18 & VAR_17)
   VAR_15->pins[VAR_16].intr_polarity = VAR_4;
  else
   VAR_15->pins[VAR_16].intr_polarity = VAR_5;

  VAR_15->pins[VAR_16].pin_func = VAR_9;
  VAR_15->pins[VAR_16].pin_flags = 0;
  return;
 }

 VAR_18 = FUNC_0(VAR_15, VAR_12);
 if (VAR_18 & VAR_17) {

  VAR_18 = FUNC_0(VAR_15, VAR_14);
  if (VAR_18 & VAR_17)
   VAR_15->pins[VAR_16].pin_flags |= VAR_0;
  else
   VAR_15->pins[VAR_16].pin_flags |= VAR_1;

  VAR_18 = FUNC_0(VAR_15, VAR_10);
  if ((VAR_18 & VAR_17) == 0)
   VAR_15->pins[VAR_16].pin_flags |= VAR_15->pins[VAR_16].pin_caps &
    (VAR_3 | VAR_2);
  VAR_15->pins[VAR_16].pin_func = VAR_8;
  return;
 }

 VAR_18 = FUNC_0(VAR_15, VAR_10);
 if ((VAR_18 & VAR_17) == 0)
  VAR_15->pins[VAR_16].pin_flags = VAR_15->pins[VAR_16].pin_caps &
   (VAR_3 | VAR_2);
 VAR_18 = ((FUNC_0(VAR_15, VAR_14) & VAR_17) >> VAR_16) << 1;
 VAR_18 = VAR_18 | ((FUNC_0(VAR_15, VAR_14) & VAR_17) >> VAR_16);
 VAR_15->pins[VAR_16].pin_func = (enum pin_function)VAR_18;
}
