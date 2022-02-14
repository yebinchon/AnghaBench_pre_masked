
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct mtk_gpio_softc {TYPE_1__* pins; } ;
struct TYPE_2__ {int pin_flags; int intr_polarity; int intr_trigger; } ;


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
 unsigned int FUNC_0 (struct mtk_gpio_softc*,int ) ;

__attribute__((used)) static void
FUNC_1(struct mtk_gpio_softc *VAR_11, uint32_t VAR_12)
{
 uint32_t VAR_13 = (1u << VAR_12);
 uint32_t VAR_14;


 VAR_11->pins[VAR_12].pin_flags = 0;

 VAR_14 = FUNC_0(VAR_11, VAR_7) |
     FUNC_0(VAR_11, VAR_5);
 if (VAR_14 & VAR_13) {

  VAR_11->pins[VAR_12].intr_trigger = VAR_10;
  VAR_14 = FUNC_0(VAR_11, VAR_7);
  if (VAR_14 & VAR_13)
   VAR_11->pins[VAR_12].intr_polarity = VAR_8;
  else
   VAR_11->pins[VAR_12].intr_polarity = VAR_9;
 }

 VAR_14 = FUNC_0(VAR_11, VAR_4);
 if (VAR_14 & VAR_13)
  VAR_11->pins[VAR_12].pin_flags |= VAR_3;
 else
  VAR_11->pins[VAR_12].pin_flags |= VAR_0;

 VAR_14 = FUNC_0(VAR_11, VAR_6);
 if (VAR_14 & VAR_13) {
  if (VAR_11->pins[VAR_12].pin_flags & VAR_0) {
   VAR_11->pins[VAR_12].pin_flags |= VAR_1;
  } else {
   VAR_11->pins[VAR_12].pin_flags |= VAR_2;
  }
 }
}
