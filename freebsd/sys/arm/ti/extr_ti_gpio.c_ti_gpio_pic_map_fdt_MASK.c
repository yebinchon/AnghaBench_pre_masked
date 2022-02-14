
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct ti_gpio_softc {int sc_maxpin; } ;
struct intr_map_data_fdt {int ncells; int* cells; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_0(struct ti_gpio_softc *VAR_6, struct intr_map_data_fdt *VAR_7,
    u_int *VAR_8, uint32_t *VAR_9)
{
 uint32_t VAR_10;
 if (VAR_7->ncells != 2 || VAR_7->cells[0] >= VAR_6->sc_maxpin)
  return (VAR_0);


 if (VAR_7->cells[1] == 1)
  VAR_10 = VAR_3;
 else if (VAR_7->cells[1] == 2)
  VAR_10 = VAR_2;
 else if (VAR_7->cells[1] == 3)
  VAR_10 = VAR_1;
 else if (VAR_7->cells[1] == 4)
  VAR_10 = VAR_4;
 else if (VAR_7->cells[1] == 8)
  VAR_10 = VAR_5;
 else
  return (VAR_0);

 *VAR_8 = VAR_7->cells[0];
 if (VAR_9 != ((void*)0))
  *VAR_9 = VAR_10;
 return (0);
}
