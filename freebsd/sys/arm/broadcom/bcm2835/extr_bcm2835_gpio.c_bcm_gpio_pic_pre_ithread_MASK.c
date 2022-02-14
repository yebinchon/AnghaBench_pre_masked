
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intr_irqsrc {int dummy; } ;
struct bcm_gpio_softc {int dummy; } ;
struct bcm_gpio_irqsrc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct bcm_gpio_softc*,struct bcm_gpio_irqsrc*) ;
 scalar_t__ FUNC_1 (struct bcm_gpio_irqsrc*) ;
 int FUNC_2 (struct bcm_gpio_softc*,struct bcm_gpio_irqsrc*) ;
 struct bcm_gpio_softc* FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_0, struct intr_irqsrc *VAR_1)
{
 struct bcm_gpio_softc *VAR_2 = FUNC_3(VAR_0);
 struct bcm_gpio_irqsrc *VAR_3 = (struct bcm_gpio_irqsrc *)VAR_1;

 FUNC_2(VAR_2, VAR_3);
 if (FUNC_1(VAR_3))
  FUNC_0(VAR_2, VAR_3);
}
