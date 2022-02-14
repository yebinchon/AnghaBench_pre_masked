
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clknode {int dummy; } ;
struct aw_ccung_softc {int n_clk_init; TYPE_1__* clk_init; int dev; } ;
struct TYPE_2__ {int name; scalar_t__ enable; int default_freq; int * parent_name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct clknode*) ;
 struct clknode* FUNC_1 (int ) ;
 int FUNC_2 (struct clknode*,int ,int ,int ) ;
 int FUNC_3 (struct clknode*,int *) ;
 int FUNC_4 (int ,char*,int ,...) ;

__attribute__((used)) static void
FUNC_5(struct aw_ccung_softc *VAR_1)
{
 struct clknode *VAR_2;
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1->n_clk_init; VAR_3++) {
  VAR_2 = FUNC_1(VAR_1->clk_init[VAR_3].name);
  if (VAR_2 == ((void*)0)) {
   FUNC_4(VAR_1->dev, "Cannot find clock %s\n",
       VAR_1->clk_init[VAR_3].name);
   continue;
  }

  if (VAR_1->clk_init[VAR_3].parent_name != ((void*)0)) {
   if (VAR_0)
    FUNC_4(VAR_1->dev, "Setting %s as parent for %s\n",
        *VAR_1->clk_init[VAR_3].parent_name,
        VAR_1->clk_init[VAR_3].name);
   VAR_4 = FUNC_3(VAR_2,
       VAR_1->clk_init[VAR_3].parent_name);
   if (VAR_4 != 0) {
    FUNC_4(VAR_1->dev,
        "Cannot set parent to %s for %s\n",
        *VAR_1->clk_init[VAR_3].parent_name,
        VAR_1->clk_init[VAR_3].name);
    continue;
   }
  }
  if (VAR_1->clk_init[VAR_3].default_freq != 0) {
   if (VAR_0)
    FUNC_4(VAR_1->dev,
        "Setting freq %ju for %s\n",
        VAR_1->clk_init[VAR_3].default_freq,
        VAR_1->clk_init[VAR_3].name);
   VAR_4 = FUNC_2(VAR_2,
       VAR_1->clk_init[VAR_3].default_freq, 0 , 0);
   if (VAR_4 != 0) {
    FUNC_4(VAR_1->dev,
        "Cannot set frequency for %s to %ju\n",
        VAR_1->clk_init[VAR_3].name,
        VAR_1->clk_init[VAR_3].default_freq);
    continue;
   }
  }
  if (VAR_1->clk_init[VAR_3].enable) {
   VAR_4 = FUNC_0(VAR_2);
   if (VAR_4 != 0) {
    FUNC_4(VAR_1->dev,
        "Cannot enable %s\n",
        VAR_1->clk_init[VAR_3].name);
    continue;
   }
  }
 }
}
