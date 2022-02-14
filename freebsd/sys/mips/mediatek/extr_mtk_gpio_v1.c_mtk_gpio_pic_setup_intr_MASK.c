
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef unsigned int u_int ;
struct resource {int dummy; } ;
struct mtk_gpio_softc {int dummy; } ;
struct intr_map_data_gpio {int dummy; } ;
struct intr_map_data_fdt {int dummy; } ;
struct intr_map_data {int type; } ;
struct intr_irqsrc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int FUNC_0 (struct mtk_gpio_softc*) ;
 int FUNC_1 (struct mtk_gpio_softc*) ;
 unsigned int FUNC_2 (struct mtk_gpio_softc*,int ) ;
 int FUNC_3 (struct mtk_gpio_softc*,int ,scalar_t__) ;
 struct mtk_gpio_softc* FUNC_4 (int ) ;
 int FUNC_5 (struct mtk_gpio_softc*,struct intr_map_data_fdt*,unsigned int*,scalar_t__*) ;
 int FUNC_6 (struct mtk_gpio_softc*,struct intr_map_data_gpio*,unsigned int*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_6, struct intr_irqsrc *VAR_7,
    struct resource *VAR_8, struct intr_map_data *VAR_9)
{
 struct mtk_gpio_softc *VAR_10;
 uint32_t VAR_11;
 int VAR_12;
 uint32_t VAR_13;
 u_int VAR_14;

 if (VAR_9 == ((void*)0))
  return (VAR_0);

 VAR_10 = FUNC_4(VAR_6);

 switch (VAR_9->type) {
 case 129:
  VAR_12 = FUNC_5(VAR_10,
      (struct intr_map_data_fdt *)VAR_9, &VAR_14, &VAR_13);
  break;
 case 128:
  VAR_12 = FUNC_6(VAR_10,
      (struct intr_map_data_gpio *)VAR_9, &VAR_14, &VAR_13);
  break;
 default:
  VAR_12 = VAR_0;
  break;
 }

 if (VAR_12 != 0)
  return (VAR_12);

 FUNC_0(VAR_10);
 if (VAR_13 == VAR_1 || VAR_13 == VAR_3) {
  VAR_11 = FUNC_2(VAR_10, VAR_5) | (1u << VAR_14);
  FUNC_3(VAR_10, VAR_5, VAR_11);
 }
 if (VAR_13 == VAR_1 || VAR_13 == VAR_2) {
  VAR_11 = FUNC_2(VAR_10, VAR_4) | (1u << VAR_14);
  FUNC_3(VAR_10, VAR_4, VAR_11);
 }
 FUNC_1(VAR_10);
 return (0);
}
