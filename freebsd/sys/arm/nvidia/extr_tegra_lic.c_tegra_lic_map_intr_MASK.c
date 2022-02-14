
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_lic_sc {int parent; } ;
struct intr_map_data {int dummy; } ;
struct intr_irqsrc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ,struct intr_map_data*,struct intr_irqsrc**) ;
 struct tegra_lic_sc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0, struct intr_map_data *VAR_1,
    struct intr_irqsrc **VAR_2)
{
 struct tegra_lic_sc *VAR_3 = FUNC_1(VAR_0);

 return (FUNC_0(VAR_3->parent, VAR_1, VAR_2));
}
