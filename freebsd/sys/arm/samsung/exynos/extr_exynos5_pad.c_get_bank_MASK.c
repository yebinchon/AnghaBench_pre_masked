
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pad_softc {struct gpio_bank* gpio_map; } ;
struct gpio_bank {int ngpio; } ;



__attribute__((used)) static int
FUNC_0(struct pad_softc *VAR_0, int VAR_1,
    struct gpio_bank *VAR_2, int *VAR_3)
{
 int VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_6 = 0;
 for (VAR_5 = 0; VAR_0->gpio_map[VAR_5].ngpio != -1; VAR_5++) {
  VAR_4 = VAR_0->gpio_map[VAR_5].ngpio;

  if ((VAR_6 + VAR_4) > VAR_1) {
   *VAR_2 = VAR_0->gpio_map[VAR_5];
   *VAR_3 = (VAR_1 - VAR_6);
   return (0);
  }

  VAR_6 += VAR_4;
 }

 return (-1);
}
