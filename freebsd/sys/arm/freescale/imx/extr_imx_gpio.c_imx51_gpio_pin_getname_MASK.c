
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct imx51_gpio_softc {size_t gpio_npins; int sc_mtx; TYPE_1__* gpio_pins; } ;
typedef int device_t ;
struct TYPE_2__ {int gp_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct imx51_gpio_softc* FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2, uint32_t VAR_3, char *VAR_4)
{
 struct imx51_gpio_softc *VAR_5;

 VAR_5 = FUNC_0(VAR_2);
 if (VAR_3 >= VAR_5->gpio_npins)
  return (VAR_0);

 FUNC_2(&VAR_5->sc_mtx);
 FUNC_1(VAR_4, VAR_5->gpio_pins[VAR_3].gp_name, VAR_1);
 FUNC_3(&VAR_5->sc_mtx);

 return (0);
}
