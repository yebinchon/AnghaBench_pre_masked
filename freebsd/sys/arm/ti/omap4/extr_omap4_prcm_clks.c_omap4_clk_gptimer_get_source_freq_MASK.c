
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
 int FUNC_0 (struct resource*,int ) ;
 struct omap4_clk_details* FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned int*) ;
 struct omap4_prcm_softc* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct ti_clock_dev *VAR_3,
                                  unsigned int *VAR_4
                                  )
{
 struct omap4_prcm_softc *VAR_5;
 struct omap4_clk_details* VAR_6;
 struct resource* VAR_7;
 uint32_t VAR_8;
 unsigned int VAR_9;

 VAR_6 = FUNC_1(VAR_3->id);

 if (VAR_6 == ((void*)0))
  return (VAR_1);

 VAR_5 = FUNC_3(VAR_6->instance);
 if (VAR_5 == ((void*)0))
  return VAR_1;

 VAR_7 = VAR_5->sc_res;

 if (VAR_7 == ((void*)0))
  return (VAR_0);


 VAR_8 = FUNC_0(VAR_7, VAR_6->clksel_reg);
 if (VAR_8 & (0x1UL << 24))
  VAR_9 = VAR_2;
 else
  FUNC_2(((void*)0), &VAR_9);


 if (VAR_4)
  *VAR_4 = VAR_9;

 return (0);
}
