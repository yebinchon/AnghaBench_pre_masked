
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ti_clock_dev {int id; } ;
struct am335x_prcm_softc {int dummy; } ;
struct am335x_clk_details {int clksel_reg; } ;
typedef int clk_src_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;



 struct am335x_clk_details* FUNC_1 (int ) ;
 struct am335x_prcm_softc* VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int
FUNC_4(struct ti_clock_dev *VAR_2, clk_src_t VAR_3)
{
 struct am335x_prcm_softc *VAR_4 = VAR_1;
 struct am335x_clk_details* VAR_5;
 uint32_t VAR_6;

 if (VAR_4 == ((void*)0))
  return VAR_0;

 VAR_5 = FUNC_1(VAR_2->id);

 if (VAR_5 == ((void*)0))
  return (VAR_0);

 switch (VAR_3) {
  case 130:
   VAR_6 = 0;
   break;
  case 128:
   VAR_6 = 1;
   break;
  case 129:
   VAR_6 = 2;
   break;
  default:
   return (VAR_0);
 }

 FUNC_3(VAR_5->clksel_reg, VAR_6);
 while ((FUNC_2(VAR_5->clksel_reg) & 0x3) != VAR_6)
  FUNC_0(10);

 return (0);
}
