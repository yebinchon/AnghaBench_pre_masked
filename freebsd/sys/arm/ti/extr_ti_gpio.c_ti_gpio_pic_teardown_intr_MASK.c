
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_gpio_softc {int dummy; } ;
struct ti_gpio_irqsrc {int dummy; } ;
struct resource {int dummy; } ;
struct intr_map_data {int dummy; } ;
struct intr_irqsrc {scalar_t__ isrc_handlers; } ;
typedef int device_t ;


 int VAR_0 ;
 struct ti_gpio_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct ti_gpio_softc*,struct ti_gpio_irqsrc*,int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1, struct intr_irqsrc *VAR_2,
    struct resource *VAR_3, struct intr_map_data *VAR_4)
{
 struct ti_gpio_softc *VAR_5 = FUNC_0(VAR_1);
 struct ti_gpio_irqsrc *VAR_6 = (struct ti_gpio_irqsrc *)VAR_2;

 if (VAR_2->isrc_handlers == 0)
  FUNC_1(VAR_5, VAR_6, VAR_0);
 return (0);
}
