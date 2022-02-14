
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct twl_clks_softc {int sc_pdev; } ;
struct twl_clk_entry {scalar_t__ reg_off; int sub_dev; } ;


 int FUNC_0 (int ,int ,scalar_t__,scalar_t__*,int) ;

__attribute__((used)) static inline int
FUNC_1(struct twl_clks_softc *VAR_0, struct twl_clk_entry *VAR_1,
 uint8_t VAR_2, uint8_t *VAR_3)
{
 return (FUNC_0(VAR_0->sc_pdev, VAR_1->sub_dev, VAR_1->reg_off + VAR_2, VAR_3, 1));
}
