
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ u_int ;
struct mtk_gpio_softc {scalar_t__ num_pins; int dev; } ;
struct intr_map_data_fdt {int ncells; scalar_t__* cells; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;

__attribute__((used)) static int
FUNC_1(struct mtk_gpio_softc *VAR_2,
    struct intr_map_data_fdt *VAR_3, u_int *VAR_4, uint32_t *VAR_5)
{
 u_int VAR_6;

 if (VAR_3->ncells != 1) {
  FUNC_0(VAR_2->dev, "Invalid #interrupt-cells\n");
  return (VAR_0);
 }

 VAR_6 = VAR_3->cells[0];

 if (VAR_6 >= VAR_2->num_pins) {
  FUNC_0(VAR_2->dev, "Invalid interrupt number %u\n", VAR_6);
  return (VAR_0);
 }

 *VAR_4 = VAR_6;
 if (VAR_5 != ((void*)0))
  *VAR_5 = VAR_1;

 return (0);
}
