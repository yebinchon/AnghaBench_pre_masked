
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_gpio_softc {int dummy; } ;
struct ti_gpio_irqsrc {int tgi_mask; } ;


 int FUNC_0 (struct ti_gpio_softc*,int ) ;

__attribute__((used)) static inline void
FUNC_1(struct ti_gpio_softc *VAR_0, struct ti_gpio_irqsrc *VAR_1)
{


 FUNC_0(VAR_0, VAR_1->tgi_mask);
}
