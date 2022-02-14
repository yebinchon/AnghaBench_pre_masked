
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
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;





 int FUNC_0 (struct resource*,int ) ;
 struct omap4_clk_details* FUNC_1 (int) ;
 struct omap4_prcm_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct ti_clock_dev *VAR_5,
                                unsigned int *VAR_6
                                )
{
 struct omap4_prcm_softc *VAR_7;
 struct omap4_clk_details* VAR_8;
 struct resource* VAR_9;
 uint32_t VAR_10;
 unsigned int VAR_11;

 VAR_8 = FUNC_1(VAR_5->id);

 if (VAR_8 == ((void*)0))
  return (VAR_1);

 VAR_7 = FUNC_2(VAR_8->instance);
 if (VAR_7 == ((void*)0))
  return VAR_1;

 VAR_9 = VAR_7->sc_res;

 if (VAR_9 == ((void*)0))
  return (VAR_0);

 switch (VAR_5->id) {
 case 132:
 case 131:

  VAR_10 = FUNC_0(VAR_9, VAR_8->clksel_reg);
  if (VAR_10 & (0x1UL << 24))
   VAR_11 = VAR_4;
  else
   VAR_11 = VAR_3;
  break;
 case 130:
 case 129:
 case 128:
  VAR_11 = VAR_2;
  break;
 default:
  return (VAR_0);
 }


 if (VAR_6)
  *VAR_6 = VAR_11;

 return (0);
}
