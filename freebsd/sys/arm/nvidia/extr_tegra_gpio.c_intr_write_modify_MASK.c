
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tegra_gpio_softc {int mem_res; } ;
struct tegra_gpio_irqsrc {int irq; } ;
typedef scalar_t__ bus_addr_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct tegra_gpio_softc*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct tegra_gpio_softc*) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ,scalar_t__,int) ;

__attribute__((used)) static inline void
FUNC_6(struct tegra_gpio_softc *VAR_0, bus_addr_t VAR_1,
    struct tegra_gpio_irqsrc *VAR_2, uint32_t VAR_3, uint32_t VAR_4)
{
 uint32_t VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_2->irq);
 FUNC_1(VAR_0);
 VAR_5 = FUNC_4(VAR_0->mem_res, VAR_1 + FUNC_2(VAR_2->irq));
 VAR_5 &= ~(VAR_4 << VAR_6);
 VAR_5 |= VAR_3 << VAR_6;
 FUNC_5(VAR_0->mem_res, VAR_1 + FUNC_2(VAR_2->irq), VAR_5);
 FUNC_3(VAR_0);
}
