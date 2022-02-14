
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bcm_gpio_softc {int dummy; } ;
struct bcm_gpio_irqsrc {int bgi_mask; int bgi_irq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bcm_gpio_softc*,int ,int ) ;

__attribute__((used)) static inline void
FUNC_3(struct bcm_gpio_softc *VAR_0, struct bcm_gpio_irqsrc *VAR_1)
{
 uint32_t VAR_2;


 VAR_2 = FUNC_0(VAR_1->bgi_irq);
 FUNC_2(VAR_0, FUNC_1(VAR_2), VAR_1->bgi_mask);
}
