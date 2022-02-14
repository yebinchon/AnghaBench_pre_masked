
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ u_int ;
struct ti_gpio_softc {int dummy; } ;
struct ti_gpio_irqsrc {scalar_t__ tgi_irq; scalar_t__ tgi_mode; } ;
struct resource {int dummy; } ;
struct intr_map_data {int dummy; } ;
struct intr_irqsrc {scalar_t__ isrc_handlers; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct ti_gpio_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct ti_gpio_softc*,struct ti_gpio_irqsrc*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct ti_gpio_softc*,struct intr_map_data*,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2, struct intr_irqsrc *VAR_3,
    struct resource *VAR_4, struct intr_map_data *VAR_5)
{
 u_int VAR_6;
 uint32_t VAR_7;
 struct ti_gpio_softc *VAR_8;
 struct ti_gpio_irqsrc *VAR_9;

 if (VAR_5 == ((void*)0))
  return (VAR_1);

 VAR_8 = FUNC_0(VAR_2);
 VAR_9 = (struct ti_gpio_irqsrc *)VAR_3;


 if (FUNC_2(VAR_8, VAR_5, &VAR_6, &VAR_7) != 0 || VAR_9->tgi_irq != VAR_6)
  return (VAR_0);





 if (VAR_3->isrc_handlers != 0)
  return (VAR_9->tgi_mode == VAR_7 ? 0 : VAR_0);

 FUNC_1(VAR_8, VAR_9, VAR_7);
 return (0);
}
