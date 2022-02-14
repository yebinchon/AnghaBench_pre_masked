
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk {scalar_t__ sel_reg; int sel_mask; int sel_shift; int sel_val; scalar_t__ reg; int enable_reg; int div_mask; int div_shift; int div_val; } ;
struct ccm_softc {int dev; } ;
struct TYPE_2__ {struct clk* clk; int * name; } ;


 int FUNC_0 (struct ccm_softc*,scalar_t__) ;
 int FUNC_1 (struct ccm_softc*,scalar_t__,int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (int ,char*,char*) ;
 scalar_t__ FUNC_3 (int *,char*) ;

__attribute__((used)) static int
FUNC_4(struct ccm_softc *VAR_1, char *VAR_2)
{
 struct clk *VAR_3;
 int VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_0[VAR_5].name != ((void*)0); VAR_5++) {
  if (FUNC_3(VAR_0[VAR_5].name, VAR_2) == 0) {



   VAR_3 = VAR_0[VAR_5].clk;
   if (VAR_3->sel_reg != 0) {
    VAR_4 = FUNC_0(VAR_1, VAR_3->sel_reg);
    VAR_4 &= ~(VAR_3->sel_mask << VAR_3->sel_shift);
    VAR_4 |= (VAR_3->sel_val << VAR_3->sel_shift);
    FUNC_1(VAR_1, VAR_3->sel_reg, VAR_4);
   }

   VAR_4 = FUNC_0(VAR_1, VAR_3->reg);
   VAR_4 |= VAR_3->enable_reg;
   VAR_4 &= ~(VAR_3->div_mask << VAR_3->div_shift);
   VAR_4 |= (VAR_3->div_val << VAR_3->div_shift);
   FUNC_1(VAR_1, VAR_3->reg, VAR_4);
  }
 }

 return (0);
}
