
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ u_int ;
struct resource {int dummy; } ;
struct intr_map_data {int dummy; } ;
struct intr_irqsrc {scalar_t__ isrc_handlers; } ;
struct bcm_gpio_softc {int dummy; } ;
struct bcm_gpio_irqsrc {scalar_t__ bgi_irq; scalar_t__ bgi_mode; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bcm_gpio_softc*,struct bcm_gpio_irqsrc*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct bcm_gpio_softc*,struct intr_map_data*,scalar_t__*,scalar_t__*) ;
 struct bcm_gpio_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2, struct intr_irqsrc *VAR_3,
    struct resource *VAR_4, struct intr_map_data *VAR_5)
{
 u_int VAR_6;
 uint32_t VAR_7;
 struct bcm_gpio_softc *VAR_8;
 struct bcm_gpio_irqsrc *VAR_9;

 if (VAR_5 == ((void*)0))
  return (VAR_1);

 VAR_8 = FUNC_2(VAR_2);
 VAR_9 = (struct bcm_gpio_irqsrc *)VAR_3;


 if (FUNC_1(VAR_8, VAR_5, &VAR_6, &VAR_7) != 0 || VAR_9->bgi_irq != VAR_6)
  return (VAR_0);





 if (VAR_3->isrc_handlers != 0)
  return (VAR_9->bgi_mode == VAR_7 ? 0 : VAR_0);

 FUNC_0(VAR_8, VAR_9, VAR_7);
 return (0);
}
