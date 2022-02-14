
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct mtk_gpio_softc {size_t num_pins; TYPE_1__* pins; } ;
typedef int device_t ;
struct TYPE_2__ {size_t pin_caps; } ;


 int VAR_0 ;
 int FUNC_0 (struct mtk_gpio_softc*) ;
 int FUNC_1 (struct mtk_gpio_softc*) ;
 struct mtk_gpio_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1, uint32_t VAR_2, uint32_t *VAR_3)
{
 struct mtk_gpio_softc *VAR_4 = FUNC_2(VAR_1);

 if (VAR_2 >= VAR_4->num_pins)
  return (VAR_0);

 FUNC_0(VAR_4);
 *VAR_3 = VAR_4->pins[VAR_2].pin_caps;
 FUNC_1(VAR_4);

 return (0);
}
