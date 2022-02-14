
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct chipc_gpio_softc {int mem_res; } ;
struct chipc_gpio_reg {int value; int mask; } ;
typedef int bus_size_t ;


 int FUNC_0 (struct chipc_gpio_softc*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct chipc_gpio_softc *VAR_1, bus_size_t VAR_2,
    struct chipc_gpio_reg *VAR_3)
{
 uint32_t VAR_4;

 FUNC_0(VAR_1, VAR_0);

 if (VAR_3->mask == 0)
  return;

 VAR_4 = FUNC_1(VAR_1->mem_res, VAR_2);
 VAR_4 &= ~VAR_3->mask;
 VAR_4 |= VAR_3->value;

 FUNC_2(VAR_1->mem_res, VAR_2, VAR_4);
}
