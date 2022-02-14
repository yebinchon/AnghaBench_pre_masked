
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_clock_dev {int id; } ;
struct resource {int dummy; } ;
struct omap4_prcm_softc {struct resource* sc_res; } ;
struct omap4_clk_details {int instance; } ;
typedef int clk_src_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct omap4_clk_details* FUNC_0 (int ) ;
 struct omap4_prcm_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct ti_clock_dev *VAR_2,
                             clk_src_t VAR_3)
{
 struct omap4_prcm_softc *VAR_4;
 struct omap4_clk_details* VAR_5;
 struct resource* VAR_6;

 VAR_5 = FUNC_0(VAR_2->id);

 if (VAR_5 == ((void*)0))
  return (VAR_1);

 VAR_4 = FUNC_1(VAR_5->instance);
 if (VAR_4 == ((void*)0))
  return VAR_1;

 VAR_6 = VAR_4->sc_res;

 if (VAR_6 == ((void*)0))
  return (VAR_0);



 return (0);
}
