
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct tegra_gpio_softc {TYPE_1__* isrcs; } ;
struct intr_map_data_gpio {int gpio_intr_mode; int gpio_pin_flags; int gpio_pin_num; } ;
struct intr_map_data_fdt {int cells; int ncells; } ;
struct intr_map_data {scalar_t__ type; } ;
struct intr_irqsrc {int dummy; } ;
typedef int device_t ;
struct TYPE_2__ {struct intr_irqsrc isrc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct tegra_gpio_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct tegra_gpio_softc*,int ,int ,size_t*,int *) ;
 int FUNC_2 (struct tegra_gpio_softc*,int ,int ,int ,size_t*,int *) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3, struct intr_map_data *VAR_4,
    struct intr_irqsrc **VAR_5)
{
 int VAR_6;
 u_int VAR_7;
 struct tegra_gpio_softc *VAR_8;

 VAR_8 = FUNC_0(VAR_3);

 if (VAR_4->type == VAR_1) {
  struct intr_map_data_fdt *VAR_9;

  VAR_9 = (struct intr_map_data_fdt *)VAR_4;
  VAR_6 = FUNC_1(VAR_8, VAR_9->ncells, VAR_9->cells, &VAR_7,
      ((void*)0));
 } else if (VAR_4->type == VAR_2) {
  struct intr_map_data_gpio *VAR_10;

  VAR_10 = (struct intr_map_data_gpio *)VAR_4;
  VAR_6 = FUNC_2(VAR_8, VAR_10->gpio_pin_num,
     VAR_10->gpio_pin_flags, VAR_10->gpio_intr_mode, &VAR_7, ((void*)0));
 } else
  return (VAR_0);

 if (VAR_6 == 0)
  *VAR_5 = &VAR_8->isrcs[VAR_7].isrc;
 return (VAR_6);
}
