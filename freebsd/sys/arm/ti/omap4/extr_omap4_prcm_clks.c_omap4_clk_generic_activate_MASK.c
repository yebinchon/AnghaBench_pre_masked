
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ti_clock_dev {int id; } ;
struct resource {int dummy; } ;
struct omap4_prcm_softc {struct resource* sc_res; } ;
struct omap4_clk_details {int clksel_reg; int enable_mode; int instance; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_1 (struct resource*,int) ;
 int FUNC_2 (struct resource*,int,int) ;
 struct omap4_clk_details* FUNC_3 (int) ;
 struct omap4_prcm_softc* FUNC_4 (int ) ;
 int FUNC_5 (char*,int,...) ;

__attribute__((used)) static int
FUNC_6(struct ti_clock_dev *VAR_7)
{
 struct omap4_prcm_softc *VAR_8;
 struct omap4_clk_details* VAR_9;
 struct resource* VAR_10;
 uint32_t VAR_11;
 unsigned int VAR_12;
 VAR_9 = FUNC_3(VAR_7->id);

 if (VAR_9 == ((void*)0))
  return (VAR_4);

 VAR_8 = FUNC_4(VAR_9->instance);
 if (VAR_8 == ((void*)0))
  return VAR_4;

 VAR_10 = VAR_8->sc_res;

 if (VAR_10 == ((void*)0))
  return (VAR_3);




 VAR_11 = FUNC_1(VAR_10, VAR_9->clksel_reg);
 VAR_11 &= ~VAR_2;
 VAR_11 |= VAR_9->enable_mode;
 FUNC_2(VAR_10, VAR_9->clksel_reg, VAR_11);






 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
  VAR_11 = FUNC_1(VAR_10, VAR_9->clksel_reg);
  if ((VAR_11 & VAR_1) == VAR_0)
   break;
  FUNC_0(10);
 }


 if ((VAR_11 & VAR_1) != VAR_0) {
  FUNC_5("Error: failed to enable module with clock %d\n", VAR_7->id);
  FUNC_5("Error: 0x%08x => 0x%08x\n", VAR_9->clksel_reg, VAR_11);
  return (VAR_5);
 }

 return (0);
}
