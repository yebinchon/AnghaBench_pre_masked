
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct ti_gpio_softc {int dummy; } ;
struct intr_map_data_gpio {int dummy; } ;
struct intr_map_data_fdt {int dummy; } ;
struct intr_map_data {int type; } ;


 int VAR_0 ;


 int FUNC_0 (struct ti_gpio_softc*,struct intr_map_data_fdt*,int *,int *) ;
 int FUNC_1 (struct ti_gpio_softc*,struct intr_map_data_gpio*,int *,int *) ;

__attribute__((used)) static int
FUNC_2(struct ti_gpio_softc *VAR_1, struct intr_map_data *VAR_2,
    u_int *VAR_3, uint32_t *VAR_4)
{

 switch (VAR_2->type) {
 case 129:
  return (FUNC_0(VAR_1,
      (struct intr_map_data_fdt *)VAR_2, VAR_3, VAR_4));
 case 128:
  return (FUNC_1(VAR_1,
      (struct intr_map_data_gpio *)VAR_2, VAR_3, VAR_4));
 default:
  return (VAR_0);
 }
}
