
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int u_int ;
struct tegra_gpio_softc {int dummy; } ;
struct tegra_gpio_irqsrc {scalar_t__ cfgreg; } ;
struct resource {int dummy; } ;
struct intr_map_data_gpio {int gpio_intr_mode; int gpio_pin_flags; int gpio_pin_num; } ;
struct intr_map_data_fdt {int cells; int ncells; } ;
struct intr_map_data {scalar_t__ type; } ;
struct intr_irqsrc {scalar_t__ isrc_handlers; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct tegra_gpio_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct tegra_gpio_softc*,int ,struct tegra_gpio_irqsrc*,scalar_t__,int ) ;
 int FUNC_2 (int ,struct intr_irqsrc*) ;
 int FUNC_3 (struct tegra_gpio_softc*,int ,int ,int *,scalar_t__*) ;
 int FUNC_4 (struct tegra_gpio_softc*,int ,int ,int ,int *,scalar_t__*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_6, struct intr_irqsrc *VAR_7,
    struct resource *VAR_8, struct intr_map_data *VAR_9)
{
 u_int VAR_10;
 uint32_t VAR_11;
 int VAR_12;
 struct tegra_gpio_softc *VAR_13;
 struct tegra_gpio_irqsrc *VAR_14;

 VAR_13 = FUNC_0(VAR_6);
 VAR_14 = (struct tegra_gpio_irqsrc *)VAR_7;

 if (VAR_9 == ((void*)0))
  return (VAR_1);


 if (VAR_9->type == VAR_4) {
  struct intr_map_data_fdt *VAR_15;

  VAR_15 = (struct intr_map_data_fdt *)VAR_9;
  VAR_12 = FUNC_3(VAR_13, VAR_15->ncells, VAR_15->cells, &VAR_10,
      &VAR_11);
 } else if (VAR_9->type == VAR_5) {
  struct intr_map_data_gpio *VAR_16;

  VAR_16 = (struct intr_map_data_gpio *)VAR_9;
  VAR_12 = FUNC_4(VAR_13, VAR_16->gpio_pin_num,
     VAR_16->gpio_pin_flags, VAR_16->gpio_intr_mode, &VAR_10, &VAR_11);
 } else
  return (VAR_1);
 if (VAR_12 != 0)
  return (VAR_0);





 if (VAR_7->isrc_handlers != 0)
  return (VAR_14->cfgreg == VAR_11 ? 0 : VAR_0);

 VAR_14->cfgreg = VAR_11;
 FUNC_1(VAR_13, VAR_2, VAR_14, VAR_11, VAR_3);
 FUNC_2(VAR_6, VAR_7);

 return (0);
}
