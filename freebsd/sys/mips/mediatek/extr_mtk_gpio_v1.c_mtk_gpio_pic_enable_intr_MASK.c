
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct mtk_gpio_softc {TYPE_1__* pins; } ;
struct mtk_gpio_pin_irqsrc {unsigned int irq; } ;
struct intr_irqsrc {int dummy; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ intr_polarity; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct mtk_gpio_softc*) ;
 int FUNC_1 (struct mtk_gpio_softc*) ;
 unsigned int FUNC_2 (struct mtk_gpio_softc*,int ) ;
 int FUNC_3 (struct mtk_gpio_softc*,int ,unsigned int) ;
 struct mtk_gpio_softc* FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_3, struct intr_irqsrc *VAR_4)
{
 struct mtk_gpio_softc *VAR_5;
 struct mtk_gpio_pin_irqsrc *VAR_6;
 uint32_t VAR_7, VAR_8, VAR_9;

 VAR_5 = FUNC_4(VAR_3);

 VAR_6 = (struct mtk_gpio_pin_irqsrc *)VAR_4;
 VAR_7 = VAR_6->irq;
 VAR_8 = 1u << VAR_7;

 FUNC_0(VAR_5);

 if (VAR_5->pins[VAR_7].intr_polarity == VAR_2) {
  VAR_9 = FUNC_2(VAR_5, VAR_1) & ~VAR_8;
  FUNC_3(VAR_5, VAR_1, VAR_9);
  VAR_9 = FUNC_2(VAR_5, VAR_0) | VAR_8;
  FUNC_3(VAR_5, VAR_0, VAR_9);
 } else {
  VAR_9 = FUNC_2(VAR_5, VAR_0) & ~VAR_8;
  FUNC_3(VAR_5, VAR_0, VAR_9);
  VAR_9 = FUNC_2(VAR_5, VAR_1) | VAR_8;
  FUNC_3(VAR_5, VAR_1, VAR_9);
 }

 FUNC_1(VAR_5);
}
