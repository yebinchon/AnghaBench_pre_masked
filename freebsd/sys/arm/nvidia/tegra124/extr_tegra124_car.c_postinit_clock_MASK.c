
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra124_init_item {scalar_t__ frequency; scalar_t__ enable; int name; int * parent; } ;
struct tegra124_car_softc {int dev; } ;
struct clknode {int dummy; } ;


 struct tegra124_init_item* VAR_0 ;
 int FUNC_0 (struct clknode*) ;
 struct clknode* FUNC_1 (int ) ;
 int FUNC_2 (struct clknode*,scalar_t__,int ,int) ;
 int FUNC_3 (struct clknode*,int *) ;
 int FUNC_4 (int ,char*,int ,...) ;
 int FUNC_5 (struct tegra124_init_item*) ;

__attribute__((used)) static void
FUNC_6(struct tegra124_car_softc *VAR_1)
{
 int VAR_2;
 struct tegra124_init_item *VAR_3;
 struct clknode *VAR_4;
 int VAR_5;

 for (VAR_2 = 0; VAR_2 < FUNC_5(VAR_0); VAR_2++) {
  VAR_3 = &VAR_0[VAR_2];

  VAR_4 = FUNC_1(VAR_3->name);
  if (VAR_4 == ((void*)0)) {
   FUNC_4(VAR_1->dev, "Cannot find clock %s\n",
       VAR_3->name);
   continue;
  }
  if (VAR_3->parent != ((void*)0)) {
   VAR_5 = FUNC_3(VAR_4, VAR_3->parent);
   if (VAR_5 != 0) {
    FUNC_4(VAR_1->dev,
        "Cannot set parent for %s (to %s): %d\n",
        VAR_3->name, VAR_3->parent, VAR_5);
    continue;
   }
  }
  if (VAR_3->frequency != 0) {
   VAR_5 = FUNC_2(VAR_4, VAR_3->frequency, 0 , 9999);
   if (VAR_5 != 0) {
    FUNC_4(VAR_1->dev,
        "Cannot set frequency for %s: %d\n",
        VAR_3->name, VAR_5);
    continue;
   }
  }
  if (VAR_3->enable!= 0) {
   VAR_5 = FUNC_0(VAR_4);
   if (VAR_5 != 0) {
    FUNC_4(VAR_1->dev,
        "Cannot enable %s: %d\n", VAR_3->name, VAR_5);
    continue;
   }
  }
 }
}
