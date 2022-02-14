
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intr_irqsrc {int dummy; } ;
struct bcm_gpio_softc {int dummy; } ;
struct bcm_gpio_irqsrc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct bcm_gpio_softc*,struct bcm_gpio_irqsrc*) ;
 struct bcm_gpio_softc* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_0, struct intr_irqsrc *VAR_1)
{
 struct bcm_gpio_softc *VAR_2 = FUNC_1(VAR_0);
 struct bcm_gpio_irqsrc *VAR_3 = (struct bcm_gpio_irqsrc *)VAR_1;

 FUNC_0(VAR_2, VAR_3);
}
