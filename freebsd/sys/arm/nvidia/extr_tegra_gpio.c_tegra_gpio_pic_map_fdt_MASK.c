
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct tegra_gpio_softc {int gpio_npins; } ;
typedef int pcell_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_0(struct tegra_gpio_softc *VAR_4, u_int VAR_5,
    pcell_t *VAR_6, u_int *VAR_7, uint32_t *VAR_8)
{
 uint32_t VAR_9;
 if (VAR_5 != 2 || VAR_6[0] >= VAR_4->gpio_npins)
  return (VAR_0);






 if (VAR_6[1] == 1)
  VAR_9 = VAR_2 | VAR_3;
 else if (VAR_6[1] == 2)
  VAR_9 = VAR_2;
 else if (VAR_6[1] == 3)
  VAR_9 = VAR_2 | VAR_1;
 else if (VAR_6[1] == 4)
  VAR_9 = VAR_3;
 else if (VAR_6[1] == 8)
  VAR_9 = 0;
 else
  return (VAR_0);

 *VAR_7 = VAR_6[0];
 if (VAR_8 != ((void*)0))
  *VAR_8 = VAR_9;
 return (0);
}
