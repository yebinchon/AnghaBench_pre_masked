
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_gpio_softc {int dummy; } ;
struct mtk_gpio_pin_irqsrc {unsigned int irq; } ;
struct intr_irqsrc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct mtk_gpio_softc*) ;
 int FUNC_1 (struct mtk_gpio_softc*) ;
 int FUNC_2 (struct mtk_gpio_softc*) ;
 int FUNC_3 (struct mtk_gpio_softc*,int ,unsigned int) ;
 struct mtk_gpio_softc* FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_0, struct intr_irqsrc *VAR_1)
{
 struct mtk_gpio_softc *VAR_2;
 struct mtk_gpio_pin_irqsrc *VAR_3;

 VAR_3 = (struct mtk_gpio_pin_irqsrc *)VAR_1;
 VAR_2 = FUNC_4(VAR_0);
 FUNC_1(VAR_2);
 FUNC_3(VAR_2, FUNC_0(VAR_2), 1u << VAR_3->irq);
 FUNC_2(VAR_2);
}
