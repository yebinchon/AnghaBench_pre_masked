
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_lic_sc {int parent; } ;
struct resource {int dummy; } ;
struct intr_map_data {int dummy; } ;
struct intr_irqsrc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ,struct intr_irqsrc*,struct resource*,struct intr_map_data*) ;
 struct tegra_lic_sc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0, struct intr_irqsrc *VAR_1,
    struct resource *VAR_2, struct intr_map_data *VAR_3)
{
 struct tegra_lic_sc *VAR_4 = FUNC_1(VAR_0);

 return (FUNC_0(VAR_4->parent, VAR_1, VAR_2, VAR_3));
}
