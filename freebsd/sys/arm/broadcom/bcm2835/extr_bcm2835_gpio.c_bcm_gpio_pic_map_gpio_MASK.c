
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ u_int ;
struct intr_map_data_gpio {scalar_t__ gpio_pin_num; scalar_t__ gpio_intr_mode; } ;
struct bcm_gpio_softc {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (struct bcm_gpio_softc*,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(struct bcm_gpio_softc *VAR_7, struct intr_map_data_gpio *VAR_8,
    u_int *VAR_9, uint32_t *VAR_10)
{
 u_int VAR_11;
 uint32_t VAR_12;

 VAR_11 = VAR_8->gpio_pin_num;
 if (VAR_11 >= VAR_0 || FUNC_0(VAR_7, VAR_11))
  return (VAR_1);

 VAR_12 = VAR_8->gpio_intr_mode;
 if (VAR_12 != VAR_6 && VAR_12 != VAR_5 &&
     VAR_12 != VAR_4 && VAR_12 != VAR_3 &&
     VAR_12 != VAR_2)
  return (VAR_1);

 *VAR_9 = VAR_11;
 if (VAR_10 != ((void*)0))
  *VAR_10 = VAR_12;
 return (0);
}
