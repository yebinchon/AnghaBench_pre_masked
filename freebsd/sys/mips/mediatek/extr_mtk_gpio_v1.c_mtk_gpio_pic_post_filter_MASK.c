
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_gpio_softc {int dummy; } ;
struct mtk_gpio_pin_irqsrc {unsigned int irq; } ;
struct intr_irqsrc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct mtk_gpio_softc*) ;
 int FUNC_1 (struct mtk_gpio_softc*) ;
 int FUNC_2 (struct mtk_gpio_softc*,int ,unsigned int) ;
 struct mtk_gpio_softc* FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_1, struct intr_irqsrc *VAR_2)
{
 struct mtk_gpio_softc *VAR_3;
 struct mtk_gpio_pin_irqsrc *VAR_4;

 VAR_4 = (struct mtk_gpio_pin_irqsrc *)VAR_2;
 VAR_3 = FUNC_3(VAR_1);
 FUNC_0(VAR_3);
 FUNC_2(VAR_3, VAR_0, 1u << VAR_4->irq);
 FUNC_1(VAR_3);
}
