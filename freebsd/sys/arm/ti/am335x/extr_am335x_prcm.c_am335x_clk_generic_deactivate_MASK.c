
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_clock_dev {int id; } ;
struct am335x_prcm_softc {int dummy; } ;
struct am335x_clk_details {int clkctrl_reg; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct am335x_clk_details* FUNC_1 (int ) ;
 struct am335x_prcm_softc* VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct ti_clock_dev *VAR_2)
{
 struct am335x_prcm_softc *VAR_3 = VAR_1;
 struct am335x_clk_details* VAR_4;

 if (VAR_3 == ((void*)0))
  return VAR_0;

 VAR_4 = FUNC_1(VAR_2->id);

 if (VAR_4 == ((void*)0))
  return (VAR_0);


 FUNC_3(VAR_4->clkctrl_reg, 0);
 while ((FUNC_2(VAR_4->clkctrl_reg) & 0x3) != 0)
  FUNC_0(10);

 return (0);
}
