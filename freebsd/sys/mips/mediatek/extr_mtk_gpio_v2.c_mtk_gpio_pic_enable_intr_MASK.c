
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


 int FUNC_0 (struct mtk_gpio_softc*) ;
 int FUNC_1 (struct mtk_gpio_softc*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct mtk_gpio_softc*) ;
 int FUNC_3 (struct mtk_gpio_softc*) ;
 unsigned int FUNC_4 (struct mtk_gpio_softc*,int ) ;
 int FUNC_5 (struct mtk_gpio_softc*,int ,unsigned int) ;
 struct mtk_gpio_softc* FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(device_t VAR_1, struct intr_irqsrc *VAR_2)
{
 struct mtk_gpio_softc *VAR_3;
 struct mtk_gpio_pin_irqsrc *VAR_4;
 uint32_t VAR_5, VAR_6, VAR_7;

 VAR_3 = FUNC_6(VAR_1);

 VAR_4 = (struct mtk_gpio_pin_irqsrc *)VAR_2;
 VAR_5 = VAR_4->irq;
 VAR_6 = 1u << VAR_5;

 FUNC_2(VAR_3);

 if (VAR_3->pins[VAR_5].intr_polarity == VAR_0) {
  VAR_7 = FUNC_4(VAR_3, FUNC_1(VAR_3)) & ~VAR_6;
  FUNC_5(VAR_3, FUNC_1(VAR_3), VAR_7);
  VAR_7 = FUNC_4(VAR_3, FUNC_0(VAR_3)) | VAR_6;
  FUNC_5(VAR_3, FUNC_0(VAR_3), VAR_7);
 } else {
  VAR_7 = FUNC_4(VAR_3, FUNC_0(VAR_3)) & ~VAR_6;
  FUNC_5(VAR_3, FUNC_0(VAR_3), VAR_7);
  VAR_7 = FUNC_4(VAR_3, FUNC_1(VAR_3)) | VAR_6;
  FUNC_5(VAR_3, FUNC_1(VAR_3), VAR_7);
 }

 FUNC_3(VAR_3);
}
