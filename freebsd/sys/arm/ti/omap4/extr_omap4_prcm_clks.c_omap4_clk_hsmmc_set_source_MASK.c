
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ti_clock_dev {scalar_t__ id; } ;
struct resource {int dummy; } ;
struct omap4_prcm_softc {struct resource* sc_res; } ;
struct omap4_clk_details {int clksel_reg; int instance; } ;
typedef scalar_t__ clk_src_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct resource*,int ) ;
 int FUNC_1 (struct resource*,int ,int) ;
 struct omap4_clk_details* FUNC_2 (scalar_t__) ;
 struct omap4_prcm_softc* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct ti_clock_dev *VAR_8,
                           clk_src_t VAR_9)
{
 struct omap4_prcm_softc *VAR_10;
 struct omap4_clk_details* VAR_11;
 struct resource* VAR_12;
 uint32_t VAR_13;

 VAR_11 = FUNC_2(VAR_8->id);

 if (VAR_11 == ((void*)0))
  return (VAR_1);


 VAR_10 = FUNC_3(VAR_11->instance);
 if (VAR_10 == ((void*)0))
  return VAR_1;

 VAR_12 = VAR_10->sc_res;

 if (VAR_12 == ((void*)0))
  return (VAR_0);


 if ((VAR_8->id == VAR_5) || (VAR_8->id == VAR_6) ||
     (VAR_8->id == VAR_7)) {
  if (VAR_9 != VAR_2)
   return (VAR_0);
  return 0;
 }


 VAR_13 = FUNC_0(VAR_12, VAR_11->clksel_reg);


 if (VAR_9 == VAR_3)
  VAR_13 &= ~(0x1UL << 24);
 else if (VAR_9 == VAR_4)
  VAR_13 |= (0x1UL << 24);
 else
  return (VAR_0);

 FUNC_1(VAR_12, VAR_11->clksel_reg, VAR_13);

 return (0);
}
