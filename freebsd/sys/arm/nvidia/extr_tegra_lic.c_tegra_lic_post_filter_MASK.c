
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_lic_sc {int parent; } ;
struct intr_irqsrc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ,struct intr_irqsrc*) ;
 struct tegra_lic_sc* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_0, struct intr_irqsrc *VAR_1)
{
 struct tegra_lic_sc *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_2->parent, VAR_1);
}
