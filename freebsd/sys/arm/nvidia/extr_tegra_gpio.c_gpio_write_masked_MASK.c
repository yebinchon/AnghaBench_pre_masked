
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tegra_gpio_softc {int mem_res; } ;
struct gpio_pin {int gp_pin; } ;
typedef scalar_t__ bus_size_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__,int) ;

__attribute__((used)) static inline void
FUNC_3(struct tegra_gpio_softc *VAR_0, bus_size_t VAR_1,
    struct gpio_pin *VAR_2, uint32_t VAR_3)
{
 uint32_t VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2->gp_pin);
 VAR_4 = 0x100 << VAR_5;
 VAR_4 |= (VAR_3 & 1) << VAR_5;
 FUNC_2(VAR_0->mem_res, VAR_1 + FUNC_1(VAR_2->gp_pin), VAR_4);
}
