
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ u_int ;
struct ti_gpio_softc {scalar_t__ sc_maxpin; } ;
struct intr_map_data_gpio {scalar_t__ gpio_pin_num; scalar_t__ gpio_intr_mode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int
FUNC_0(struct ti_gpio_softc *VAR_6, struct intr_map_data_gpio *VAR_7,
    u_int *VAR_8, uint32_t *VAR_9)
{
 uint32_t VAR_10;

 if (VAR_7->gpio_pin_num >= VAR_6->sc_maxpin)
  return (VAR_0);

 VAR_10 = VAR_7->gpio_intr_mode;
 if (VAR_10 != VAR_5 && VAR_10 != VAR_4 &&
     VAR_10 != VAR_3 && VAR_10 != VAR_2 &&
     VAR_10 != VAR_1)
  return (VAR_0);

 *VAR_8 = VAR_7->gpio_pin_num;
 if (VAR_9 != ((void*)0))
  *VAR_9 = VAR_10;
 return (0);
}
