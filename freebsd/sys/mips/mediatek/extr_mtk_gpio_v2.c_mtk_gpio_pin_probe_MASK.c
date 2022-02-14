
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
 int FUNC_0 (struct mtk_gpio_softc*) ;
 int FUNC_1 (struct mtk_gpio_softc*) ;
 int FUNC_2 (struct mtk_gpio_softc*) ;
 int FUNC_3 (struct mtk_gpio_softc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_4 (struct mtk_gpio_softc*,int ) ;

__attribute__((used)) static void
FUNC_5(struct mtk_gpio_softc *VAR_7, uint32_t VAR_8)
{
 uint32_t VAR_9 = (1u << VAR_8);
 uint32_t VAR_10;


 VAR_7->pins[VAR_8].pin_flags = 0;

 VAR_10 = FUNC_4(VAR_7, FUNC_3(VAR_7)) |
     FUNC_4(VAR_7, FUNC_1(VAR_7));
 if (VAR_10 & VAR_9) {

  VAR_7->pins[VAR_8].intr_trigger = VAR_6;
  VAR_10 = FUNC_4(VAR_7, FUNC_3(VAR_7));
  if (VAR_10 & VAR_9)
   VAR_7->pins[VAR_8].intr_polarity = VAR_4;
  else
   VAR_7->pins[VAR_8].intr_polarity = VAR_5;
 }

 VAR_10 = FUNC_4(VAR_7, FUNC_0(VAR_7));
 if (VAR_10 & VAR_9)
  VAR_7->pins[VAR_8].pin_flags |= VAR_3;
 else
  VAR_7->pins[VAR_8].pin_flags |= VAR_0;

 VAR_10 = FUNC_4(VAR_7, FUNC_2(VAR_7));
 if (VAR_10 & VAR_9) {
  if (VAR_7->pins[VAR_8].pin_flags & VAR_0) {
   VAR_7->pins[VAR_8].pin_flags |= VAR_1;
  } else {
   VAR_7->pins[VAR_8].pin_flags |= VAR_2;
  }
 }
}
