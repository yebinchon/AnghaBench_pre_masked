
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ u_int ;
struct mtk_gpio_softc {scalar_t__ num_pins; int dev; } ;
struct intr_map_data_gpio {scalar_t__ gpio_pin_num; int gpio_intr_mode; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(struct mtk_gpio_softc *VAR_1,
    struct intr_map_data_gpio *VAR_2, u_int *VAR_3, uint32_t *VAR_4)
{
 u_int VAR_5;

 VAR_5 = VAR_2->gpio_pin_num;
 if (VAR_5 >= VAR_1->num_pins) {
  FUNC_0(VAR_1->dev, "Invalid interrupt number %u\n", VAR_5);
  return (VAR_0);
 }

 *VAR_3 = VAR_5;
 if (VAR_4 != ((void*)0))
  *VAR_4 = VAR_2->gpio_intr_mode;

 return (0);
}
