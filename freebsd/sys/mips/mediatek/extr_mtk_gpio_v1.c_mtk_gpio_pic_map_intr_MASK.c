
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct mtk_gpio_softc {int dummy; } ;
struct intr_map_data_gpio {int dummy; } ;
struct intr_map_data_fdt {int dummy; } ;
struct intr_map_data {int type; } ;
struct intr_irqsrc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;


 struct intr_irqsrc* FUNC_0 (struct mtk_gpio_softc*,int ) ;
 struct mtk_gpio_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct mtk_gpio_softc*,struct intr_map_data_fdt*,int *,int *) ;
 int FUNC_4 (struct mtk_gpio_softc*,struct intr_map_data_gpio*,int *,int *) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1, struct intr_map_data *VAR_2,
    struct intr_irqsrc **VAR_3)
{
 int VAR_4;
 u_int VAR_5;
 struct mtk_gpio_softc *VAR_6;

 VAR_6 = FUNC_1(VAR_1);
 switch (VAR_2->type) {
 case 129:
  VAR_4 = (FUNC_3(VAR_6,
      (struct intr_map_data_fdt *)VAR_2, &VAR_5, ((void*)0)));
  break;
 case 128:
  VAR_4 = (FUNC_4(VAR_6,
      (struct intr_map_data_gpio *)VAR_2, &VAR_5, ((void*)0)));
  break;
 default:
  VAR_4 = VAR_0;
  break;
 }

 if (VAR_4 != 0) {
  FUNC_2(VAR_1, "Invalid map type\n");
  return (VAR_4);
 }

 *VAR_3 = FUNC_0(VAR_6, VAR_5);
 return (0);
}
