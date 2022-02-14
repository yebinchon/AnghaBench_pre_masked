
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_gpio_softc {scalar_t__ num_pins; } ;
struct intr_map_data_fdt {int ncells; scalar_t__* cells; } ;
struct intr_map_data {scalar_t__ type; } ;
struct intr_irqsrc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct intr_irqsrc* FUNC_0 (struct mtk_gpio_softc*,scalar_t__) ;
 struct mtk_gpio_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_3, struct intr_map_data *VAR_4,
    struct intr_irqsrc **VAR_5)
{
 struct intr_map_data_fdt *VAR_6;
 struct mtk_gpio_softc *VAR_7;

 if (VAR_4->type != VAR_2)
  return (VAR_1);

 VAR_7 = FUNC_1(VAR_3);
 VAR_6 = (struct intr_map_data_fdt *)VAR_4;

 if (VAR_6->ncells != 1 || VAR_6->cells[0] >= VAR_7->num_pins)
  return (VAR_0);

 *VAR_5 = FUNC_0(VAR_7, VAR_6->cells[0]);
 return (0);
}
