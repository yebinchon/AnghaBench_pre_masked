
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ u_int ;
struct intr_map_data_fdt {int ncells; scalar_t__* cells; } ;
struct bcm_gpio_softc {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct bcm_gpio_softc*,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(struct bcm_gpio_softc *VAR_7, struct intr_map_data_fdt *VAR_8,
    u_int *VAR_9, uint32_t *VAR_10)
{
 u_int VAR_11;
 uint32_t VAR_12;
 if (VAR_8->ncells != 2)
  return (VAR_1);

 VAR_11 = VAR_8->cells[0];
 if (VAR_11 >= VAR_0 || FUNC_0(VAR_7, VAR_11))
  return (VAR_1);


 if (VAR_8->cells[1] == 1)
  VAR_12 = VAR_4;
 else if (VAR_8->cells[1] == 2)
  VAR_12 = VAR_3;
 else if (VAR_8->cells[1] == 3)
  VAR_12 = VAR_2;
 else if (VAR_8->cells[1] == 4)
  VAR_12 = VAR_5;
 else if (VAR_8->cells[1] == 8)
  VAR_12 = VAR_6;
 else
  return (VAR_1);

 *VAR_9 = VAR_11;
 if (VAR_10 != ((void*)0))
  *VAR_10 = VAR_12;
 return (0);
}
