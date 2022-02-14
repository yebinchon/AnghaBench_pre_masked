
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
struct mtk_gpio_softc {int dummy; } ;
struct mtk_gpio_pin_irqsrc {unsigned int irq; } ;
struct intr_irqsrc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mtk_gpio_softc*) ;
 int FUNC_1 (struct mtk_gpio_softc*) ;
 unsigned int FUNC_2 (struct mtk_gpio_softc*,int ) ;
 int FUNC_3 (struct mtk_gpio_softc*,int ,unsigned int) ;
 struct mtk_gpio_softc* FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_2, struct intr_irqsrc *VAR_3)
{
 struct mtk_gpio_softc *VAR_4;
 struct mtk_gpio_pin_irqsrc *VAR_5;
 uint32_t VAR_6, VAR_7, VAR_8;

 VAR_4 = FUNC_4(VAR_2);

 VAR_5 = (struct mtk_gpio_pin_irqsrc *)VAR_3;
 VAR_6 = VAR_5->irq;
 VAR_7 = 1u << VAR_6;

 FUNC_0(VAR_4);

 VAR_8 = FUNC_2(VAR_4, VAR_1) & ~VAR_7;
 FUNC_3(VAR_4, VAR_1, VAR_8);
 VAR_8 = FUNC_2(VAR_4, VAR_0) & ~VAR_7;
 FUNC_3(VAR_4, VAR_0, VAR_8);

 FUNC_1(VAR_4);
}
