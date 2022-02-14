
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ti_clock_dev {int id; } ;
struct resource {int dummy; } ;
struct omap4_prcm_softc {struct resource* sc_res; } ;
struct omap4_clk_details {int clksel_reg; int instance; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct resource*,int ) ;
 struct omap4_clk_details* FUNC_1 (int ) ;
 struct omap4_prcm_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct ti_clock_dev *VAR_4)
{
 struct omap4_prcm_softc *VAR_5;
 struct omap4_clk_details* VAR_6;
 struct resource* VAR_7;
 uint32_t VAR_8;

 VAR_6 = FUNC_1(VAR_4->id);

 if (VAR_6 == ((void*)0))
  return (VAR_3);

 VAR_5 = FUNC_2(VAR_6->instance);
 if (VAR_5 == ((void*)0))
  return VAR_3;

 VAR_7 = VAR_5->sc_res;

 if (VAR_7 == ((void*)0))
  return (VAR_2);

 VAR_8 = FUNC_0(VAR_7, VAR_6->clksel_reg);


 if ((VAR_8 & VAR_1) != VAR_0)
  return (0);

 return (1);
}
