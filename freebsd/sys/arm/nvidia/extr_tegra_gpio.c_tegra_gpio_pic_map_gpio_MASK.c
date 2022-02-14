
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ u_int ;
struct tegra_gpio_softc {scalar_t__ gpio_npins; } ;


 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_0(struct tegra_gpio_softc *VAR_4, u_int VAR_5,
    u_int VAR_6, u_int VAR_7, u_int *VAR_8, uint32_t *VAR_9)
{

 uint32_t VAR_10;

 if (VAR_5 >= VAR_4->gpio_npins)
  return (VAR_0);
 switch (VAR_7) {
 case 133:
 case 128:
  VAR_10 = 0;
  break;
 case 129:
  VAR_10 = VAR_3;
  break;
 case 130:
  VAR_10 = VAR_2 | VAR_3;
  break;
 case 131:
  VAR_10 = VAR_2;
  break;
 case 132:
  VAR_10 = VAR_2 | VAR_1;
  break;
 default:
  return (VAR_0);
 }
 *VAR_8 = VAR_5;
 if (VAR_9 != ((void*)0))
  *VAR_9 = VAR_10;
 return (0);
}
